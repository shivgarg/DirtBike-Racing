#ifndef CHOOSELEVEL_H
#define CHOOSELEVEL_H

#include <QWidget>

namespace Ui {
class chooseLevel;
}

class chooseLevel : public QWidget
{
    Q_OBJECT
    
public:
    explicit chooseLevel(QWidget *parent = 0);
    ~chooseLevel();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::chooseLevel *ui;
};

#endif // CHOOSELEVEL_H
