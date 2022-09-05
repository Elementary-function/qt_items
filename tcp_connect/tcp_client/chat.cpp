#include "chat.h"
#include "ui_chat.h"

chat::chat(QTcpSocket *s,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
    sock = s;
}

chat::~chat()
{
    delete ui;
}

void chat::on_SendButton_clicked()
{
    QByteArray ba;
    //将文本框内的内容转到二进制数组里面
    ba.append(ui->MesglineEdit->text());
    //写的是二进制
    sock->write(ba);
}

void chat::on_ClearButton_clicked()
{
    ui->MesglineEdit->clear();
}

void chat::on_CloseButton_clicked()
{
    this->close();
}
