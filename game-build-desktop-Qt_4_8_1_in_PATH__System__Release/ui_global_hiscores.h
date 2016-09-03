/********************************************************************************
** Form generated from reading UI file 'global_hiscores.ui'
**
** Created: Sun Sep 15 23:04:21 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBAL_HISCORES_H
#define UI_GLOBAL_HISCORES_H

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

class Ui_Global_HiScores
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QWidget *Global_HiScores)
    {
        if (Global_HiScores->objectName().isEmpty())
            Global_HiScores->setObjectName(QString::fromUtf8("Global_HiScores"));
        Global_HiScores->resize(1366, 768);
        label = new QLabel(Global_HiScores);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1371, 771));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(Global_HiScores);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 30, 831, 111));
        pushButton = new QPushButton(Global_HiScores);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1140, 610, 171, 81));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        layoutWidget = new QWidget(Global_HiScores);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 200, 901, 501));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 5, 0, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 5, 1, 1, 1);

        label_13 = new QLabel(Global_HiScores);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(880, 50, 441, 91));

        retranslateUi(Global_HiScores);

        QMetaObject::connectSlotsByName(Global_HiScores);
    } // setupUi

    void retranslateUi(QWidget *Global_HiScores)
    {
        Global_HiScores->setWindowTitle(QApplication::translate("Global_HiScores", "Global High Scores!!", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("Global_HiScores", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Global_HiScores", "Back", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Global_HiScores", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Global_HiScores", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Global_HiScores", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Global_HiScores", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Global_HiScores", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Global_HiScores", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Global_HiScores", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Global_HiScores", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Global_HiScores", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Global_HiScores", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Global_HiScores", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Global_HiScores: public Ui_Global_HiScores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBAL_HISCORES_H
