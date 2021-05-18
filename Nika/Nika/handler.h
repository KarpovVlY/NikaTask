#ifndef HANDLER_H
#define HANDLER_H

#include <QObject>
#include <QKeyEvent>
#include <QPushButton>

class Handler : public QObject
{
    Q_OBJECT


private:
    QPushButton *button;


public:
    explicit Handler(QObject *parent = nullptr);
    ~Handler();


protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

};

#endif
