#include "hangaman.h"
#include "ui_hangaman.h"


HANGAMAN::HANGAMAN(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HANGAMAN)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/bat.png");
    ui->label->setPixmap(pix);

}

HANGAMAN::~HANGAMAN()
{
    delete ui;
}

void HANGAMAN::on_pushButton_clicked()
{
    hide();
    Play = new Playgame (this);
    Play->show();
}
