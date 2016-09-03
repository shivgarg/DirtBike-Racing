#include "options.h"
#include "menu.h"
#include <iostream>
#include "ui_options.h"

Options::Options(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Options)
{
    ui->setupUi(this);
}

Options::~Options()
{
    delete ui;
}

void Options::on_pushButton_clicked()
{
    close();
    Menu *menu = new Menu;
    menu->show();
}

void Options::on_pushButton_2_clicked()
{
    QString foo = ui->textEdit->toPlainText();
    std::cout<<foo.toStdString()<<std::endl;
    //close();
}
