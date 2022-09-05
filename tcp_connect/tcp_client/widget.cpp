#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    sock = new QTcpSocket; //创建套接字对象
    //连接成功
    connect(sock,&QTcpSocket::connected,[this](){
        QMessageBox::information(this,"连接提示","连接成功");
        //连接成功将隐藏当前窗口，进入chat页面
        this->hide();
        chat *c = new chat(sock);
        c->show();
    });
    //连接失败
    connect(sock,&QTcpSocket::disconnected,[this](){
        QMessageBox::warning(this,"连接提示","网络断开");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_ConnectButton_clicked()
{
    //连接ip地址和窗口
    QString Ipaddr = ui->iplineEdit->text();
    QString Port = ui->PortlineEdit->text();
    //连接服务器
    sock->connectToHost(QHostAddress(Ipaddr),Port.toShort());
}

void Widget::on_CloseButton_clicked()
{
    this->close();
}
