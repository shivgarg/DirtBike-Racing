#ifndef PERSONAL_HISCORES_H
#define PERSONAL_HISCORES_H

#include <string>
#include <QWidget>


namespace Ui {
class Personal_HiScores;
}

class Personal_HiScores : public QWidget
{
    Q_OBJECT
    
public:
    explicit Personal_HiScores(QWidget *parent = 0);
    ~Personal_HiScores();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::Personal_HiScores *ui;
    void showHighScores(std::string sid,std::string path);
};

#endif // PERSONAL_HISCORES_H
