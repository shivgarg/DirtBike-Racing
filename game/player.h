#ifndef PLAYER_H
#define PLAYER_H

#include <QWidget>

namespace Ui {
class Player;
}

class Player : public QWidget
{
    Q_OBJECT
    
public:
    explicit Player(QWidget *parent = 0);
    ~Player();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_pressed();

private:
    Ui::Player *ui;
    void showError();
};

#endif // PLAYER_H
