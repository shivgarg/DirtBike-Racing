#include "menu.h"
#include "ui_menu.h"
#include "options.h"
#include "newgame.h"
#include "player.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include "credits.h"
#include "help.h"

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}


void Menu::on_pushButton_2_clicked()
{
    close();
    Help *help = new Help();
    help->show();
}

//NEW GAME
void Menu::on_pushButton_clicked()
{
    close();
    Player *play = new Player;
    play->show();
}


//CREDITS
void Menu::on_pushButton_3_clicked()
{
    Credits *credits = new Credits();
    credits->show();
    close();
}
