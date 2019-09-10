#include "hangmangame.h"
#include "ui_hangmangame.h"

HangmanGame::HangmanGame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HangmanGame)
{
    ui->setupUi(this);
}

HangmanGame::~HangmanGame()
{
    delete ui;
}
