#include "snake.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    snake w;
    w.show();
    return a.exec();
}
