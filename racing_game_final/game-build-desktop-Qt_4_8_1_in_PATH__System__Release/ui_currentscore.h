/********************************************************************************
** Form generated from reading UI file 'currentscore.ui'
**
** Created: Sun Sep 15 02:20:33 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENTSCORE_H
#define UI_CURRENTSCORE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurrentScore
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *CurrentScore)
    {
        if (CurrentScore->objectName().isEmpty())
            CurrentScore->setObjectName(QString::fromUtf8("CurrentScore"));
        CurrentScore->resize(600, 450);
        label = new QLabel(CurrentScore);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 601, 451));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike.jpg")));
        label->setScaledContents(true);
        pushButton = new QPushButton(CurrentScore);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 370, 141, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        layoutWidget = new QWidget(CurrentScore);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 150, 481, 201));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        label_6 = new QLabel(CurrentScore);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 30, 301, 81));
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(100,255,100);\n"
"background-color:rgb(100,255,0,75);\n"
"border-radius:30px;"));

        retranslateUi(CurrentScore);

        QMetaObject::connectSlotsByName(CurrentScore);
    } // setupUi

    void retranslateUi(QWidget *CurrentScore)
    {
        CurrentScore->setWindowTitle(QApplication::translate("CurrentScore", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("CurrentScore", "Proceed", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CurrentScore", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CurrentScore", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CurrentScore", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CurrentScore", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CurrentScore", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Game Summary</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CurrentScore: public Ui_CurrentScore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENTSCORE_H
