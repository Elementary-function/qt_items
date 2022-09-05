#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include "mythread.h"
#define PORT 8000

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private slots:
    void NewClientHandeler();
    void ClientInfiSlots();
    void ThreadSlots(QByteArray ba);

private:
    Ui::Widget *ui;
    QTcpServer *Tcpserver;
    QTcpSocket *socket;
};

#endif // WIDGET_H
