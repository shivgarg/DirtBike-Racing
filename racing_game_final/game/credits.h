#ifndef CREDITS_H
#define CREDITS_H

#include <QWidget>

namespace Ui {
class Credits;
}

class Credits : public QWidget
{
    Q_OBJECT
    
public:
    explicit Credits(QWidget *parent = 0);
    ~Credits();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::Credits *ui;
};

#endif // CREDITS_H
