#include "track.h"
#include "ui_track.h"
#include "newgame.h"
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include "track_hiscores.h"
using namespace std;

Track::Track(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Track)
{
    ui->setupUi(this);
    ifstream fin("track.txt");
    int id;
    fin>>id;
    string sid;
    stringstream ss;
    cout<<"id = "<<id<<endl;
    //id++;
    ss<<(id);
    sid=ss.str();
    cout<<"sid = "<<sid<<endl;
    string address(":/new/prefix2/");
    string track("TRACK - ");
    track = track + sid;
    QFont font("Arial",30,QFont::Bold);
    ui->label_2->setFont(font);
    ui->label_2->setStyleSheet("QLabel{color:blue}");
    ui->label_2->setText(QString::fromStdString(track));

    address = address + sid;
    address = address + "map.jpg";
    cout<<"address = "<<address<<endl;
//    QImage image(QString::fromStdString(address));
    QImage image("/new/prefix2/1map.jpg");
    ui->label_3->setPixmap(QPixmap::fromImage(image));
    ui->label_3->setScaledContents(true);
}

Track::~Track()
{
    delete ui;
}

void Track::on_pushButton_4_clicked()
{
    system("Game/run");
}

void Track::on_pushButton_clicked()
{
    newgame *ng = new newgame();
    close();
    ng->show();
}


void Track::on_pushButton_2_clicked()
{
    Track_HiScores *ths = new Track_HiScores();
    close();
    ths->show();
}
