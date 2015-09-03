#ifndef GLOBAL_HISCORES_H
#define GLOBAL_HISCORES_H

#include <QWidget>
#include <string>

namespace Ui {
class Global_HiScores;
}

class Global_HiScores : public QWidget
{
    Q_OBJECT
    
public:
    explicit Global_HiScores(QWidget *parent = 0);
    ~Global_HiScores();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::Global_HiScores *ui;
    void showHighScores(std::string sid);
};

#endif // GLOBAL_HISCORES_H
