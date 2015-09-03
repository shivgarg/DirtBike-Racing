#include "newgame.h"
#include "ui_newgame.h"
#include "menu.h"
#include "chooselevel.h"
#include "trackinfo.h"
#include <fstream>
#include <string>
#include <iostream>
//#include "secondary.h"
using namespace std;

string player;
int crossed;

newgame::newgame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newgame)
{
    ui->setupUi(this);
    ifstream fin("player.txt");
    fin>>player;
    fin.close();
    fin.open(("players/"+player+".txt").c_str());
    fin>>crossed;
    fin.close();

}

newgame::~newgame()
{
    delete ui;
}

void newgame::on_pushButton_11_clicked()
{
    close();
    Menu *menu = new Menu;
    menu->show();
}

void newgame::on_pushButton_clicked()
{
    ofstream fout("track.txt");
    fout<<"1";
    fout.close();
    chooseLevel *t = new chooseLevel();
    close();
    t->show();
}

void newgame::on_pushButton_2_clicked()
{
    if(crossed>=2)
    {
        ofstream fout("track.txt");
        fout<<"2";
        fout.close();
        chooseLevel *t = new chooseLevel();
        close();
        t->show();
    }
}

void newgame::on_pushButton_3_clicked()
{
    if(crossed>=3)
    {
        ofstream fout("track.txt");
        fout<<"3";
        fout.close();
        chooseLevel *t = new chooseLevel();
        close();
        t->show();
    }
}

void newgame::on_pushButton_4_clicked()
{
    if(crossed>=4)
    {
        ofstream fout("track.txt");
        fout<<"4";
        fout.close();
        chooseLevel *t = new chooseLevel();
        close();
        t->show();
    }
}

void newgame::on_pushButton_5_clicked()
{
    if(crossed>=5)
    {
        ofstream fout("track.txt");
        fout<<"5";
        fout.close();
        chooseLevel *t = new chooseLevel();
        close();
        t->show();
    }
}

void newgame::on_pushButton_6_clicked()
{
    if(crossed>=6)
    {
        ofstream fout("track.txt");
        fout<<"6";
        fout.close();
        chooseLevel *t = new chooseLevel();
        close();
        t->show();
    }
}

void newgame::on_pushButton_8_clicked()
{
    if(crossed>=7)
    {
        ofstream fout("track.txt");
        fout<<"7";
        fout.close();
        chooseLevel *t = new chooseLevel();
        close();
        t->show();
    }
}

void newgame::on_pushButton_7_clicked()
{
    if(crossed>=8)
    {
        ofstream fout("track.txt");
        fout<<"8";
        fout.close();
        chooseLevel *t = new chooseLevel();
        close();
        t->show();
    }
}

void newgame::on_pushButton_9_clicked()
{
    if(crossed>=9)
    {
        ofstream fout("track.txt");
        fout<<"9";
        fout.close();
        chooseLevel *t = new chooseLevel();
        close();
        t->show();
    }
}

void newgame::on_pushButton_10_clicked()
{
    if(crossed>=10)
    {
        ofstream fout("track.txt");
        fout<<"10";
        fout.close();
        chooseLevel *t = new chooseLevel();
        close();
        t->show();
    }
}
