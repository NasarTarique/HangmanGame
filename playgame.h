#ifndef PLAYGAME_H
#define PLAYGAME_H

#include <QMainWindow>

namespace Ui {
class PlayGame;
}

class PlayGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayGame(QWidget *parent = nullptr);
    ~PlayGame();



private:
    Ui::PlayGame *ui;
};

#endif // PLAYGAME_H
