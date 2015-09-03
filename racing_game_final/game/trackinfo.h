#ifndef TRACKINFO_H
#define TRACKINFO_H

#include <QWidget>

namespace Ui {
class TrackInfo;
}

class TrackInfo : public QWidget
{
    Q_OBJECT
    
public:
    explicit TrackInfo(QWidget *parent = 0);
    ~TrackInfo();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::TrackInfo *ui;
};

#endif // TRACKINFO_H
