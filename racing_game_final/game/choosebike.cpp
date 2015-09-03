#include "choosebike.h"
#include "ui_choosebike.h"

ChooseBike::ChooseBike(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChooseBike)
{
    ui->setupUi(this);
}

ChooseBike::~ChooseBike()
{
    delete ui;
}
