#ifndef CITYCODEUTILS_H
#define CITYCODEUTILS_H

#include <QMap>

/*该类负责根据用户输入的城市名返回相应的城市code_id*/
class CityCodeUtils
{
public:
    CityCodeUtils();

    QMap<QString,QString> cityMap;                     //存储键值对，城市名字和code_id
    QString getCityCodeFromName(QString cityName);     //根据用户输入的城市名在QMap中检索，返回相应的code_id
    void initCityMap();                                //负责解析本地的json数据，提取出城市名字和code_id存入QMap中
};

#endif // CITYCODEUTILS_H
