#ifndef TRACK_H
#define TRACK_H

#include <QWidget>

namespace Ui {
class Track;
}

class Track : public QWidget
{
    Q_OBJECT
    
public:
    explicit Track(QWidget *parent = 0);
    ~Track();
    
private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Track *ui;
};

#endif // TRACK_H
