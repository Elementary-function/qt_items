#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    init();
}

Widget::~Widget()
{
    delete ui;
}
void Widget::initWindow()
{
    this->setWindowTitle("贪吃蛇");
    this->setWindowIcon(QIcon("G:\\Employment class\\208+210 C++\\day19\\code\\pic\\snake.webp"));
}
void Widget::initBackground()
{
    setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap("G:\\Employment class\\208+210 C++\\day19\\code\\pic\\background.webp")));
    setPalette(palette);

    ui->StartButton->setIcon(QIcon("G:\\Employment class\\208+210 C++\\day19\\code\\pic\\start.webp"));
    ui->StartButton->setIconSize(QSize(120,120));
    ui->StartButton->setFlat(true);

    ui->CloseButton->setIcon(QIcon("G:\\Employment class\\208+210 C++\\day19\\code\\pic\\close.webp"));
    ui->CloseButton->setIconSize(QSize(120,120));
    ui->CloseButton->setFlat(true);

}
void Widget::init()
{
    initWindow();
    initBackground();
}
void Widget::on_StartButton_clicked()
{
    GammingWidget *widget = new GammingWidget(this);
    widget->show();
}

void Widget::on_CloseButton_clicked()
{
    this->close();
}
