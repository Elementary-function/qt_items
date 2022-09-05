#include "login.h"
#include "ui_widget.h"
#include "register.h"
#include <QMessageBox>
#include "training.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    _com = new Communicate();
    connect(_com,SIGNAL(Login(QJsonObject)),this,SLOT(Login(QJsonObject)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_StartButton_clicked()
{
    QString userName = ui->UserlineEdit->text();
    QString passwd   = ui->PasswdlineEdit->text();

    //将登录信息发送给服务器
    QJsonObject json;
    json["cmd"]      = LOGIN;
    json["userName"] = userName;
    json["passwd"]   = passwd;

    //给服务器发送数据
    _com->writeData(json);
}

void Widget::on_RegisterButton_clicked()
{
    this->hide();
    Register reg(_com);
    reg.exec();
    this->show();

}

void Widget::Login(QJsonObject json)
{
    int result = json["result"].toInt();
    switch (result)
    {
    case OK:
    {
        this->hide();
        training *dlg = new training(_com,json);
        dlg->show();
        //退出时自己销毁
        dlg->setAttribute(Qt::WA_DeleteOnClose);
        break;
    }
    case ERROR:
        QMessageBox::critical(this,"登录","登录失败，未知错误");
        break;
    case USERLOGIN:
        QMessageBox::critical(this,"登录","登录失败，不允许重复登录");
        break;
    case NAMEORPASSWD:
        QMessageBox::critical(this,"登录","用户名或者密码错误");
        break;
    default:
        break;
    }
}
