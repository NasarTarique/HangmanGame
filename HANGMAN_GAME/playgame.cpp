#include "playgame.h"
#include "ui_playgame.h"

Playgame::Playgame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Playgame)
{
    ui->setupUi(this);
}

Playgame::~Playgame()
{
    delete ui;
}
