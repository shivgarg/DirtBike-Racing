#include "currentscore.h"
#include "ui_currentscore.h"
#include "newgame.h"
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

CurrentScore::CurrentScore(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CurrentScore)
{
    int int_score;
    ui->setupUi(this);
    QFont font("Arial",20);
    ui->label_2->setFont(font);
    ui->label_2->setStyleSheet("QLabel{ color : rgb(200,50,100); background-color: rgb(200,0,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_2->setText(QString::fromStdString("Score"));

    ui->label_4->setFont(font);
    ui->label_4->setStyleSheet("QLabel{ color : rgb(200,50,100); background-color: rgb(200,0,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_4->setText(QString::fromStdString("Time"));

    ofstream fout;
    ifstream fin("update.txt");
    string score,seconds,minutes;
    fin>>score;
    int_score=atoi(score.c_str());
    if(fin.is_open())
    {
        if(score.length()==0)
        {
            ui->label_3->setFont(font);
            ui->label_3->setStyleSheet("QLabel{ color : rgb(255,255,0); background-color: rgb(200,0,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
            ui->label_3->setText(QString::fromStdString("0"));

            fin>>minutes;
            ui->label_5->setFont(font);
            ui->label_5->setStyleSheet("QLabel{ color : rgb(255,255,0); background-color: rgb(200,0,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
            ui->label_5->setText(QString::fromStdString("--"));
        }
        else
        {
            ui->label_3->setFont(font);
            ui->label_3->setStyleSheet("QLabel{ color : rgb(255,255,0); background-color: rgb(200,0,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
            ui->label_3->setText(QString::fromStdString(score));

            fin>>minutes;
            int s,m;
            stringstream ss;
            ss<<minutes;
            ss>>m;
            s=m%60;
            m/=60;
            stringstream ss1,ss2;
            ss1<<m;
            ss2<<s;
            ss1>>minutes;
            ss2>>seconds;
            string final;
            final = minutes;
            final.append(" m ");
            final.append(seconds);
            final.append(" s ");
            ui->label_5->setFont(font);
            ui->label_5->setStyleSheet("QLabel{ color : rgb(255,255,0); background-color: rgb(200,0,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
            ui->label_5->setText(QString::fromStdString(final));
        }
        fout.open("update.txt");
        fout.close();
    }
    fin.close();
    fin.open("track.txt");
    int currTrack;
    fin>>currTrack;
    fin.close();
    cout<<"int_score = "<<int_score<<endl;
    if(int_score>0)
    {
        fin.open("player.txt");
        string player;
        fin>>player;
        fin.close();
        fin.open(("players/"+player+".txt").c_str());
        int crossed;
        fin>>crossed;
        fin.close();
        if(currTrack>=crossed)
        {
            fout.open(("players/"+player+".txt").c_str());
            fout<<(currTrack+1);
            fout.close();
        }
    }
}

CurrentScore::~CurrentScore()
{
    delete ui;
}

void CurrentScore::on_pushButton_clicked()
{
    newgame *ng = new newgame();
    close();
    ng->show();
}
