#include "playgame.h"
#include "ui_playgame.h"
#include <string.h>
#include <QString>

PlayGame::PlayGame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlayGame)
{
    ui->setupUi(this);

}

PlayGame::~PlayGame()
{
    delete ui;
}


