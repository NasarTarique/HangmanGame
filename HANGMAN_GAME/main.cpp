#include "hangaman.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HANGAMAN w;
    w.setWindowTitle("Hangman");
    w.show();

    return a.exec();
}
