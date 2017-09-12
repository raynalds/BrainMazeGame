#include "trainingwindow.h"
#include "ui_trainingwindow.h"

Trainingwindow::Trainingwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Trainingwindow)
{
    ui->setupUi(this);
}

Trainingwindow::~Trainingwindow()
{
    delete ui;
}
