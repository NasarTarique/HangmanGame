#ifndef HANGMANGAME_H
#define HANGMANGAME_H

#include <QMainWindow>

namespace Ui {
class HangmanGame;
}

class HangmanGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit HangmanGame(QWidget *parent = nullptr);
    ~HangmanGame();

private:
    Ui::HangmanGame *ui;
};

#endif // HANGMANGAME_H
