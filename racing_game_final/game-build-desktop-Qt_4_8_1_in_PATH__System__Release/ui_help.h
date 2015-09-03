/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created: Fri Sep 13 20:04:59 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_12;
    QPushButton *pushButton;

    void setupUi(QWidget *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QString::fromUtf8("Help"));
        Help->resize(1366, 768);
        label_2 = new QLabel(Help);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 30, 181, 61));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferDefault);
        label_2->setFont(font);
        label_3 = new QLabel(Help);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 240, 1041, 331));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/keyboard.jpg")));
        label_3->setScaledContents(true);
        label = new QLabel(Help);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1371, 771));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike.jpg")));
        label->setScaledContents(true);
        label_4 = new QLabel(Help);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(480, 580, 181, 51));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(175,175,255);\n"
"border-radius:20px;"));
        label_5 = new QLabel(Help);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(924, 580, 191, 141));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255,190,175);\n"
"border-radius:20px;"));
        label_6 = new QLabel(Help);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 250, 141, 51));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255,150,150);\n"
"border-radius:20px;"));
        label_7 = new QLabel(Help);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 130, 201, 101));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255,200,150);\n"
"border-radius:20px;"));
        label_8 = new QLabel(Help);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(403, 130, 101, 101));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255,200,150);\n"
"border-radius:20px;"));
        label_9 = new QLabel(Help);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(520, 130, 151, 101));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255,200,150);\n"
"border-radius:20px;"));
        label_11 = new QLabel(Help);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(800, 130, 181, 101));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255,200,150);\n"
"border-radius:20px;"));
        label_10 = new QLabel(Help);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 370, 211, 91));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(150,255,180);\n"
"border-radius:20px;"));
        label_12 = new QLabel(Help);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 470, 211, 111));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(150,255,180);\n"
"border-radius:20px;"));
        pushButton = new QPushButton(Help);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1140, 40, 171, 101));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_11->raise();
        label_10->raise();
        label_12->raise();
        pushButton->raise();

        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QWidget *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Help", "<html><head/><body><p><span style=\" color:#0000ff;\">Controls :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label->setText(QString());
        label_4->setText(QApplication::translate("Help", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Pause</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Help", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Up : Accelerate</span></p><p align=\"center\"><span style=\" font-size:14pt;\">Down : Brake</span></p><p align=\"center\"><span style=\" font-size:14pt;\">Left : Turn left</span></p><p align=\"center\"><span style=\" font-size:14pt;\">Right : Turn right</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Help", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Esc : Exit Game</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Help", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">F2: Toggle </span></p><p align=\"center\"><span style=\" font-size:14pt;\">Independent Camera</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Help", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">F3: Toggle </span></p><p align=\"center\"><span style=\" font-size:14pt;\">Biker View</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Help", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">F4: Toggle </span></p><p align=\"center\"><span style=\" font-size:14pt;\">Full Screen</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Help", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">F12: Change Bike</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Help", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">W : Tilt Camera Up</span></p><p align=\"center\"><span style=\" font-size:14pt;\">S : Tilt Camera Down</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Help", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">(Independent Camera)</span></p><p align=\"center\"><span style=\" font-size:14pt;\">A : Tilt Camera Left</span></p><p align=\"center\"><span style=\" font-size:14pt;\">D : Tilt Camera Right</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Help", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
