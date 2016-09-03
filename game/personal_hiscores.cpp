#include "personal_hiscores.h"
#include "ui_personal_hiscores.h"
#include "trackinfo.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;


Personal_HiScores::Personal_HiScores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Personal_HiScores)
{
    ui->setupUi(this);
    int id,level;
    ifstream fin1("track.txt");
    fin1>>id;
    fin1>>level;
    fin1.close();
    stringstream ss;
    ss<<id;
    cout<<id<<endl;
    string sid = ss.str();

    ifstream fin2("player.txt");
    string name;
    fin2>>name;
    fin2.close();

    string trackid = "t"+sid;
    string path=trackid+"/";
    path=path+name+((level==0)?"0":"1")+".txt";


    ifstream fin3(path.c_str());
    if(fin3==NULL)
    {
        ofstream fout(path.c_str());
        fout<<"1000\n0\n0\n0\n0\n0";
        fout.close();
    }
    fin3.close();

    QFont heading("Arial",30,QFont::Bold);
    ui->label_2->setFont(heading);
    ui->label_2->setStyleSheet("QLabel{color:rgb(0,0,255)}");
    ui->label_2->setText(QString::fromStdString(("High Scores : Track - "+sid+" ("+name+")" + ((level==0)?"(Easy)":"(Difficult)"))));
    showHighScores(sid,path);
}

Personal_HiScores::~Personal_HiScores()
{
    delete ui;
}

void Personal_HiScores::showHighScores(string sid, string path)
{
    ifstream fin(path.c_str());
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

    ui->label_3->setFont(values);
    ui->label_3->setStyleSheet("QLabel { color : rgb(255,255,0); background-color: rgb(200,0,0,75); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    fin>>str;
    QString *qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_3->setText(*qstr);
    delete qstr;

    ui->label_4->setFont(values);
    ui->label_4->setStyleSheet("QLabel { color : rgb(255,255,0); background-color: rgb(200,0,0,50); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    fin>>str;
    qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_4->setText(*qstr);
    delete qstr;

    ui->label_5->setFont(values);
    ui->label_5->setStyleSheet("QLabel { color : rgb(255,255,0); background-color: rgb(200,0,0,50); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    fin>>str;
    qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_5->setText(*qstr);
    delete qstr;

    ui->label_6->setFont(values);
    ui->label_6->setStyleSheet("QLabel { color : rgb(255,255,0); background-color: rgb(200,0,0,50); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    fin>>str;
    qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_6->setText(*qstr);
    delete qstr;

    ui->label_7->setFont(values);
    ui->label_7->setStyleSheet("QLabel { color : rgb(255,255,0); background-color: rgb(200,0,0,50); border-radius:30px; border-width:20px;qproperty-alignment: AlignCenter;}");
    fin>>str;
    qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_7->setText(*qstr);
    delete qstr;
}

void Personal_HiScores::on_pushButton_clicked()
{
    TrackInfo *ti = new TrackInfo();
    close();
    ti->show();
}
