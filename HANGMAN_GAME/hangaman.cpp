#include "hangaman.h"
#include "ui_hangaman.h"

HANGAMAN::HANGAMAN(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HANGAMAN)
{
    ui->setupUi(this);
}

HANGAMAN::~HANGAMAN()
{
    delete ui;
}
