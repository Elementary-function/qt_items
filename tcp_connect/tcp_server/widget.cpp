#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    Tcpserver = new QTcpServer;
    socket = new QTcpSocket;
    //监听任何IPv4地址，PORT是写死8000的
    Tcpserver->listen(QHostAddress::AnyIPv4,PORT);
    //客户端发起连接，server会发出信号
    connect(Tcpserver,&QTcpServer::newConnection,this,&Widget::NewClientHandeler);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::NewClientHandeler()
{
    //建立tcp连接
    socket = Tcpserver->nextPendingConnection();//socket就包含了这个客户端的所有消息
    socket->peerPort(); //对端（客户端）的端口
    socket->peerAddress(); //对端（客户端）的ip地址
    //进行显示
    ui->IplineEdit->setText(socket->peerAddress().toString());
    ui->PortlineEdit->setText(QString::number(socket->peerPort()));
    //判断是发信息的，不是发起连接的，之后进行槽函数处理
    //connect(socket,&QTcpSocket::readyRead,this,&Widget::ClientInfiSlots);
    //创建新线程（new 一个对象）
    Mythread *t = new Mythread(socket);
    t->start();
    connect(t,&Mythread::SendToWidget,this,&Widget::ThreadSlots);
}

void Widget::ClientInfiSlots()
{
    ui->MesglineEdit->setText(QString(socket->readAll()));
}

void Widget::ThreadSlots(QByteArray ba)
{
    ui->MesglineEdit->setText(QString(ba));
}
