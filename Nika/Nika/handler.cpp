#include "handler.h"

#include "mainwindow.h"




QString buttonPressed = "QPushButton{ max-width:15px; max-height:15px; min-width:15px; min-height:15px;border: solid; background-color: #ff006c }";
QMainWindow *widget;

Handler::Handler(QObject *parent) :
                 QObject(parent)
{
    widget = qobject_cast<QMainWindow *>(parent);

}


bool Handler::eventFilter(QObject *obj, QEvent *event)
{
    button = qobject_cast<QPushButton *>(obj);


    if (event->type() == QEvent::MouseButtonPress)
    {


        button->setStyleSheet(buttonPressed);

        return true;
    }
    else if(event->type() == QEvent::Enter)
    {

       return true;
    }
    else if(event->type() == QEvent::Leave)
    {

        return true;
    }
    else
        return QObject::eventFilter(obj, event);

}

Handler::~Handler()
{

}
