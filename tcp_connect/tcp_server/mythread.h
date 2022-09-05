#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QWidget>
#include <QThread>
#include <QTcpSocket>
#include <QDebug>

//继承QThread这个类，
class Mythread : public QThread
{
    Q_OBJECT
public:
    explicit Mythread(QTcpSocket *s);
    //线程函数（虚函数）
    void run();

signals:
    void SendToWidget(QByteArray ba);

public slots:
    void ClientinfoSlots();
    void ThreadSlots(QByteArray ba);
private:
    QTcpSocket *sock;
};

#endif // MYTHREAD_H
