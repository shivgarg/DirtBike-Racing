/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created: Sat Sep 7 17:39:35 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Options
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_4;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;

    void setupUi(QWidget *Options)
    {
        if (Options->objectName().isEmpty())
            Options->setObjectName(QString::fromUtf8("Options"));
        Options->resize(450, 500);
        label = new QLabel(Options);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 50, 81, 31));
        pushButton = new QPushButton(Options);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 300, 131, 41));
        layoutWidget = new QWidget(Options);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 90, 131, 171));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(159, 158, 158, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        layoutWidget->setPalette(palette);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_5 = new QRadioButton(layoutWidget);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        radioButton_5->setPalette(palette1);

        verticalLayout->addWidget(radioButton_5);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        radioButton->setPalette(palette2);

        verticalLayout->addWidget(radioButton);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        radioButton_3->setPalette(palette3);

        verticalLayout->addWidget(radioButton_3);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        radioButton_2->setPalette(palette4);

        verticalLayout->addWidget(radioButton_2);

        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        radioButton_4->setPalette(palette5);

        verticalLayout->addWidget(radioButton_4);

        pushButton_2 = new QPushButton(Options);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 420, 111, 41));
        textEdit = new QTextEdit(Options);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(150, 400, 104, 78));

        retranslateUi(Options);
        QObject::connect(pushButton_2, SIGNAL(clicked()), textEdit, SLOT(copy()));

        QMetaObject::connectSlotsByName(Options);
    } // setupUi

    void retranslateUi(QWidget *Options)
    {
        Options->setWindowTitle(QApplication::translate("Options", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Options", "<html><head/><body><p><span style=\" font-size:16pt; color:#1f18ff;\">LEVEL :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Options", "Back", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("Options", "Cakewalk", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("Options", "Easy", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("Options", "Medium", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("Options", "Difficult", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("Options", "Insane", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Options", "Enter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Options: public Ui_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
