#include "widget.h"
#include "ui_widget.h"

#include <QMenu>
#include <QTimer>
#include <QDebug>
#include <QPainter>
#include <QFileInfo>
#include <QDateTime>
#include <QJsonArray>
#include <QMessageBox>
#include <QMouseEvent>
#include <QMessageBox>
#include <QJsonObject>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QNetworkRequest>
#include <QRegularExpression>
#include <QNetworkAccessManager>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    for(int i = 0; i < 6; i++){
        QLabel *label_air = findChild<QLabel *>(QString("label_0%1").arg(i + 1));
        lab.append(label_air);
    }

    setFixedSize(280,555);                                                             //设置窗口固定尺寸大小
    setWindowFlag(Qt::FramelessWindowHint);                                            //设置为无边框窗口
    ui->widget_01->setStyleSheet("#widget_01{border: 2px solid white;}");              //设置窗口样式
    ui->widget_02->setStyleSheet("#widget_02{border: 2px solid white;}");
    ui->widget_03->setStyleSheet("#widget_03{border: 2px solid white;}");
    ui->widget_04->setStyleSheet("#widget_04{border: 2px solid white;}");


    ui->widget_0404->installEventFilter(this);                                         //安装事件过滤器
    ui->widget_0405->installEventFilter(this);
    citycodeUtils = new CityCodeUtils;
    InsertMap();

    myMenu = new QMenu(this);                                                          //创建一个菜单，向菜单中添加"Quit"和"not Quit"动作
    QAction *QuitAction = new QAction("Quit", myMenu);
    QAction *notQuitAction = new QAction("Not Quit", myMenu);
    myMenu->addAction(QuitAction);
    myMenu->addAction(notQuitAction);

    connect(myMenu, &QMenu::triggered, this, [=](QAction *action){                     //槽函数，当用户点击菜单中的动作时，会发出triggered信号
        if (action->text() == "Quit") {
            this->close();
        } else if (action->text() == "Not Quit") {
            return;
        }
    });

    getSysTimeTimer = new QTimer(this);                                                //定时器1，用于自动更新当前时间
    getSysTimeTimer->setInterval(1000);
    connect(getSysTimeTimer, &QTimer::timeout, this, &Widget::getSysTime);
    getSysTimeTimer->start();

    time = new QTimer(this);                                                           //定时器2，用于半小时定时刷新天气数据
    time->setInterval(1800000);
    connect(time, &QTimer::timeout, this, &Widget::checkAndLoadWeatherData);
    time->start();

    manager = new QNetworkAccessManager(this);
    connect(manager,&QNetworkAccessManager::finished, this, &Widget::readHttpRequest); //槽函数1，完成http请求
    connect(ui->btn_search, &QPushButton::clicked, this, &Widget::weatherSearch);      //槽函数2，搜索按键

    checkAndLoadWeatherData();                                                         //检查是否要重新进行http请求天气数据

}

Widget::~Widget()
{
    delete ui;
}

//鼠标按压事件
void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::RightButton){                               //当检测到鼠标右键按下时,在当前点击位置弹出菜单
        myMenu->exec(QCursor::pos());
    }
    if(event->button() == Qt::LeftButton){
        mOffset = event->globalPos() - this->pos();                       //偏移值等于鼠标当前位置减去窗口当前的位置
    }
    QWidget::mousePressEvent(event);
}

//鼠标移动事件
void Widget::mouseMoveEvent(QMouseEvent *event)
{
    //计算出新的窗口的左顶点坐标后移动
    this->move(event->globalPos() - mOffset);                             //鼠标当前位置减去偏移值等于新的窗口的左顶点坐标
}


/*槽函数，获取并刷新当前时间*/
void Widget::getSysTime()
{
    QDateTime dataTime = QDateTime::currentDateTime();                    //获取当前时间
    QDate date = dataTime.date();

    int year   = date.year();                                             //提取年、月、日、时、分、秒
    int month  = date.month();
    int day    = date.day();
    QString week = getChineseDayOfWeek(date.dayOfWeek());

    QString currentTime = QString("%1-%2-%3-%4")                          //将时间拼装起来，确保月份和日期、小时、分钟、秒钟都是双位数
            .arg(year)
            .arg(month, 2, 10, QChar('0'))
            .arg(day, 2, 10, QChar('0'))
            .arg(week);

    ui->label_currentDate->setText(currentTime);                          //更新标签显示时间
}

/*自定义函数，将 dayOfWeek 转换为中文星期几*/
QString Widget::getChineseDayOfWeek(int dayOfWeek){
    switch (dayOfWeek) {
    case 1: return "星期一";
    case 2: return "星期二";
    case 3: return "星期三";
    case 4: return "星期四";
    case 5: return "星期五";
    case 6: return "星期六";
    case 7: return "星期天";
    default: return "";
    }
}

/*往QMap中插入键值对*/
void Widget::InsertMap()
{
    mTypeMap.insert("暴雪", ":/res/type/BaoXue.png");
    mTypeMap.insert("暴雨", ":/res/type/BaoYu.png");
    mTypeMap.insert("暴雨到大暴雨", ":/res/type/BaoYuDaoDaBaoYu.png");
    mTypeMap.insert("大暴雨", ":/res/type/DaBaoYu.png");
    mTypeMap.insert("大暴雨到特大暴雨", ":/res/type/DaBaoYuDaoTeDaBaoYu.png");
    mTypeMap.insert("大到暴雪", ":/res/type/DaDaoBaoXue.png");
    mTypeMap.insert("大雪", ":/res/type/DaXue.png");
    mTypeMap.insert("大雨", ":/res/type/DaYu.png");
    mTypeMap.insert("冻雨", ":/res/type/DongYu.png");
    mTypeMap.insert("多云", ":/res/type/DuoYun.png");
    mTypeMap.insert("浮沉", ":/res/type/FuChen.png");
    mTypeMap.insert("雷阵雨", ":/res/type/LeiZhenYu.png");
    mTypeMap.insert("雷阵雨伴有冰雹", ":/res/type/LeiZhenYuBanYouBingBao.png");
    mTypeMap.insert("霾", ":/res/type/Mai.png");
    mTypeMap.insert("强沙尘暴", ":/res/type/QiangShaChenBao.png");
    mTypeMap.insert("晴", ":/res/type/Qing.png");
    mTypeMap.insert("沙尘暴", ":/res/type/ShaChenBao.png");
    mTypeMap.insert("特大暴雨", ":/res/type/TeDaBaoYu.png");
    mTypeMap.insert("undefined", ":/res/type/undefined.png");
    mTypeMap.insert("雾", ":/res/type/Wu.png");
    mTypeMap.insert("小到中雪", ":/res/type/XiaoDaoZhongXue.png");
    mTypeMap.insert("小到中雨", ":/res/type/XiaoDaoZhongYu.png");
    mTypeMap.insert("小雪", ":/res/type/XiaoXue.png");
    mTypeMap.insert("小雨", ":/res/type/XiaoYu.png");
    mTypeMap.insert("雪", ":/res/type/Xue.png");
    mTypeMap.insert("扬沙", ":/res/type/YangSha.png");
    mTypeMap.insert("阴", ":/res/type/Yin.png");
    mTypeMap.insert("雨", ":/res/type/Yu.png");
    mTypeMap.insert("雨夹雪", ":/res/type/YuJiaXue.png");
    mTypeMap.insert("阵雪", ":/res/type/ZhenXue.png");
    mTypeMap.insert("阵雨", ":/res/type/ZhenYu.png");
    mTypeMap.insert("中到大雪", ":/res/type/ZhongDaoDaXue.png");
    mTypeMap.insert("中到大雨", ":/res/type/ZhongDaoDaYu.png");
    mTypeMap.insert("中雪", ":/res/type/ZhongXue.png");
    mTypeMap.insert("中雨", ":/res/type/ZhongYu.png");
}

/*绘制低温曲线*/
void Widget::drawTempLineHigh()
{
    QPainter painter(ui->widget_0404);
    painter.setRenderHint(QPainter::Antialiasing, true);              //启用抗锯齿

    int sum = 0;
    int ave;
    int offset = 0;
    int middle = ui->widget_0404->height() / 2;

    QFont font("Arial", 10);
    painter.setFont(font);

    for (int i = 0; i < 6; i++) {
        sum += dayHighTem[i].toInt();
    }
    ave = sum / 6;

    QPoint points[6];
    for (int i = 0; i < 6; i++) {
        points[i].setX(lab[i]->x() + lab[i]->width() / 2);             //当前点的横坐标位置与其头顶上方的空气质量组件有关
        offset = dayHighTem[i].toInt() - ave;                          //偏移值等于当天温度-平均值，可乘以适当倍数以增加曲率
        points[i].setY(middle - offset);                               //因为画笔直接与当前窗口关联了，所以纵坐标等于当前窗口高度-偏移值
        painter.setPen(Qt::yellow);
        painter.setBrush(Qt::yellow);

        painter.drawEllipse(points[i], 2, 2);                          //绘制圆点

        QString temperatureText = QString("%1℃").arg(dayHighTem[i]);
        QPoint textPosition(points[i].x() - 7, points[i].y() + 15);    //调整文字位置
        painter.setPen(QColor(Qt::white));
        painter.drawText(textPosition, temperatureText);               //在点的下方绘制温度值
    }

    painter.setPen(Qt::yellow);
    for (int i = 0; i < 5; i++) {
        painter.drawLine(points[i], points[i + 1]);                    //绘制5条温度西线
    }
}

/*绘制高温曲线*/
void Widget::drawTempLineLow()
{
    QPainter painter(ui->widget_0405);
    painter.setRenderHint(QPainter::Antialiasing, true);

    int sum = 0;
    int ave;
    int offset = 0;
    int middle = ui->widget_0405->height() / 2;

    QFont font("Arial", 10);
    painter.setFont(font);

    for (int i = 0; i < 6; i++) {
        sum += dayLowTem[i].toInt();
    }
    ave = sum / 6;

    QPoint points[6];
    for (int i = 0; i < 6; i++) {
        points[i].setX(lab[i]->x() + lab[i]->width() / 2);
        offset = dayLowTem[i].toInt() - ave;
        points[i].setY(middle - offset);

        painter.setPen(QColor(35, 255, 255));
        painter.setBrush(QColor(35, 255, 255));
        painter.drawEllipse(points[i], 2, 2);

        QString temperatureText = QString("%1℃").arg(dayLowTem[i]);
        QPoint textPosition(points[i].x() - 7, points[i].y() + 15);
        painter.setPen(QColor(Qt::white));
        painter.drawText(textPosition, temperatureText);
    }

    painter.setPen(QColor(35, 255, 255));
    for (int i = 0; i < 5; i++) {
        painter.drawLine(points[i], points[i + 1]);
    }
}

/*事件过滤函数*/
bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->widget_0404 && event->type() == QEvent::Paint){
        drawTempLineHigh();
        return true;
    }
    if(watched == ui->widget_0405 && event->type() == QEvent::Paint){
        drawTempLineLow();
        return true;
    }
    return QWidget::eventFilter(watched,event);
}

/*工具函数：提取温度信息*/
QString Widget::extractTemperature(const QString &tempString) {
    QRegExp regExp("\\d+");                   // 匹配数字
    if (regExp.indexIn(tempString) != -1) {
        return regExp.cap(0);                 // 返回匹配的数字
    }
    return "N/A";                             // 如果未匹配到，则返回N/A
}

/*解析json数据*/
void Widget::praseJsonData(QString jsonString) {
    // 将JSON字符串转换为QJsonDocument文档
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonString.toUtf8());

    // 检查JSON文档是否有效
    if (jsonDoc.isNull() || !jsonDoc.isObject()) {
        qDebug() << "Invalid JSON data!";
        return;
    }
    // 把JSON文档转化为json对象
    QJsonObject jsonObj = jsonDoc.object();

    // 城市信息解析(**城市名称，省会名称**)
    if (jsonObj.contains("cityInfo") && jsonObj["cityInfo"].isObject()) {
        QJsonObject cityInfo = jsonObj["cityInfo"].toObject();
        QString city = cityInfo.value("city").toString("未知城市");
        QString parent = cityInfo.value("parent").toString("未知省份");
        QString updateTime = cityInfo.value("updateTime").toString("未知时间");
        ui->label_city->setText(QString("%1, %2").arg(parent).arg(city)); // *设置城市名称和省份
    }


    // 天气数据解析
    if (jsonObj.contains("data") && jsonObj["data"].isObject()) {
        QJsonObject data = jsonObj["data"].toObject();

        ui->label_WeatherNum->setText(data.value("wendu").toString("N/A") + "℃");      // *设置当天温度
        ui->label_WetNum->setText(data.value("shidu").toString("N/A"));                 // *设置当天湿度
        ui->label_AirNum->setText(data.value("quality").toString("N/A"));               // *设置当天空气质量
        qint16 Pm25 = data.value("pm25").toInt(-1);                                     // 获取当天的pm2.5
        ui->label_PmNum->setText(QString::number(Pm25));                                // *设置当天PM2.5
        ui->label_GanMao->setText(data.value("ganmao").toString("N/A"));                // *设置提示信息

        // 解析昨天的天气
        if (data.contains("yesterday") && data["yesterday"].isObject()) {
            QJsonObject yestObj = data["yesterday"].toObject();
            QString high = extractTemperature(yestObj.value("high").toString());        // 获取并提取昨天的最高温度
            dayHighTem[0] = high;
            QString low = extractTemperature(yestObj.value("low").toString());          // 获取并提取昨天的最低温度
            dayLowTem[0] = low;
            QString type = yestObj.value("type").toString("未知");                       // 获取昨天的天气状况
            QString date = yestObj.value("ymd").toString("未知日期");                     // 获取昨天的日期
            qint16 aqi = yestObj.value("aqi").toInt(-1);                                 // 获取昨天的空气质量指数
            ui->label_01->setStyleSheet(aqi <= 50 ? "background-color: rgb(85, 170, 0);" :
                                                        (aqi <= 100 ? "background-color: rgb(255, 146, 21);" :
                                                                      "background-color: rgb(255, 0, 0);"));

            QStringList parts = date.split("-");
            QString lastDate = parts.size() == 3 ? QString("%1-%2").arg(parts[1]).arg(parts[2]) : "未知日期";
            ui->label_date1->setText(lastDate);                                          // *设置昨天的日期
            ui->label_sweather01->setText(type);                                         // *设置昨天的天气

            auto it = mTypeMap.find(type);                                               // *设置昨天的天气图片
            if (it != mTypeMap.end()) {
                QString IconPath = it.value();
                QPixmap pixmap(IconPath);
                ui->label_sweather1->setPixmap(pixmap);
            } else {
                qDebug() << "Weather type not found in mTypeMap:" << type;
            }

            ui->label_01->setText(aqi <= 50 ? "优" : (aqi <= 100 ? "良" : "差"));          // *设置昨天的空气质量
            ui->label_windDir1->setText(yestObj.value("fx").toString("未知风向"));         // *设置昨天的风向
            ui->label_windDir01->setText(yestObj.value("fl").toString("未知风级"));        // *设置昨天的风级
        }

        // 解析未来天气预报
        if (data.contains("forecast") && data["forecast"].isArray()) {
            QJsonArray forecastArray = data["forecast"].toArray();
            int i = 1;
            for (const QJsonValue &value : forecastArray) {
                if (value.isObject()) {
                    QJsonObject forecast = value.toObject();
                    QString high = extractTemperature(forecast.value("high").toString());   //获取并提取出最高温度
                    dayHighTem[i] = high;
                    QString low = extractTemperature(forecast.value("low").toString());     //获取并提取出最低温度
                    dayLowTem[i] = low;
                    QString type = forecast.value("type").toString("未知");                  //获取天气情况
                    QString date = forecast.value("ymd").toString("未知日期");               //获取日期
                    QString fx = forecast.value("fx").toString("未知风向");                  //获取风向
                    QString fl = forecast.value("fl").toString("未知风级");                  //获取风级
                    qint16 aqi = forecast.value("aqi").toInt(-1);                          //获取空气指数

                    QStringList parts = date.split("-");
                    QString lastDate = parts.size() == 3 ? QString("%1-%2").arg(parts[1]).arg(parts[2]) : "未知日期";

                    if(i == 1){
                        ui->label_WeatherStaute->setText(type);                            //设置当天的天气情况
                        ui->label_FxTitle->setText(fx);                                    //设置当天的风向
                        ui->label_FxNum->setText(fl);                                      //设置当天的风级
                    }

                    QLabel *label_day = findChild<QLabel *>(QString("label_day%1").arg(i + 1));
                    QLabel *label_date = findChild<QLabel *>(QString("label_date%1").arg(i + 1));
                    QLabel *label_sweather = findChild<QLabel *>(QString("label_sweather0%1").arg(i + 1));
                    QLabel *label_windDir = findChild<QLabel *>(QString("label_windDir%1").arg(i + 1));
                    QLabel *label_windDir0 = findChild<QLabel *>(QString("label_windDir0%1").arg(i + 1));
                    QLabel *label_airQuality = findChild<QLabel *>(QString("label_0%1").arg(i + 1));

                    if (label_day && label_date && label_sweather && label_windDir && label_windDir0 && label_airQuality) {
                        label_day->setText(i == 1 ? "今天" : forecast.value("week").toString("未知"));     //*设置星期几
                        label_date->setText(lastDate);                                                    //*设置日期
                        label_sweather->setText(type);                                                    //*设置天气情况
                        label_windDir->setText(fx);                                                       //*设置风向
                        label_windDir0->setText(fl);                                                      //*设置风级

                        QString airStatus = (aqi <= 50) ? "优" : ((aqi <= 100) ? "良" : "差");
                        label_airQuality->setText(airStatus);                                             //*设置空气质量
                        label_airQuality->setStyleSheet(aqi <= 50 ? "background-color: rgb(85, 170, 0);" :
                                                                    (aqi <= 100 ? "background-color: rgb(255, 146, 21);" :
                                                                                  "background-color: rgb(255, 0, 0);"));
                        auto it = mTypeMap.find(type);
                        if (it != mTypeMap.end()) {
                            QString IconPath = it.value();
                            QPixmap pixmap(IconPath);
                            if(i == 1){                                                                   //*设置当天的天气质量图片
                                ui->label_WeatherImage->setPixmap(pixmap);
                            }
                            QLabel *label_weatherIcon = findChild<QLabel *>(QString("label_sweather%1").arg(i + 1));
                            if (label_weatherIcon) {
                                label_weatherIcon->setPixmap(pixmap);                                    //*设置天气质量图片
                            }
                        }
                    } else {
                        qDebug() << "One or more labels not found for day" << i;
                    }
                    if(i < 5){
                        i++;
                    }

                }
            }

        }
    }
    update(); // 更新界面

}

//http请求并将返回数据保存到本地文档中
void Widget::readHttpRequest()
{
    int resCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();    // 获取返回码，正确获取为200，错误时为404
    qDebug() << "resCode:" << resCode;
    if(resCode == 200 && reply->error() == QNetworkReply::NoError){
        QString response = QString::fromUtf8(reply->readAll());                           //获取返回信息
        QFile file("C:/Users/mi/Desktop/Qt_Project/Weather-forecast/json_data");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Truncate)){
            qDebug() << "文件打开失败";
        }
        file.write(response.toLocal8Bit());                                               //将返回的json数据写入文件中
        file.close();
        praseJsonData(response);                                                          //解析json数据
    }else{
        qDebug() << "Error:" << reply->errorString();                                     //获取错误信息
        QMessageBox::warning(this,"错误","网络请求失败",QMessageBox::Ok);
    }
}

//检查本地json文件是否存在，以及是否该重新访问
void Widget::checkAndLoadWeatherData()
{
    QString cacheFilePath = "C:/Users/mi/Desktop/Qt_Project/Weather-forecast/json_data"; // 缓存文件路径
    QFileInfo cacheFileInfo(cacheFilePath);

    if (cacheFileInfo.exists()) {
        // 文件存在，检查是否过期
        QDateTime lastModified = cacheFileInfo.lastModified();
        QDateTime currentTime = QDateTime::currentDateTime();

        qint64 elapsedSecs = lastModified.secsTo(currentTime);
        qDebug() << "缓存存在，距离上次修改的时间:" << elapsedSecs << "秒";

        if (elapsedSecs <= 3600) { // 如果文件修改时间在1小时内
            // 解析本地缓存文件
            QFile cacheFile(cacheFilePath);
            if (cacheFile.open(QIODevice::ReadOnly)) {
                QString jsonData = QString::fromLocal8Bit(cacheFile.readAll());
                cacheFile.close();
                qDebug() << "使用本地缓存数据";
                praseJsonData(jsonData);
                return; // 使用缓存数据后返回
            }
        }
    }

    // 如果缓存不存在或已过期，则发送 HTTP 请求
    qDebug() << "缓存无效，发送HTTP请求获取数据";
    QUrl url(website);
    QNetworkRequest request(url);
    reply = manager->get(request);
}

//根据用户输入的城市名进行查询天气数据
void Widget::weatherSearch()
{
    QString ser_city_name = ui->lineEdit_searchData->text();                               //获取用户输入的城市名
    QString cityCode = citycodeUtils->getCityCodeFromName(ser_city_name);                  //获取返回的城市id
    if(cityCode == 000000){                                                                //返回错误代码，则不进行http请求
        QMessageBox msgBox;
        msgBox.setText("未检索到城市.");
        msgBox.exec();
    }else{
        website = QString("http://t.weather.itboy.net/api/weather/city/%1").arg(cityCode); //拼接要访问的网址
        if(website == lastwebsite){                                                        //如果此次访问的和上次访问的一样，则不进行http请求
            checkAndLoadWeatherData();
        }else{
            lastwebsite = website;
            QUrl url(website);
            QNetworkRequest request(url);
            reply = manager->get(request);                                                 //进行http请求
        }
    }
}
