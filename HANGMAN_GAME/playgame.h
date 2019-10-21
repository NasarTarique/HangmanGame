#ifndef PLAYGAME_H
#define PLAYGAME_H

#include <QMainWindow>
#include <stdlib.h>
#include <string>
#include <cstdlib>
namespace Ui {
class Playgame;
}

class Playgame : public QMainWindow
{
    Q_OBJECT

public:
    explicit Playgame(QWidget *parent = nullptr);
    ~Playgame();
    QString str,hash;
    QString words[20];
    QChar ch;
    int miss,hit,level;
    void begin();
    void generate();
    void swap();
    void check();
    void res();
    void lvl();
    void  assign();

public slots:
    void A();
    void B();
    void C();
    void D();
    void E();
    void F();
    void G();
    void H();
    void I();
    void J();
    void K();
    void L();
    void M();
    void N();
    void O();
    void P();
    void Q();
    void R();
    void S();
    void T();
    void U();
    void V();
    void W();
    void X();
    void Y();
    void Z();
    void replay();
    void next();

private:
    Ui::Playgame *ui;
};

#endif // PLAYGAME_H
