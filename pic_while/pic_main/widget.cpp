#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    PicId = 2;
    QPixmap pix("C:/Users/DELL/Desktop/pic_while/img/1.jpg");
    ui->Showlabel->setPixmap(pix);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::timerEvent(QTimerEvent *e)
{
    if(e->timerId() != timerId)
    {
        return;
    }
    QString Path("C:/Users/DELL/Desktop/pic_while/img/");
    Path += QString::number(PicId);
    Path += ".jpg";
    QPixmap pix(Path);
    ui->Showlabel->setPixmap(pix);
    PicId++;
    if(PicId == 7)
    {
        PicId = 1;
    }
}


void Widget::on_StartButton_clicked()
{
    timerId = this->startTimer(TIMEOUT);
}


void Widget::on_StopButton_clicked()
{
    this->killTimer(timerId);
}
