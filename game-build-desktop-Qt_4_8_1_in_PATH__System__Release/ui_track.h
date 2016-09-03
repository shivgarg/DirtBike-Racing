/********************************************************************************
** Form generated from reading UI file 'track.ui'
**
** Created: Sun Sep 8 16:39:20 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACK_H
#define UI_TRACK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Track
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Track)
    {
        if (Track->objectName().isEmpty())
            Track->setObjectName(QString::fromUtf8("Track"));
        Track->resize(1366, 768);
        label = new QLabel(Track);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1441, 751));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(Track);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 40, 211, 81));
        label_3 = new QLabel(Track);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 140, 631, 571));
        pushButton = new QPushButton(Track);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1056, 590, 171, 81));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_2 = new QPushButton(Track);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(980, 470, 321, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_3 = new QPushButton(Track);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(980, 350, 321, 81));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_4 = new QPushButton(Track);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1040, 230, 201, 81));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));

        retranslateUi(Track);

        QMetaObject::connectSlotsByName(Track);
    } // setupUi

    void retranslateUi(QWidget *Track)
    {
        Track->setWindowTitle(QApplication::translate("Track", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("Track", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Track", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Track", "Back", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Track", "Global High Scores", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Track", "Personal High Scores", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Track", "Play Game", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Track: public Ui_Track {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACK_H
