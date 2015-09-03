#include "player.h"
#include "ui_player.h"
#include "newgame.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string playerName;

Player::Player(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Player)
{
    ui->setupUi(this);
    QFont font("Arial",30);
    ui->textEdit->setFont(font);
}

Player::~Player()
{
    delete ui;
}

void Player::on_pushButton_clicked()
{
    bool valid = true;
    newgame *ng = new newgame();
    QString name = ui->textEdit->toPlainText();
    playerName=string(name.toStdString());
    if(playerName.length()==0)
        valid=false;
    for(int i=0;i<playerName.length();i++)
        if(playerName.at(i)==' ' || playerName.at(i)=='\n')
        {
            valid=false;
            showError();
        }
    if(valid)
    {
        ofstream fout("player.txt");
        fout<<playerName;
        fout.close();
        fout.open(("players/"+playerName+".txt").c_str(),ofstream::app);
        fout.close();

        ifstream fin(("players/"+playerName+".txt").c_str());
        string trial;
        fin>>trial;
        fin.close();
        if(trial.length()==0)
        {
            fout.open(("players/"+playerName+".txt").c_str());
            fout<<1;
            fout.close();
        }
        ng->show();
        close();
    }
}

void Player::showError()
{
    QFont error("Arial",20);
    ui->label_5->setFont(error);
    ui->label_5->setStyleSheet("QLabel { color : rgb(255,0,0); }");
    ui->label_5->setText("NO SPACES, LINE BREAK ALOWED!!!!");
}
