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

void Widget::on_StartButton_clicked()
{
    gammingwidget *widget = new gammingwidget(this);
    widget->show();
}

void Widget::on_CloseButton_clicked()
{
    this->close();
}

void Widget::init()
{
    initWindow();
    initBackground();
}

void Widget::initWindow()
{
    this->setWindowTitle("贪吃蛇");
    this->setWindowIcon(QIcon("C:\\Users\\DELL\\Desktop\\snake\\pic\\snake.jpg"));
}

void Widget::initBackground()
{
    setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap("C:\\Users\\DELL\\Desktop\\snake\\pic\\background.jpg")));
    setPalette(palette);

    ui->StartButton->setIcon(QIcon("C:\\Users\\DELL\\Desktop\\snake\\pic\\start.jpg"));
    ui->StartButton->setIconSize(QSize(92,92));
    ui->StartButton->setFlat(true);

    ui->CloseButton->setIcon(QIcon("C:\\Users\\DELL\\Desktop\\snake\\pic\\close.jpg"));
    ui->CloseButton->setIconSize(QSize(92,92));
    ui->CloseButton->setFlat(true);

}
