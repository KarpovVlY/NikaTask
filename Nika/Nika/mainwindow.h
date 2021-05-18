#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include <QFormLayout>

#include "handler.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT



private:
    Ui::MainWindow *ui;
    QPushButton **array;
    int windowWidth;
    int windowHeight;


public:
    MainWindow(QWidget *parent,
               int w,
               int h);
    ~MainWindow();


};
#endif
