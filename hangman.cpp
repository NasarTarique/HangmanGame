#include "hangman.h"
#include "ui_hangman.h"
#include <QLabel>
#include <QPixmap>

hangman::hangman(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hangman)
{
    ui->setupUi(this);

    QPixmap pix(":/images/bat.png");
    ui->label_pic->setPixmap(pix);


}

hangman::~hangman()
{
    delete ui;
}

void hangman::on_pushButton_clicked()
{
    hide();
    playgame = new PlayGame(this);
    playgame->show();



}
