#ifndef HANGMAN_H
#define HANGMAN_H

#include <QMainWindow>
#include <playgame.h>

namespace Ui {
class hangman;
}

class hangman : public QMainWindow
{
    Q_OBJECT

public:
    explicit hangman(QWidget *parent = nullptr);
    ~hangman();

private slots:
    void on_pushButton_clicked();

private:
    Ui::hangman *ui;
    PlayGame *playgame;
};

#endif // HANGMAN_H
