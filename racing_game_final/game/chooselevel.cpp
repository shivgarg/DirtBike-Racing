#include "chooselevel.h"
#include "ui_chooselevel.h"
#include <fstream>
#include "trackinfo.h"

using namespace std;

chooseLevel::chooseLevel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chooseLevel)
{
    ui->setupUi(this);
}

chooseLevel::~chooseLevel()
{
    delete ui;
}

void chooseLevel::on_pushButton_clicked()
{
    ofstream fout;
    fout.open("track.txt",std::ofstream::app);
    fout<<"\n0";
    fout.close();
    TrackInfo *t = new TrackInfo();
    close();
    t->show();
}

void chooseLevel::on_pushButton_2_clicked()
{
    ofstream fout;
    fout.open("track.txt",std::ofstream::app);
    fout<<"\n1";
    fout.close();
    TrackInfo *t = new TrackInfo();
    close();
    t->show();
}

void chooseLevel::on_pushButton_3_clicked()
{
    ofstream fout;
    fout.open("track.txt",std::ofstream::app);
    fout<<"\n2";
    fout.close();
    TrackInfo *t = new TrackInfo();
    close();
    t->show();
}
