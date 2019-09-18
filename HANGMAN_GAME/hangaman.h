#ifndef HANGAMAN_H
#define HANGAMAN_H

#include "playgame.h"
#include <QMainWindow>

namespace Ui {
class HANGAMAN;
}

class HANGAMAN : public QMainWindow
{
    Q_OBJECT

public:
    explicit HANGAMAN(QWidget *parent = nullptr);
    ~HANGAMAN();

private slots:
    void on_pushButton_clicked();

private:
    Ui::HANGAMAN *ui;
    Playgame *Play;
};

#endif // HANGAMAN_H
