/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_01;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_searchData;
    QLabel *label_searchImage;
    QLabel *label_currentDate;
    QWidget *widget_02;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_WeatherImage;
    QGridLayout *gridLayout_2;
    QLabel *label_WeatherNum;
    QLabel *label_WeatherNumRange_2;
    QLabel *label_WeatherStaute;
    QLabel *label_WeatherNumRange;
    QWidget *widget_03;
    QVBoxLayout *verticalLayout;
    QLabel *label_GanMao;
    QWidget *widget_0301;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_01;
    QLabel *label_FxImage;
    QVBoxLayout *verticalLayout_01;
    QLabel *label_FxTitle;
    QLabel *label_FxNum;
    QHBoxLayout *horizontalLayout_02;
    QLabel *label_PmImage;
    QVBoxLayout *verticalLayout_02;
    QLabel *label_PmTitle;
    QLabel *label_PmNum;
    QHBoxLayout *horizontalLayout_03;
    QLabel *label_WetImage;
    QVBoxLayout *verticalLayout_03;
    QLabel *label_WetTitle;
    QLabel *label_WetNum;
    QHBoxLayout *horizontalLayout_04;
    QLabel *label_AirImage;
    QVBoxLayout *verticalLayout_04;
    QLabel *label_AirTitle;
    QLabel *label_AirNum;
    QWidget *widget_04;
    QWidget *widget_0401;
    QGridLayout *gridLayout_3;
    QLabel *label_day2;
    QLabel *label_date3;
    QLabel *label_day4;
    QLabel *label_day6;
    QLabel *label_date4;
    QLabel *label_day5;
    QLabel *label_day1;
    QLabel *label_day3;
    QLabel *label_date1;
    QLabel *label_date6;
    QLabel *label_date2;
    QLabel *label_date5;
    QWidget *widget_0402;
    QGridLayout *gridLayout_5;
    QLabel *label_sweather1;
    QLabel *label_sweather2;
    QLabel *label_sweather3;
    QLabel *label_sweather4;
    QLabel *label_sweather5;
    QLabel *label_sweather6;
    QLabel *label_sweather01;
    QLabel *label_sweather02;
    QLabel *label_sweather03;
    QLabel *label_sweather04;
    QLabel *label_sweather05;
    QLabel *label_sweather06;
    QWidget *widget_0403;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_01;
    QLabel *label_02;
    QLabel *label_6;
    QLabel *label_03;
    QLabel *label_04;
    QLabel *label_05;
    QWidget *widget_0404;
    QWidget *widget_0405;
    QWidget *widget_0406;
    QGridLayout *gridLayout_4;
    QLabel *label_windDir1;
    QLabel *label_windDir2;
    QLabel *label_windDir4;
    QLabel *label_windDir5;
    QLabel *label_windDir6;
    QLabel *label_windDir01;
    QLabel *label_windDir02;
    QLabel *label_windDir03;
    QLabel *label_windDir04;
    QLabel *label_windDir05;
    QLabel *label_windDir06;
    QLabel *label_windDir3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(279, 554);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Widget->setFont(font);
        Widget->setStyleSheet(QString::fromUtf8("#Widget{background-color: rgb(26, 26, 26);}"));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 261, 541));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_01 = new QWidget(widget);
        widget_01->setObjectName(QString::fromUtf8("widget_01"));
        widget1 = new QWidget(widget_01);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 0, 231, 24));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_searchData = new QLineEdit(widget1);
        lineEdit_searchData->setObjectName(QString::fromUtf8("lineEdit_searchData"));

        horizontalLayout_2->addWidget(lineEdit_searchData);

        label_searchImage = new QLabel(widget1);
        label_searchImage->setObjectName(QString::fromUtf8("label_searchImage"));
        label_searchImage->setMinimumSize(QSize(20, 20));
        label_searchImage->setMaximumSize(QSize(20, 20));
        label_searchImage->setPixmap(QPixmap(QString::fromUtf8(":/res/search.png")));
        label_searchImage->setScaledContents(true);

        horizontalLayout_2->addWidget(label_searchImage);

        label_currentDate = new QLabel(widget1);
        label_currentDate->setObjectName(QString::fromUtf8("label_currentDate"));
        label_currentDate->setFont(font);
        label_currentDate->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_currentDate);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_2->addWidget(widget_01);

        widget_02 = new QWidget(widget);
        widget_02->setObjectName(QString::fromUtf8("widget_02"));
        widget2 = new QWidget(widget_02);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 10, 241, 63));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_WeatherImage = new QLabel(widget2);
        label_WeatherImage->setObjectName(QString::fromUtf8("label_WeatherImage"));
        label_WeatherImage->setMinimumSize(QSize(50, 50));
        label_WeatherImage->setMaximumSize(QSize(50, 50));
        label_WeatherImage->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.png")));
        label_WeatherImage->setScaledContents(true);

        horizontalLayout->addWidget(label_WeatherImage);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_WeatherNum = new QLabel(widget2);
        label_WeatherNum->setObjectName(QString::fromUtf8("label_WeatherNum"));
        label_WeatherNum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 26pt \"Arial\";"));

        gridLayout_2->addWidget(label_WeatherNum, 0, 0, 1, 2);

        label_WeatherNumRange_2 = new QLabel(widget2);
        label_WeatherNumRange_2->setObjectName(QString::fromUtf8("label_WeatherNumRange_2"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_WeatherNumRange_2->setFont(font1);
        label_WeatherNumRange_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_WeatherNumRange_2, 0, 2, 1, 1);

        label_WeatherStaute = new QLabel(widget2);
        label_WeatherStaute->setObjectName(QString::fromUtf8("label_WeatherStaute"));
        label_WeatherStaute->setFont(font1);
        label_WeatherStaute->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_WeatherStaute, 1, 0, 1, 1);

        label_WeatherNumRange = new QLabel(widget2);
        label_WeatherNumRange->setObjectName(QString::fromUtf8("label_WeatherNumRange"));
        label_WeatherNumRange->setFont(font1);
        label_WeatherNumRange->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_WeatherNumRange, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(widget_02);

        widget_03 = new QWidget(widget);
        widget_03->setObjectName(QString::fromUtf8("widget_03"));
        verticalLayout = new QVBoxLayout(widget_03);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_GanMao = new QLabel(widget_03);
        label_GanMao->setObjectName(QString::fromUtf8("label_GanMao"));
        label_GanMao->setFont(font);
        label_GanMao->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_GanMao);

        widget_0301 = new QWidget(widget_03);
        widget_0301->setObjectName(QString::fromUtf8("widget_0301"));
        widget_0301->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 142, 67);\n"
"border-radius: 10px;"));
        gridLayout = new QGridLayout(widget_0301);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(20, 10, 20, 10);
        horizontalLayout_01 = new QHBoxLayout();
        horizontalLayout_01->setObjectName(QString::fromUtf8("horizontalLayout_01"));
        label_FxImage = new QLabel(widget_0301);
        label_FxImage->setObjectName(QString::fromUtf8("label_FxImage"));
        label_FxImage->setMinimumSize(QSize(35, 35));
        label_FxImage->setMaximumSize(QSize(35, 35));
        label_FxImage->setPixmap(QPixmap(QString::fromUtf8(":/res/wind.png")));
        label_FxImage->setScaledContents(true);

        horizontalLayout_01->addWidget(label_FxImage);

        verticalLayout_01 = new QVBoxLayout();
        verticalLayout_01->setObjectName(QString::fromUtf8("verticalLayout_01"));
        label_FxTitle = new QLabel(widget_0301);
        label_FxTitle->setObjectName(QString::fromUtf8("label_FxTitle"));
        label_FxTitle->setFont(font);
        label_FxTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_01->addWidget(label_FxTitle);

        label_FxNum = new QLabel(widget_0301);
        label_FxNum->setObjectName(QString::fromUtf8("label_FxNum"));
        label_FxNum->setFont(font);
        label_FxNum->setAlignment(Qt::AlignCenter);

        verticalLayout_01->addWidget(label_FxNum);


        horizontalLayout_01->addLayout(verticalLayout_01);

        horizontalLayout_01->setStretch(0, 2);
        horizontalLayout_01->setStretch(1, 3);

        gridLayout->addLayout(horizontalLayout_01, 0, 0, 1, 1);

        horizontalLayout_02 = new QHBoxLayout();
        horizontalLayout_02->setObjectName(QString::fromUtf8("horizontalLayout_02"));
        label_PmImage = new QLabel(widget_0301);
        label_PmImage->setObjectName(QString::fromUtf8("label_PmImage"));
        label_PmImage->setMinimumSize(QSize(35, 35));
        label_PmImage->setMaximumSize(QSize(35, 35));
        label_PmImage->setPixmap(QPixmap(QString::fromUtf8(":/res/pm25.png")));
        label_PmImage->setScaledContents(true);

        horizontalLayout_02->addWidget(label_PmImage);

        verticalLayout_02 = new QVBoxLayout();
        verticalLayout_02->setObjectName(QString::fromUtf8("verticalLayout_02"));
        label_PmTitle = new QLabel(widget_0301);
        label_PmTitle->setObjectName(QString::fromUtf8("label_PmTitle"));
        label_PmTitle->setFont(font);
        label_PmTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_02->addWidget(label_PmTitle);

        label_PmNum = new QLabel(widget_0301);
        label_PmNum->setObjectName(QString::fromUtf8("label_PmNum"));
        label_PmNum->setFont(font);
        label_PmNum->setAlignment(Qt::AlignCenter);

        verticalLayout_02->addWidget(label_PmNum);


        horizontalLayout_02->addLayout(verticalLayout_02);

        horizontalLayout_02->setStretch(0, 1);
        horizontalLayout_02->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_02, 0, 1, 1, 1);

        horizontalLayout_03 = new QHBoxLayout();
        horizontalLayout_03->setObjectName(QString::fromUtf8("horizontalLayout_03"));
        label_WetImage = new QLabel(widget_0301);
        label_WetImage->setObjectName(QString::fromUtf8("label_WetImage"));
        label_WetImage->setMinimumSize(QSize(35, 35));
        label_WetImage->setMaximumSize(QSize(35, 35));
        label_WetImage->setPixmap(QPixmap(QString::fromUtf8(":/res/humidity.png")));
        label_WetImage->setScaledContents(true);

        horizontalLayout_03->addWidget(label_WetImage);

        verticalLayout_03 = new QVBoxLayout();
        verticalLayout_03->setObjectName(QString::fromUtf8("verticalLayout_03"));
        label_WetTitle = new QLabel(widget_0301);
        label_WetTitle->setObjectName(QString::fromUtf8("label_WetTitle"));
        label_WetTitle->setFont(font);
        label_WetTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_03->addWidget(label_WetTitle);

        label_WetNum = new QLabel(widget_0301);
        label_WetNum->setObjectName(QString::fromUtf8("label_WetNum"));
        label_WetNum->setFont(font);
        label_WetNum->setAlignment(Qt::AlignCenter);

        verticalLayout_03->addWidget(label_WetNum);


        horizontalLayout_03->addLayout(verticalLayout_03);

        horizontalLayout_03->setStretch(0, 2);
        horizontalLayout_03->setStretch(1, 3);

        gridLayout->addLayout(horizontalLayout_03, 1, 0, 1, 1);

        horizontalLayout_04 = new QHBoxLayout();
        horizontalLayout_04->setSpacing(0);
        horizontalLayout_04->setObjectName(QString::fromUtf8("horizontalLayout_04"));
        label_AirImage = new QLabel(widget_0301);
        label_AirImage->setObjectName(QString::fromUtf8("label_AirImage"));
        label_AirImage->setMinimumSize(QSize(35, 35));
        label_AirImage->setMaximumSize(QSize(35, 35));
        label_AirImage->setPixmap(QPixmap(QString::fromUtf8(":/res/airQi.png")));
        label_AirImage->setScaledContents(true);

        horizontalLayout_04->addWidget(label_AirImage);

        verticalLayout_04 = new QVBoxLayout();
        verticalLayout_04->setObjectName(QString::fromUtf8("verticalLayout_04"));
        label_AirTitle = new QLabel(widget_0301);
        label_AirTitle->setObjectName(QString::fromUtf8("label_AirTitle"));
        label_AirTitle->setFont(font);
        label_AirTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_04->addWidget(label_AirTitle);

        label_AirNum = new QLabel(widget_0301);
        label_AirNum->setObjectName(QString::fromUtf8("label_AirNum"));
        label_AirNum->setFont(font);
        label_AirNum->setAlignment(Qt::AlignCenter);

        verticalLayout_04->addWidget(label_AirNum);


        horizontalLayout_04->addLayout(verticalLayout_04);

        horizontalLayout_04->setStretch(0, 1);
        horizontalLayout_04->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_04, 1, 1, 1, 1);


        verticalLayout->addWidget(widget_0301);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 3);

        verticalLayout_2->addWidget(widget_03);

        widget_04 = new QWidget(widget);
        widget_04->setObjectName(QString::fromUtf8("widget_04"));
        widget_0401 = new QWidget(widget_04);
        widget_0401->setObjectName(QString::fromUtf8("widget_0401"));
        widget_0401->setGeometry(QRect(10, 10, 241, 31));
        gridLayout_3 = new QGridLayout(widget_0401);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_day2 = new QLabel(widget_0401);
        label_day2->setObjectName(QString::fromUtf8("label_day2"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label_day2->setFont(font2);
        label_day2->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(151, 60, 255);\n"
"border-top-right-radius: 4px;\n"
"border-top-left-radius: 4px;"));
        label_day2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_day2, 0, 1, 1, 1);

        label_date3 = new QLabel(widget_0401);
        label_date3->setObjectName(QString::fromUtf8("label_date3"));
        label_date3->setFont(font2);
        label_date3->setStyleSheet(QString::fromUtf8("background-color: rgb(151, 60, 255);\n"
"color: rgb(235, 235, 235);\n"
"border-bottom-left-radius: 4px;\n"
"border-bottom-right-radius: 4px;"));
        label_date3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_date3, 1, 2, 1, 1);

        label_day4 = new QLabel(widget_0401);
        label_day4->setObjectName(QString::fromUtf8("label_day4"));
        label_day4->setFont(font2);
        label_day4->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(151, 60, 255);\n"
"border-top-right-radius: 4px;\n"
"border-top-left-radius: 4px;"));
        label_day4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_day4, 0, 3, 1, 1);

        label_day6 = new QLabel(widget_0401);
        label_day6->setObjectName(QString::fromUtf8("label_day6"));
        label_day6->setFont(font2);
        label_day6->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(151, 60, 255);\n"
"border-top-right-radius: 4px;\n"
"border-top-left-radius: 4px;"));
        label_day6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_day6, 0, 5, 1, 1);

        label_date4 = new QLabel(widget_0401);
        label_date4->setObjectName(QString::fromUtf8("label_date4"));
        label_date4->setFont(font2);
        label_date4->setStyleSheet(QString::fromUtf8("background-color: rgb(151, 60, 255);\n"
"color: rgb(235, 235, 235);\n"
"border-bottom-left-radius: 4px;\n"
"border-bottom-right-radius: 4px;"));
        label_date4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_date4, 1, 3, 1, 1);

        label_day5 = new QLabel(widget_0401);
        label_day5->setObjectName(QString::fromUtf8("label_day5"));
        label_day5->setFont(font2);
        label_day5->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(151, 60, 255);\n"
"border-top-right-radius: 4px;\n"
"border-top-left-radius: 4px;"));
        label_day5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_day5, 0, 4, 1, 1);

        label_day1 = new QLabel(widget_0401);
        label_day1->setObjectName(QString::fromUtf8("label_day1"));
        label_day1->setFont(font2);
        label_day1->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(151, 60, 255);\n"
"border-top-right-radius: 4px;\n"
"border-top-left-radius: 4px;"));
        label_day1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_day1, 0, 0, 1, 1);

        label_day3 = new QLabel(widget_0401);
        label_day3->setObjectName(QString::fromUtf8("label_day3"));
        label_day3->setFont(font2);
        label_day3->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(151, 60, 255);\n"
"border-top-right-radius: 4px;\n"
"border-top-left-radius: 4px;"));
        label_day3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_day3, 0, 2, 1, 1);

        label_date1 = new QLabel(widget_0401);
        label_date1->setObjectName(QString::fromUtf8("label_date1"));
        label_date1->setFont(font2);
        label_date1->setStyleSheet(QString::fromUtf8("background-color: rgb(151, 60, 255);\n"
"color: rgb(235, 235, 235);\n"
"border-bottom-left-radius: 4px;\n"
"border-bottom-right-radius: 4px;"));
        label_date1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_date1, 1, 0, 1, 1);

        label_date6 = new QLabel(widget_0401);
        label_date6->setObjectName(QString::fromUtf8("label_date6"));
        label_date6->setFont(font2);
        label_date6->setStyleSheet(QString::fromUtf8("background-color: rgb(151, 60, 255);\n"
"color: rgb(235, 235, 235);\n"
"border-bottom-left-radius: 4px;\n"
"border-bottom-right-radius: 4px;"));
        label_date6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_date6, 1, 5, 1, 1);

        label_date2 = new QLabel(widget_0401);
        label_date2->setObjectName(QString::fromUtf8("label_date2"));
        label_date2->setFont(font2);
        label_date2->setStyleSheet(QString::fromUtf8("background-color: rgb(151, 60, 255);\n"
"color: rgb(235, 235, 235);\n"
"border-bottom-left-radius: 4px;\n"
"border-bottom-right-radius: 4px;"));
        label_date2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_date2, 1, 1, 1, 1);

        label_date5 = new QLabel(widget_0401);
        label_date5->setObjectName(QString::fromUtf8("label_date5"));
        label_date5->setFont(font2);
        label_date5->setStyleSheet(QString::fromUtf8("background-color: rgb(151, 60, 255);\n"
"color: rgb(235, 235, 235);\n"
"border-bottom-left-radius: 4px;\n"
"border-bottom-right-radius: 4px;"));
        label_date5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_date5, 1, 4, 1, 1);

        widget_0402 = new QWidget(widget_04);
        widget_0402->setObjectName(QString::fromUtf8("widget_0402"));
        widget_0402->setGeometry(QRect(10, 50, 241, 41));
        gridLayout_5 = new QGridLayout(widget_0402);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_sweather1 = new QLabel(widget_0402);
        label_sweather1->setObjectName(QString::fromUtf8("label_sweather1"));
        label_sweather1->setMinimumSize(QSize(30, 30));
        label_sweather1->setMaximumSize(QSize(30, 30));
        label_sweather1->setFont(font2);
        label_sweather1->setStyleSheet(QString::fromUtf8(""));
        label_sweather1->setPixmap(QPixmap(QString::fromUtf8(":/res/type/XiaoDaoZhongXue.png")));
        label_sweather1->setScaledContents(true);
        label_sweather1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_sweather1, 0, 0, 1, 1);

        label_sweather2 = new QLabel(widget_0402);
        label_sweather2->setObjectName(QString::fromUtf8("label_sweather2"));
        label_sweather2->setMinimumSize(QSize(30, 30));
        label_sweather2->setMaximumSize(QSize(30, 30));
        label_sweather2->setFont(font2);
        label_sweather2->setStyleSheet(QString::fromUtf8(""));
        label_sweather2->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Wu.png")));
        label_sweather2->setScaledContents(true);
        label_sweather2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_sweather2, 0, 1, 1, 1);

        label_sweather3 = new QLabel(widget_0402);
        label_sweather3->setObjectName(QString::fromUtf8("label_sweather3"));
        label_sweather3->setMinimumSize(QSize(30, 30));
        label_sweather3->setMaximumSize(QSize(30, 30));
        label_sweather3->setFont(font2);
        label_sweather3->setStyleSheet(QString::fromUtf8(""));
        label_sweather3->setPixmap(QPixmap(QString::fromUtf8(":/res/type/ZhenXue.png")));
        label_sweather3->setScaledContents(true);
        label_sweather3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_sweather3, 0, 2, 1, 1);

        label_sweather4 = new QLabel(widget_0402);
        label_sweather4->setObjectName(QString::fromUtf8("label_sweather4"));
        label_sweather4->setMinimumSize(QSize(30, 30));
        label_sweather4->setMaximumSize(QSize(30, 30));
        label_sweather4->setFont(font2);
        label_sweather4->setStyleSheet(QString::fromUtf8(""));
        label_sweather4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/YangSha.png")));
        label_sweather4->setScaledContents(true);
        label_sweather4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_sweather4, 0, 3, 1, 1);

        label_sweather5 = new QLabel(widget_0402);
        label_sweather5->setObjectName(QString::fromUtf8("label_sweather5"));
        label_sweather5->setMinimumSize(QSize(30, 30));
        label_sweather5->setMaximumSize(QSize(30, 30));
        label_sweather5->setFont(font2);
        label_sweather5->setStyleSheet(QString::fromUtf8(""));
        label_sweather5->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DaBaoYuDaoTeDaBaoYu.png")));
        label_sweather5->setScaledContents(true);
        label_sweather5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_sweather5, 0, 4, 1, 1);

        label_sweather6 = new QLabel(widget_0402);
        label_sweather6->setObjectName(QString::fromUtf8("label_sweather6"));
        label_sweather6->setMinimumSize(QSize(30, 30));
        label_sweather6->setMaximumSize(QSize(30, 30));
        label_sweather6->setFont(font2);
        label_sweather6->setStyleSheet(QString::fromUtf8(""));
        label_sweather6->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Mai.png")));
        label_sweather6->setScaledContents(true);
        label_sweather6->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_sweather6, 0, 5, 1, 1);

        label_sweather01 = new QLabel(widget_0402);
        label_sweather01->setObjectName(QString::fromUtf8("label_sweather01"));
        label_sweather01->setFont(font2);
        label_sweather01->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_sweather01->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_sweather01, 1, 0, 1, 1);

        label_sweather02 = new QLabel(widget_0402);
        label_sweather02->setObjectName(QString::fromUtf8("label_sweather02"));
        label_sweather02->setFont(font2);
        label_sweather02->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_sweather02->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_sweather02, 1, 1, 1, 1);

        label_sweather03 = new QLabel(widget_0402);
        label_sweather03->setObjectName(QString::fromUtf8("label_sweather03"));
        label_sweather03->setFont(font2);
        label_sweather03->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_sweather03->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_sweather03, 1, 2, 1, 1);

        label_sweather04 = new QLabel(widget_0402);
        label_sweather04->setObjectName(QString::fromUtf8("label_sweather04"));
        label_sweather04->setFont(font2);
        label_sweather04->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_sweather04->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_sweather04, 1, 3, 1, 1);

        label_sweather05 = new QLabel(widget_0402);
        label_sweather05->setObjectName(QString::fromUtf8("label_sweather05"));
        label_sweather05->setFont(font2);
        label_sweather05->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_sweather05->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_sweather05, 1, 4, 1, 1);

        label_sweather06 = new QLabel(widget_0402);
        label_sweather06->setObjectName(QString::fromUtf8("label_sweather06"));
        label_sweather06->setFont(font2);
        label_sweather06->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_sweather06->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_sweather06, 1, 5, 1, 1);

        widget_0403 = new QWidget(widget_04);
        widget_0403->setObjectName(QString::fromUtf8("widget_0403"));
        widget_0403->setGeometry(QRect(10, 100, 241, 31));
        horizontalLayout_3 = new QHBoxLayout(widget_0403);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_01 = new QLabel(widget_0403);
        label_01->setObjectName(QString::fromUtf8("label_01"));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label_01->setFont(font3);
        label_01->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);\n"
"color: rgb(235, 235, 235);\n"
"border-radius: 4px;"));
        label_01->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_01);

        label_02 = new QLabel(widget_0403);
        label_02->setObjectName(QString::fromUtf8("label_02"));
        label_02->setFont(font3);
        label_02->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(255, 146, 21);\n"
"border-radius: 4px;"));
        label_02->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_02);

        label_6 = new QLabel(widget_0403);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);\n"
"color: rgb(235, 235, 235);\n"
"border-radius: 4px;"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_6);

        label_03 = new QLabel(widget_0403);
        label_03->setObjectName(QString::fromUtf8("label_03"));
        label_03->setFont(font3);
        label_03->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);\n"
"color: rgb(235, 235, 235);\n"
"border-radius: 4px;"));
        label_03->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_03);

        label_04 = new QLabel(widget_0403);
        label_04->setObjectName(QString::fromUtf8("label_04"));
        label_04->setFont(font3);
        label_04->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);\n"
"color: rgb(235, 235, 235);\n"
"border-radius: 4px;"));
        label_04->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_04);

        label_05 = new QLabel(widget_0403);
        label_05->setObjectName(QString::fromUtf8("label_05"));
        label_05->setFont(font3);
        label_05->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);\n"
"color: rgb(235, 235, 235);\n"
"border-radius: 4px;"));
        label_05->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_05);

        widget_0404 = new QWidget(widget_04);
        widget_0404->setObjectName(QString::fromUtf8("widget_0404"));
        widget_0404->setGeometry(QRect(10, 140, 241, 51));
        widget_0404->setStyleSheet(QString::fromUtf8("#widget_0404{background-color: rgb(43, 43, 43);}"));
        widget_0405 = new QWidget(widget_04);
        widget_0405->setObjectName(QString::fromUtf8("widget_0405"));
        widget_0405->setGeometry(QRect(10, 200, 241, 51));
        widget_0405->setStyleSheet(QString::fromUtf8("#widget_0405{background-color: rgb(43, 43, 43);}"));
        widget_0406 = new QWidget(widget_04);
        widget_0406->setObjectName(QString::fromUtf8("widget_0406"));
        widget_0406->setGeometry(QRect(10, 260, 241, 31));
        gridLayout_4 = new QGridLayout(widget_0406);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_windDir1 = new QLabel(widget_0406);
        label_windDir1->setObjectName(QString::fromUtf8("label_windDir1"));
        label_windDir1->setMinimumSize(QSize(35, 0));
        label_windDir1->setMaximumSize(QSize(35, 16777215));
        label_windDir1->setFont(font2);
        label_windDir1->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(43, 43, 43);\n"
"border-top-right-radius: 4px;\n"
"border-top-left-radius: 4px;"));
        label_windDir1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_windDir1, 0, 0, 1, 1);

        label_windDir2 = new QLabel(widget_0406);
        label_windDir2->setObjectName(QString::fromUtf8("label_windDir2"));
        label_windDir2->setMinimumSize(QSize(35, 0));
        label_windDir2->setMaximumSize(QSize(35, 16777215));
        label_windDir2->setFont(font2);
        label_windDir2->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(43, 43, 43);\n"
"border-top-right-radius: 4px;\n"
"border-top-left-radius: 4px;"));
        label_windDir2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_windDir2, 0, 1, 1, 1);

        label_windDir4 = new QLabel(widget_0406);
        label_windDir4->setObjectName(QString::fromUtf8("label_windDir4"));
        label_windDir4->setMinimumSize(QSize(35, 0));
        label_windDir4->setMaximumSize(QSize(35, 16777215));
        label_windDir4->setFont(font2);
        label_windDir4->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(43, 43, 43);\n"
"border-top-right-radius: 4px;\n"
"border-top-left-radius: 4px;"));
        label_windDir4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_windDir4, 0, 3, 1, 1);

        label_windDir5 = new QLabel(widget_0406);
        label_windDir5->setObjectName(QString::fromUtf8("label_windDir5"));
        label_windDir5->setMinimumSize(QSize(35, 0));
        label_windDir5->setMaximumSize(QSize(35, 16777215));
        label_windDir5->setFont(font2);
        label_windDir5->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(43, 43, 43);\n"
"border-top-right-radius: 4px;\n"
"border-top-left-radius: 4px;"));
        label_windDir5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_windDir5, 0, 4, 1, 1);

        label_windDir6 = new QLabel(widget_0406);
        label_windDir6->setObjectName(QString::fromUtf8("label_windDir6"));
        label_windDir6->setMinimumSize(QSize(35, 0));
        label_windDir6->setMaximumSize(QSize(35, 16777215));
        label_windDir6->setFont(font2);
        label_windDir6->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(43, 43, 43);\n"
"border-top-right-radius: 4px;\n"
"border-top-left-radius: 4px;"));
        label_windDir6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_windDir6, 0, 5, 1, 1);

        label_windDir01 = new QLabel(widget_0406);
        label_windDir01->setObjectName(QString::fromUtf8("label_windDir01"));
        label_windDir01->setMinimumSize(QSize(35, 0));
        label_windDir01->setMaximumSize(QSize(35, 16777215));
        label_windDir01->setFont(font2);
        label_windDir01->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);\n"
"color: rgb(235, 235, 235);\n"
"border-bottom-left-radius: 4px;\n"
"border-bottom-right-radius: 4px;"));
        label_windDir01->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_windDir01, 1, 0, 1, 1);

        label_windDir02 = new QLabel(widget_0406);
        label_windDir02->setObjectName(QString::fromUtf8("label_windDir02"));
        label_windDir02->setMinimumSize(QSize(35, 0));
        label_windDir02->setMaximumSize(QSize(35, 16777215));
        label_windDir02->setFont(font2);
        label_windDir02->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);\n"
"color: rgb(235, 235, 235);\n"
"border-bottom-left-radius: 4px;\n"
"border-bottom-right-radius: 4px;"));
        label_windDir02->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_windDir02, 1, 1, 1, 1);

        label_windDir03 = new QLabel(widget_0406);
        label_windDir03->setObjectName(QString::fromUtf8("label_windDir03"));
        label_windDir03->setMinimumSize(QSize(35, 0));
        label_windDir03->setMaximumSize(QSize(35, 16777215));
        label_windDir03->setFont(font2);
        label_windDir03->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);\n"
"color: rgb(235, 235, 235);\n"
"border-bottom-left-radius: 4px;\n"
"border-bottom-right-radius: 4px;"));
        label_windDir03->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_windDir03, 1, 2, 1, 1);

        label_windDir04 = new QLabel(widget_0406);
        label_windDir04->setObjectName(QString::fromUtf8("label_windDir04"));
        label_windDir04->setMinimumSize(QSize(35, 0));
        label_windDir04->setMaximumSize(QSize(35, 16777215));
        label_windDir04->setFont(font2);
        label_windDir04->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);\n"
"color: rgb(235, 235, 235);\n"
"border-bottom-left-radius: 4px;\n"
"border-bottom-right-radius: 4px;"));
        label_windDir04->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_windDir04, 1, 3, 1, 1);

        label_windDir05 = new QLabel(widget_0406);
        label_windDir05->setObjectName(QString::fromUtf8("label_windDir05"));
        label_windDir05->setMinimumSize(QSize(35, 0));
        label_windDir05->setMaximumSize(QSize(35, 16777215));
        label_windDir05->setFont(font2);
        label_windDir05->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);\n"
"color: rgb(235, 235, 235);\n"
"border-bottom-left-radius: 4px;\n"
"border-bottom-right-radius: 4px;"));
        label_windDir05->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_windDir05, 1, 4, 1, 1);

        label_windDir06 = new QLabel(widget_0406);
        label_windDir06->setObjectName(QString::fromUtf8("label_windDir06"));
        label_windDir06->setMinimumSize(QSize(35, 0));
        label_windDir06->setMaximumSize(QSize(35, 16777215));
        label_windDir06->setFont(font2);
        label_windDir06->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);\n"
"color: rgb(235, 235, 235);\n"
"border-bottom-left-radius: 4px;\n"
"border-bottom-right-radius: 4px;"));
        label_windDir06->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_windDir06, 1, 5, 1, 1);

        label_windDir3 = new QLabel(widget_0406);
        label_windDir3->setObjectName(QString::fromUtf8("label_windDir3"));
        label_windDir3->setMinimumSize(QSize(35, 0));
        label_windDir3->setMaximumSize(QSize(35, 16777215));
        label_windDir3->setFont(font2);
        label_windDir3->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(43, 43, 43);\n"
"border-top-right-radius: 4px;\n"
"border-top-left-radius: 4px;"));
        label_windDir3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_windDir3, 0, 2, 1, 1);


        verticalLayout_2->addWidget(widget_04);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 6);
        verticalLayout_2->setStretch(2, 6);
        verticalLayout_2->setStretch(3, 25);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        lineEdit_searchData->setText(QString());
        lineEdit_searchData->setPlaceholderText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\237\216\345\270\202", nullptr));
        label_searchImage->setText(QString());
        label_currentDate->setText(QApplication::translate("Widget", "2024/11/11 \346\230\237\346\234\237\344\270\200", nullptr));
        label_WeatherImage->setText(QString());
        label_WeatherNum->setText(QApplication::translate("Widget", "23", nullptr));
        label_WeatherNumRange_2->setText(QApplication::translate("Widget", "\345\273\266\345\256\211\345\270\202", nullptr));
        label_WeatherStaute->setText(QApplication::translate("Widget", "\346\231\264\350\275\254\345\244\232\344\272\221", nullptr));
        label_WeatherNumRange->setText(QApplication::translate("Widget", "20~26\342\204\203", nullptr));
        label_GanMao->setText(QApplication::translate("Widget", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\220\204\347\261\273\344\272\272\347\276\244\345\217\257\344\273\245\350\207\252\347\224\261\346\264\273\345\212\250", nullptr));
        label_FxImage->setText(QString());
        label_FxTitle->setText(QApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_FxNum->setText(QApplication::translate("Widget", "2\347\272\247", nullptr));
        label_PmImage->setText(QString());
        label_PmTitle->setText(QApplication::translate("Widget", "PM2.5", nullptr));
        label_PmNum->setText(QApplication::translate("Widget", "24", nullptr));
        label_WetImage->setText(QString());
        label_WetTitle->setText(QApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        label_WetNum->setText(QApplication::translate("Widget", "80%", nullptr));
        label_AirImage->setText(QString());
        label_AirTitle->setText(QApplication::translate("Widget", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        label_AirNum->setText(QApplication::translate("Widget", "\344\274\230", nullptr));
        label_day2->setText(QApplication::translate("Widget", "\344\273\212\345\244\251", nullptr));
        label_date3->setText(QApplication::translate("Widget", "12/11", nullptr));
        label_day4->setText(QApplication::translate("Widget", "\345\221\250\344\272\214", nullptr));
        label_day6->setText(QApplication::translate("Widget", "\345\221\250\345\233\233", nullptr));
        label_date4->setText(QApplication::translate("Widget", "12/12", nullptr));
        label_day5->setText(QApplication::translate("Widget", "\345\221\250\344\270\211", nullptr));
        label_day1->setText(QApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        label_day3->setText(QApplication::translate("Widget", "\346\230\216\345\244\251", nullptr));
        label_date1->setText(QApplication::translate("Widget", "12/09", nullptr));
        label_date6->setText(QApplication::translate("Widget", "12/14", nullptr));
        label_date2->setText(QApplication::translate("Widget", "12/10", nullptr));
        label_date5->setText(QApplication::translate("Widget", "12/13", nullptr));
        label_sweather1->setText(QString());
        label_sweather2->setText(QString());
        label_sweather3->setText(QString());
        label_sweather4->setText(QString());
        label_sweather5->setText(QString());
        label_sweather6->setText(QString());
        label_sweather01->setText(QApplication::translate("Widget", "\344\270\255\351\233\250", nullptr));
        label_sweather02->setText(QApplication::translate("Widget", "\346\231\264", nullptr));
        label_sweather03->setText(QApplication::translate("Widget", "\351\230\264", nullptr));
        label_sweather04->setText(QApplication::translate("Widget", "\345\244\247\351\243\216", nullptr));
        label_sweather05->setText(QApplication::translate("Widget", "\345\244\247\351\233\250", nullptr));
        label_sweather06->setText(QApplication::translate("Widget", "\351\233\276\351\234\276", nullptr));
        label_01->setText(QApplication::translate("Widget", "\344\274\230", nullptr));
        label_02->setText(QApplication::translate("Widget", "\350\211\257", nullptr));
        label_6->setText(QApplication::translate("Widget", "\344\274\230", nullptr));
        label_03->setText(QApplication::translate("Widget", "\344\274\230", nullptr));
        label_04->setText(QApplication::translate("Widget", "\344\274\230", nullptr));
        label_05->setText(QApplication::translate("Widget", "\344\274\230", nullptr));
        label_windDir1->setText(QApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_windDir2->setText(QApplication::translate("Widget", "\344\270\234\345\214\227\351\243\216", nullptr));
        label_windDir4->setText(QApplication::translate("Widget", "\350\245\277\345\215\227\351\243\216", nullptr));
        label_windDir5->setText(QApplication::translate("Widget", "\344\270\234\351\243\216", nullptr));
        label_windDir6->setText(QApplication::translate("Widget", "\345\214\227\351\243\216", nullptr));
        label_windDir01->setText(QApplication::translate("Widget", "2\347\272\247", nullptr));
        label_windDir02->setText(QApplication::translate("Widget", "4\347\272\247", nullptr));
        label_windDir03->setText(QApplication::translate("Widget", "1\347\272\247", nullptr));
        label_windDir04->setText(QApplication::translate("Widget", "20\347\272\247", nullptr));
        label_windDir05->setText(QApplication::translate("Widget", "2\347\272\247", nullptr));
        label_windDir06->setText(QApplication::translate("Widget", "4\347\272\247", nullptr));
        label_windDir3->setText(QApplication::translate("Widget", "\350\245\277\345\214\227\351\243\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
