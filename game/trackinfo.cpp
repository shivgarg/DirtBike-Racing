#include "trackinfo.h"
#include "ui_trackinfo.h"
#include "global_hiscores.h"
#include "newgame.h"
#include "personal_hiscores.h"
#include "currentscore.h"
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;



TrackInfo::TrackInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrackInfo)
{
    string player;
    int level;
    ui->setupUi(this);
    string str(":/new/prefix2/");
    int id;
    ifstream fin("track.txt");
    fin>>id;
    fin>>level;
    fin.close();
    fin.open("player.txt");
    fin>>player;
    fin.close();
    stringstream ss;
    ss<<id;
    string sid = ss.str();
    str=str+sid;
    str=str+"map.jpg";
    QImage image(QString::fromStdString(str));
    QFont f("Arial",30,QFont::Bold);
    ui->label_2->setFont(f);
    ui->label_2->setStyleSheet("QLabel{color:rgb(0,0,255)}");
    ui->label_2->setText(QString::fromStdString(("Track - "+sid+" ("+(level==0?"easy":(level==1?"difficult":"practice"))+")")));
    ui->label_3->setScaledContents(true);
    ui->label_3->setPixmap(QPixmap::fromImage(image));

    stringstream temp;
    temp<<id;
    fin.open(("t"+temp.str()+"/"+player+((level==0)?"0.txt":"1.txt")).c_str());
    if(!fin.is_open())
    {
        fin.close();
        ofstream fout(("t"+temp.str()+"/"+player+((level==0)?"0.txt":"1.txt")).c_str());
        fout<<"1000\n0\n0\n0\n0\n0";
        fout.close();
    }
    else
    {
        string a;
        fin>>a;
        fin.close();
        if(a.length()==0)
        {
            ofstream fout(("t"+temp.str()+"/"+player+((level==0)?"0.txt":"1.txt")).c_str());
            fout<<"1000\n0\n0\n0\n0\n0";
            fout.close();
        }
    }
}

TrackInfo::~TrackInfo()
{
    delete ui;
}

void TrackInfo::on_pushButton_clicked()
{
    newgame *ng = new newgame();
    close();
    ng->show();
}

void TrackInfo::on_pushButton_4_clicked()
{
    system("Game/run");
    CurrentScore *cs = new CurrentScore();
    close();
    cs->show();
}

void TrackInfo::on_pushButton_2_clicked()
{
    Global_HiScores *ghs = new Global_HiScores();
    close();
    ghs->show();
}

void TrackInfo::on_pushButton_3_clicked()
{
    Personal_HiScores *ph = new Personal_HiScores();
    close();
    ph->show();
}
