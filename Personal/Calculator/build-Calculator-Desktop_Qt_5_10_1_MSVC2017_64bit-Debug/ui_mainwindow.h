/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *result_show;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_sign;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_div;
    QPushButton *pushButton_7;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_min;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_0;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_dot;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(236, 356);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        result_show = new QLabel(centralWidget);
        result_show->setObjectName(QStringLiteral("result_show"));
        result_show->setGeometry(QRect(10, 0, 231, 61));
        QFont font;
        font.setPointSize(20);
        result_show->setFont(font);
        result_show->setStyleSheet(QLatin1String("QLable\n"
"{\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border-bottom: 1px solid gray;\n"
"}\n"
"\n"
"background-color: white;"));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(-1, 60, 61, 61));
        pushButton_clear->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1:0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_sign = new QPushButton(centralWidget);
        pushButton_sign->setObjectName(QStringLiteral("pushButton_sign"));
        pushButton_sign->setGeometry(QRect(58, 60, 61, 61));
        pushButton_sign->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1:0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_mod = new QPushButton(centralWidget);
        pushButton_mod->setObjectName(QStringLiteral("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(117, 60, 61, 61));
        pushButton_mod->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1:0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_div = new QPushButton(centralWidget);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));
        pushButton_div->setGeometry(QRect(176, 60, 61, 61));
        pushButton_div->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlinegradient(x1:0,y1:0,x2:0,y2:1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(-1, 119, 61, 61));
        pushButton_mult = new QPushButton(centralWidget);
        pushButton_mult->setObjectName(QStringLiteral("pushButton_mult"));
        pushButton_mult->setGeometry(QRect(176, 119, 61, 61));
        pushButton_mult->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlinegradient(x1:0,y1:0,x2:0,y2:1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(58, 119, 61, 61));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(117, 119, 61, 61));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(-1, 178, 61, 61));
        pushButton_min = new QPushButton(centralWidget);
        pushButton_min->setObjectName(QStringLiteral("pushButton_min"));
        pushButton_min->setGeometry(QRect(176, 178, 61, 61));
        pushButton_min->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlinegradient(x1:0,y1:0,x2:0,y2:1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(58, 178, 61, 61));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(117, 178, 61, 61));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(-1, 237, 61, 61));
        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(176, 237, 61, 61));
        pushButton_plus->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlinegradient(x1:0,y1:0,x2:0,y2:1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(58, 237, 61, 61));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(117, 237, 61, 61));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(-2, 296, 121, 61));
        pushButton_eq = new QPushButton(centralWidget);
        pushButton_eq->setObjectName(QStringLiteral("pushButton_eq"));
        pushButton_eq->setGeometry(QRect(176, 296, 61, 61));
        pushButton_eq->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlinegradient(x1:0,y1:0,x2:0,y2:1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_dot = new QPushButton(centralWidget);
        pushButton_dot->setObjectName(QStringLiteral("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(117, 296, 61, 61));
        pushButton_dot->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1: 0, y1:0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        result_show->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_clear->setText(QApplication::translate("MainWindow", "AC", nullptr));
        pushButton_sign->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_mod->setText(QApplication::translate("MainWindow", "%", nullptr));
        pushButton_div->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_mult->setText(QApplication::translate("MainWindow", "*", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_min->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_eq->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_dot->setText(QApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
