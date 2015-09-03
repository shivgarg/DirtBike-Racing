#include "help.h"
#include "ui_help.h"
#include "menu.h"

Help::Help(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
}

Help::~Help()
{
    delete ui;
}

void Help::on_pushButton_clicked()
{
    Menu *menu = new Menu();
    close();
    menu->show();
}
