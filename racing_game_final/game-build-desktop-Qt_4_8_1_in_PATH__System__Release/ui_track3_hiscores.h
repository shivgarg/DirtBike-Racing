/********************************************************************************
** Form generated from reading UI file 'track3_hiscores.ui'
**
** Created: Sun Sep 8 11:46:38 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACK3_HISCORES_H
#define UI_TRACK3_HISCORES_H

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

class Ui_Track3_HiScores
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QWidget *Track3_HiScores)
    {
        if (Track3_HiScores->objectName().isEmpty())
            Track3_HiScores->setObjectName(QString::fromUtf8("Track3_HiScores"));
        Track3_HiScores->resize(1366, 768);
        label_2 = new QLabel(Track3_HiScores);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 30, 511, 81));
        label = new QLabel(Track3_HiScores);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1441, 751));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike.jpg")));
        label->setScaledContents(true);
        pushButton = new QPushButton(Track3_HiScores);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1110, 590, 171, 81));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        layoutWidget = new QWidget(Track3_HiScores);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 210, 951, 421));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 10, 0, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 10, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 5, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 4, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 5, 0, 1, 1);

        label->raise();
        label_2->raise();
        pushButton->raise();
        layoutWidget->raise();

        retranslateUi(Track3_HiScores);

        QMetaObject::connectSlotsByName(Track3_HiScores);
    } // setupUi

    void retranslateUi(QWidget *Track3_HiScores)
    {
        Track3_HiScores->setWindowTitle(QApplication::translate("Track3_HiScores", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QString());
        pushButton->setText(QApplication::translate("Track3_HiScores", "Back", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        label_5->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_7->setText(QString());
        label_10->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Track3_HiScores: public Ui_Track3_HiScores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACK3_HISCORES_H
