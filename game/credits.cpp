#include "credits.h"
#include "ui_credits.h"
#include "menu.h"

Credits::Credits(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Credits)
{
    ui->setupUi(this);
}

Credits::~Credits()
{
    delete ui;
}

void Credits::on_pushButton_clicked()
{
    close();
    Menu *menu = new Menu;
    menu->show();
}
