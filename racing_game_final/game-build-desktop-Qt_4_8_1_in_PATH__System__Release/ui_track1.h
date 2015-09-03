/********************************************************************************
** Form generated from reading UI file 'track1.ui'
**
** Created: Sun Sep 8 14:38:41 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACK1_H
#define UI_TRACK1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Track1
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_3;

    void setupUi(QWidget *Track1)
    {
        if (Track1->objectName().isEmpty())
            Track1->setObjectName(QString::fromUtf8("Track1"));
        Track1->resize(1366, 768);
        label = new QLabel(Track1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1441, 751));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(Track1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 30, 411, 101));
        pushButton = new QPushButton(Track1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1090, 560, 181, 91));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_2 = new QPushButton(Track1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1090, 410, 181, 91));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_3 = new QPushButton(Track1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1090, 260, 181, 91));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        label_3 = new QLabel(Track1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 150, 281, 161));

        retranslateUi(Track1);

        QMetaObject::connectSlotsByName(Track1);
    } // setupUi

    void retranslateUi(QWidget *Track1)
    {
        Track1->setWindowTitle(QApplication::translate("Track1", "Track 1", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("Track1", "<html><head/><body><p align=\"justify\"><span style=\" font-size:36pt; font-weight:600; color:#330aff;\">TRACK - 1</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Track1", "Play Game", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Track1", "High Scores", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Track1", "Back", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Track1", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Track1: public Ui_Track1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACK1_H
