#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    timer = new QTimer;
    PicId = 2;
    ui->setupUi(this);
    ui->mainlabel->setPixmap(QPixmap::fromImage(QImage("C:/Users/DELL/Desktop/QTimer/img/1.jpg")));
    connect(timer,&QTimer::timeout,this,&Widget::TimeoutSlots);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_StartButton_clicked()
{
    timer->start(TIMEOUT);
}

void Widget::TimeoutSlots()
{
    QString Path("C:/Users/DELL/Desktop/QTimer/img/");
    Path += QString::number(PicId);
    Path += ".jpg";
    ui->mainlabel->setPixmap(QPixmap::fromImage(QImage(Path)));
    PicId++;
    if(PicId == 7)
    {
        PicId = 1;
    }
}

void Widget::on_pushButton_3_clicked()
{
    timer->stop();
}

void Widget::on_OnceButton_clicked()
{
    QTimer::singleShot(20,this,SLOT(TimeoutSlots()));
}
