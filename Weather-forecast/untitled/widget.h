#ifndef WIDGET_H
#define WIDGET_H

#include <QMenu>
#include <QLabel>
#include <QWidget>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include "citycodeutils.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void praseJsonData(QString jsonString);                //解析返回的json数据
    QString getChineseDayOfWeek(int dayOfWeek);            //自定义函数，将 dayOfWeek 转换为中文星期几
    void InsertMap();                                      //往map中插入键值对
    void drawTempLineHigh();                               //绘制6天的高温曲线
    void drawTempLineLow();                                //绘制6天的低温曲线
    QString extractTemperature(const QString &tempString); //工具函数：提取温度信息

private:
    Ui::Widget *ui;
    QMenu *myMenu;                                         //菜单
    QPoint mOffset;                                        //偏移值
    QTimer* getSysTimeTimer;                               //定时器，用于时间显示
    QTimer* time;                                          //定时器，用于定时刷新天气数据
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    CityCodeUtils *citycodeUtils;                          //自定义类的对象
    QMap<QString,QString> mTypeMap;                        //存储天气类型和相对应天气图片的路径
    //负责存储当前拼接的网址
    QString website = "http://t.weather.itboy.net/api/weather/city/101010100";
    //负责存储上一个搜索访问的网址，若新网址与此网址相同，则就不进行http请求
    QString lastwebsite = "http://t.weather.itboy.net/api/weather/city/101010100";
    QList<QLabel*> lab;                                    //存储6天的空气质量组件
    QString dayHighTem[6];                                 //存储6天的最高温度
    QString dayLowTem[6];                                  //存储6天的最低温度

protected:
    void mousePressEvent(QMouseEvent *event) override;     //重写鼠标按压事件，当鼠标右键按下时弹出提示框，用于关闭当前程序
    void mouseMoveEvent(QMouseEvent *event) override;      //重写鼠标移动事件
    bool eventFilter(QObject *watched, QEvent *event);     //事件过滤函数，若发生绘画事件则刷新6天的高低温曲线显示

private slots:
    void getSysTime();
    void readHttpRequest();                                //读取http返回值并存入本地文件中，然后调用函数解析json数据
    void checkAndLoadWeatherData();                        //检查是否要重新进行http请求天气数据
    void weatherSearch();                                  //根据用户输入的城市名进行查询天气数据
};
#endif // WIDGET_H
