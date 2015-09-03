/********************************************************************************
** Form generated from reading UI file 'credits.ui'
**
** Created: Sat Sep 7 19:47:53 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITS_H
#define UI_CREDITS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credits
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QPushButton *pushButton;

    void setupUi(QWidget *Credits)
    {
        if (Credits->objectName().isEmpty())
            Credits->setObjectName(QString::fromUtf8("Credits"));
        Credits->resize(1366, 768);
        layoutWidget = new QWidget(Credits);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 170, 211, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(Credits);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 1441, 801));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/credits.jpg")));
        label_6->setScaledContents(true);
        pushButton = new QPushButton(Credits);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(827, 646, 191, 91));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        label_6->raise();
        layoutWidget->raise();
        pushButton->raise();

        retranslateUi(Credits);

        QMetaObject::connectSlotsByName(Credits);
    } // setupUi

    void retranslateUi(QWidget *Credits)
    {
        Credits->setWindowTitle(QApplication::translate("Credits", "Form", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        pushButton->setText(QApplication::translate("Credits", "BACK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Credits: public Ui_Credits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITS_H
