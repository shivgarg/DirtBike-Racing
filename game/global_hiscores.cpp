#include "global_hiscores.h"
#include "ui_global_hiscores.h"
#include "trackinfo.h"
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;
int level;

Global_HiScores::Global_HiScores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Global_HiScores)
{

    ui->setupUi(this);
    int id;
    ifstream fin("track.txt");
    fin>>id;
    fin>>level;
    stringstream ss;
    ss<<id;
    cout<<id<<endl;
    string sid = ss.str();
    QFont heading("Arial",30,QFont::Bold);
    ui->label_2->setFont(heading);
    ui->label_2->setStyleSheet("QLabel{color:rgb(0,0,255)}");
    ui->label_2->setText(QString::fromStdString(("High Scores : Track - "+sid+" ("+(level==0?"easy":"difficult")+")")));
    showHighScores(sid);
}

Global_HiScores::~Global_HiScores()
{
    delete ui;
}

void Global_HiScores::showHighScores(string sid)
{
    string address("t");
    address=address+sid;
    address=address+((level==0)?"/high0.txt":"/high1.txt");
    ifstream fin(address.c_str());
    string str;
    QFont heading("Arial",30,QFont::Bold);
    QFont values("Arial",20);

    string final("Best Time : ");
    int minutes,seconds;
    fin>>minutes;
    seconds=minutes%60;
    minutes/=60;

    stringstream ss;
    ss<<final<<minutes<<" m "<<seconds<<" s";
    final=ss.str();
    cout<<final<<endl;

    ui->label_13->setFont(values);
    ui->label_13->setStyleSheet("QLabel { color : rgb(50,255,100); background-color: rgb(0,255,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_13->setText(QString::fromStdString(final));

    fin>>str;
    ui->label_3->setFont(values);
    ui->label_3->setStyleSheet("QLabel { color : rgb(200,50,100); background-color: rgb(200,0,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_3->setText(QString::fromStdString(str));

    fin>>str;
    ui->label_4->setFont(values);
    ui->label_4->setStyleSheet("QLabel { color : rgb(255,255,0); background-color: rgb(200,0,0,50); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_4->setText(QString::fromStdString(str));

    fin>>str;
    ui->label_5->setFont(values);
    ui->label_5->setStyleSheet("QLabel { color : rgb(200,50,100); background-color: rgb(200,0,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_5->setText(QString::fromStdString(str));

    fin>>str;
    ui->label_6->setFont(values);
    ui->label_6->setStyleSheet("QLabel { color : rgb(255,255,0); background-color: rgb(200,0,0,50); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_6->setText(QString::fromStdString(str));

    fin>>str;
    ui->label_7->setFont(values);
    ui->label_7->setStyleSheet("QLabel { color : rgb(200,50,100); background-color: rgb(200,0,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_7->setText(QString::fromStdString(str));

    fin>>str;
    ui->label_8->setFont(values);
    ui->label_8->setStyleSheet("QLabel { color : rgb(255,255,0); background-color: rgb(200,0,0,50); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_8->setText(QString::fromStdString(str));


    fin>>str;
    ui->label_9->setFont(values);
    ui->label_9->setStyleSheet("QLabel { color : rgb(200,50,100); background-color: rgb(200,0,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_9->setText(QString::fromStdString(str));

    fin>>str;
    ui->label_10->setFont(values);
    ui->label_10->setStyleSheet("QLabel { color : rgb(255,255,0); background-color: rgb(200,0,0,50); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_10->setText(QString::fromStdString(str));

    fin>>str;
    ui->label_11->setFont(values);
    ui->label_11->setStyleSheet("QLabel { color : rgb(200,50,100); background-color: rgb(200,0,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_11->setText(QString::fromStdString(str));

    fin>>str;
    ui->label_12->setFont(values);
    ui->label_12->setStyleSheet("QLabel { color : rgb(255,255,0); background-color: rgb(200,0,0,50); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    ui->label_12->setText(QString::fromStdString(str));

}

void Global_HiScores::on_pushButton_clicked()
{
    TrackInfo *ti = new TrackInfo();
    close();
    ti->show();
}
