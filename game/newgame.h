#ifndef NEWGAME_H
#define NEWGAME_H

#include <QWidget>

namespace Ui {
class newgame;
}

class newgame : public QWidget
{
    Q_OBJECT
    
public:
    explicit newgame(QWidget *parent = 0);
    ~newgame();
    
private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::newgame *ui;
};

#endif // NEWGAME_H
