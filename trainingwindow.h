#ifndef TRAININGWINDOW_H
#define TRAININGWINDOW_H

#include <QWidget>

namespace Ui {
class Trainingwindow;
}

class Trainingwindow : public QWidget
{
    Q_OBJECT

public:
    explicit Trainingwindow(QWidget *parent = 0);
    ~Trainingwindow();

private:
    Ui::Trainingwindow *ui;
};

#endif // TRAININGWINDOW_H
