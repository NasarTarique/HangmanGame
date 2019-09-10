#include "hangmangame.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HangmanGame w;
    w.show();

    return a.exec();
}
