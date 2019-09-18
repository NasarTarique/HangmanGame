#ifndef PLAYGAME_H
#define PLAYGAME_H

#include <QMainWindow>

namespace Ui {
class Playgame;
}

class Playgame : public QMainWindow
{
    Q_OBJECT

public:
    explicit Playgame(QWidget *parent = nullptr);
    ~Playgame();

private:
    Ui::Playgame *ui;
};

#endif // PLAYGAME_H
