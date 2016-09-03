#include "track_hiscores.h"
#include "ui_track_hiscores.h"
#include <fstream>
#include <string>
#include "track.h"

using namespace std;

Track_HiScores::Track_HiScores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Track_HiScores)
{
    ui->setupUi(this);
    showHighScores();
}

Track_HiScores::~Track_HiScores()
{
    delete ui;
}


void Track_HiScores::showHighScores()
{
    ifstream fin("t1/high.txt");
    string str;
    QFont heading("Arial",30,QFont::Bold);
    QFont values("Arial",20);

    ui->label_2->setFont(heading);
    ui->label_2->setStyleSheet("QLabel { color : blue; }");
    ui->label_2->setText("High Scores - Track 1");

    ui->label_3->setFont(values);
    ui->label_3->setStyleSheet("QLabel { color : rgb(200,50,100); }");
    getline(fin,str);
    QString *qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_3->setText(*qstr);
    delete qstr;

    ui->label_4->setFont(values);
    ui->label_4->setStyleSheet("QLabel { color : rgb(200,50,100); }");
    getline(fin,str);
    qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_4->setText(*qstr);
    delete qstr;

    ui->label_5->setFont(values);
    ui->label_5->setStyleSheet("QLabel { color : rgb(200,50,100); }");
    getline(fin,str);
    qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_5->setText(*qstr);
    delete qstr;

    ui->label_6->setFont(values);
    ui->label_6->setStyleSheet("QLabel { color : rgb(200,50,100); }");
    getline(fin,str);
    qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_6->setText(*qstr);
    delete qstr;

    ui->label_7->setFont(values);
    ui->label_7->setStyleSheet("QLabel { color : rgb(200,50,100); }");
    getline(fin,str);
    qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_7->setText(*qstr);
    delete qstr;

    ui->label_8->setFont(values);
    ui->label_8->setStyleSheet("QLabel { color : rgb(200,50,100); }");
    getline(fin,str);
    qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_8->setText(*qstr);
    delete qstr;


    ui->label_9->setFont(values);
    ui->label_9->setStyleSheet("QLabel { color : rgb(200,50,100); }");
    getline(fin,str);
    qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_9->setText(*qstr);
    delete qstr;

    ui->label_10->setFont(values);
    ui->label_10->setStyleSheet("QLabel { color : rgb(200,50,100); }");
    getline(fin,str);
    qstr=new QString();
    *qstr = QString::fromStdString(str);
    ui->label_10->setText(*qstr);
    delete qstr;
}

void Track_HiScores::on_pushButton_clicked()
{
    Track *t = new Track();
    close();
    t->show();
}
