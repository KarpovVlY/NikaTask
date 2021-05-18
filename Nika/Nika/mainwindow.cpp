#include "mainwindow.h"
#include "ui_mainwindow.h"


QString buttonStyle ="QPushButton{ max-width:15px; max-height:15px; min-width:15px; min-height:15px;border: solid; background-color: rgb(197, 197, 197);}";

MainWindow::MainWindow(QWidget *parent,
                       int w,
                       int h)
                       : QMainWindow(parent),
                       ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    this->windowHeight = h;
    this->windowWidth = w;


    QGridLayout *layout = new QGridLayout(ui->centralwidget);
    layout->setSpacing(1);
    QPushButton *array[windowHeight][windowWidth];


    for(int i = 0 ; i < windowHeight ; i ++)
    {

        for(int j = 0 ; j < windowWidth ; j++)
        {
            array[i][j] = new QPushButton();
            array[i][j]->setStyleSheet(buttonStyle);

            array[i][j]->installEventFilter(new Handler(this));


            layout->addWidget(array[i][j], i, j);
        }
    }
}



MainWindow::~MainWindow()
{
    delete ui;
}
