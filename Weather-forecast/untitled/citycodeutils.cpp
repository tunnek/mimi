#include <QFile>
#include <QDebug>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include "citycodeutils.h"

CityCodeUtils::CityCodeUtils() {}

// 根据用户输入的城市名在QMap中检索，返回相应的code_id
QString CityCodeUtils::getCityCodeFromName(QString cityName)
{
    // 如果QMap为空，则调用初始化函数，解析json数据提取城市名字和id存入QMap中
    if(cityMap.isEmpty()){
        initCityMap();
    }
    QString city_name2 = QString("%1市").arg(cityName); //假设用户输入的不带市
    QString city_name3 = QString("%1县").arg(cityName); //假设用户输入的不带县
    QString city_name4 = cityName;                      //假设用户输入的带市，但是我们不需要市
    if (city_name4.contains("市")) {
        city_name4.remove("市");
    }
    QString city_name5 = cityName;                      //假设用户输入的带县，但是我们不需要县
    if (city_name5.contains("县")) {
        city_name5.remove("县");
    }

    QMap<QString, QString>::const_iterator it = cityMap.constBegin();  //迭代器指向QMap的起始
    while (it != cityMap.constEnd()) {                                 //利用迭代器遍历QMap
        if(it.key() == cityName || it.key() == city_name2 || it.key() == city_name3 || it.key() == city_name4 ||it.key() == city_name5){
            return it.value();                                         //返回对应的code_id
            break;                                                     //返回后结束当前循环
        }
        ++it;
    }
    return 000000;                                                     //若没有找到匹配的，则返000000，代表错误代码
}

// 负责解析本地的json数据，提取出城市名字和code_id存入QMap中
void CityCodeUtils::initCityMap()
{
    QFile file(":/aaa.json");
    file.open(QIODevice::ReadOnly);
    QString data = QString::fromUtf8(file.readAll());
    file.close();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(data.toUtf8());    //将读取的json字符串转化为jsonDocument文档

    // 准备一个 QMap 来存储解析的数据
    QMap<QString, QString> dataMap;
    // 如果jsonDocument文档是一个数组
    if (!jsonDoc.isNull() && jsonDoc.isArray()) {
        QJsonArray jsonArray = jsonDoc.array();                        //将json文档转化为一个jsonArray数组
        for (const QJsonValue &value : jsonArray) {                    //遍历数组中的每个对象
            if (value.isObject()) {
                QJsonObject jsonObj = value.toObject();                //将数组中的对象赋值给json对象，然后根据键值对提取json对象中的内容
                QString city_name = jsonObj["city_name"].toString();
                QString city_code = jsonObj["city_code"].toString();
                cityMap.insert(city_name,city_code);                   //向QMap中插入键值对
            }
        }
    }
}
