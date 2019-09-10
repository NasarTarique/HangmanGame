#ifndef HANGAMAN_H
#define HANGAMAN_H

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

private:
    Ui::HANGAMAN *ui;
};

#endif // HANGAMAN_H
