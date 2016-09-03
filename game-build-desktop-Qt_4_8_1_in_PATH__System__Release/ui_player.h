/********************************************************************************
** Form generated from reading UI file 'player.ui'
**
** Created: Sun Sep 8 12:26:28 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_H
#define UI_PLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Player
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;

    void setupUi(QWidget *Player)
    {
        if (Player->objectName().isEmpty())
            Player->setObjectName(QString::fromUtf8("Player"));
        Player->setEnabled(true);
        Player->resize(1366, 768);
        pushButton = new QPushButton(Player);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(980, 500, 171, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        textEdit = new QTextEdit(Player);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(580, 500, 361, 51));
        label = new QLabel(Player);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-100, -100, 261, 81));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label_3 = new QLabel(Player);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(-1000, -1000, 800, 600));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/back.jpg")));
        label_4 = new QLabel(Player);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(-70, 0, 1441, 801));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike1.jpg")));
        label_4->setScaledContents(true);
        label_2 = new QLabel(Player);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 490, 351, 71));
        label_5 = new QLabel(Player);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(500, 600, 571, 31));
        label_4->raise();
        label_3->raise();
        pushButton->raise();
        textEdit->raise();
        label->raise();
        label_2->raise();
        label_5->raise();

        retranslateUi(Player);

        QMetaObject::connectSlotsByName(Player);
    } // setupUi

    void retranslateUi(QWidget *Player)
    {
        Player->setWindowTitle(QApplication::translate("Player", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Player", "Enter", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("Player", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">PLAYER</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Player", "<html><head/><body><p><span style=\" color:#ffffff;\">Enter Player Name :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label_4->setText(QString());
        label_2->setText(QApplication::translate("Player", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600; color:#ffa200;\">ENTER PLAYER NAME:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Player: public Ui_Player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_H
