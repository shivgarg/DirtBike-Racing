#ifndef TRACK_HISCORES_H
#define TRACK_HISCORES_H

#include <QWidget>

namespace Ui {
class Track_HiScores;
}

class Track_HiScores : public QWidget
{
    Q_OBJECT
    
public:
    explicit Track_HiScores(QWidget *parent = 0);
    ~Track_HiScores();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::Track_HiScores *ui;
    void showHighScores();
};

#endif // TRACK_HISCORES_H
