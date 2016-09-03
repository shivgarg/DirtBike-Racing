/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created: Sun Sep 15 22:33:15 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuMain_Menu;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(1366, 768);
        Menu->setAutoFillBackground(false);
        centralWidget = new QWidget(Menu);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 490, 221, 131));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;\n"
"hover:\n"
"{\n"
"border-radius:20px;\n"
"background-color:rgb(139,61,72);\n"
"color:rgb(255,255,255);\n"
"font-size:30px\n"
"}"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1080, 490, 211, 131));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-70, 0, 1441, 751));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike1.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 701, 641));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/back.jpg")));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(750, 490, 231, 131));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 490, 251, 131));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        Menu->setCentralWidget(centralWidget);
        label_2->raise();
        label->raise();
        pushButton->raise();
        pushButton_4->raise();
        pushButton_3->raise();
        pushButton_2->raise();
        mainToolBar = new QToolBar(Menu);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Menu->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Menu);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Menu->setStatusBar(statusBar);
        menuBar = new QMenuBar(Menu);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1366, 25));
        menuMain_Menu = new QMenu(menuBar);
        menuMain_Menu->setObjectName(QString::fromUtf8("menuMain_Menu"));
        Menu->setMenuBar(menuBar);

        menuBar->addAction(menuMain_Menu->menuAction());

        retranslateUi(Menu);
        QObject::connect(pushButton_4, SIGNAL(clicked()), Menu, SLOT(close()));

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Menu", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Menu", "New Game", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Menu", "Exit", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_3->setText(QApplication::translate("Menu", "Credits", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Menu", "Help", 0, QApplication::UnicodeUTF8));
        menuMain_Menu->setTitle(QApplication::translate("Menu", "Main Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
