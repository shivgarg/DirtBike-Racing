#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QFile>
#include <QString>
#include <QTextStream>

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Menu(QWidget *parent = 0);

    ~Menu();
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();


    void on_pushButton_3_clicked();

private:
    Ui::Menu *ui;

public slots:
    void populate();
};

#endif // MENU_H
