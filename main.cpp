#include "mainwindow.h"

#include <QApplication>
#include "QDebug"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ///FullHD
    int windowWidth = 60;
    int windowHeight = 10;



    if(windowWidth <= 86 &&
            windowHeight <= 48 &&
            windowWidth > 0 &&
            windowHeight > 0)
    {
        MainWindow *w = new MainWindow(nullptr,
                                       windowWidth,
                                       windowHeight);

        w->show();
        w->setWindowTitle("Задание");
        w->setFixedSize(w->size());

        return a.exec();
    }
    else
    {
        qDebug()<< "Ошибка, выход за рамки клеток!!!";
    }
}
