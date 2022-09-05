#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->lineEdit,SIGNAL(returnPressed()),this,SLOT(on_commitButton_clicked()));
    connect(ui->cancelButton,&QPushButton::clicked,this,&Widget::on_CancelButton_clicked);
    connect(ui->browesButton,&QPushButton::clicked,[this](){
        QMessageBox::information(this,"信息","点击浏览");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_commitButton_clicked()
{
    QString program = ui->lineEdit->text();
    QProcess *myProcess = new QProcess(this);
    myProcess->start(program);
}

void Widget::on_CancelButton_clicked()
{
    this->close();
}
