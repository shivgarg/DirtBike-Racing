#ifndef CURRENTSCORE_H
#define CURRENTSCORE_H

#include <QWidget>

namespace Ui {
class CurrentScore;
}

class CurrentScore : public QWidget
{
    Q_OBJECT
    
public:
    explicit CurrentScore(QWidget *parent = 0);
    ~CurrentScore();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::CurrentScore *ui;
};

#endif // CURRENTSCORE_H
