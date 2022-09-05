#include "mythread.h"

Mythread::Mythread(QTcpSocket *s)
{
    sock = s;
}

void Mythread::run()
{
    connect(sock,&QTcpSocket::readyRead,this,&Mythread::ClientinfoSlots);
}

void Mythread::ClientinfoSlots()
{
    QByteArray ba = sock->readAll();
    emit SendToWidget(ba);
}


