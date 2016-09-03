#ifndef CHOOSEBIKE_H
#define CHOOSEBIKE_H

#include <QWidget>

namespace Ui {
class ChooseBike;
}

class ChooseBike : public QWidget
{
    Q_OBJECT
    
public:
    explicit ChooseBike(QWidget *parent = 0);
    ~ChooseBike();
    
private:
    Ui::ChooseBike *ui;
};

#endif // CHOOSEBIKE_H
