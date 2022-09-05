#include "gammingwidget.h"
#include "ui_gammingwidget.h"

gammingwidget::gammingwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gammingwidget)
{
    ui->setupUi(this);
}

void gammingwidget::init()
{
    initWindow();
    initBackground();
}

void gammingwidget::initWindow()
{
    this->setWindowTitle("贪吃蛇");
    this->setWindowIcon(QIcon("C:\\Users\\DELL\\Desktop\\snake\\pic\\snake.jpg"));
}

void gammingwidget::initBackground()
{
    setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap("C:\\Users\\DELL\\Desktop\\snake\\pic\\background.jpg")));
    setPalette(palette);

    ui->QuitButton->setIcon(QIcon("C:\\Users\\DELL\\Desktop\\snake\\pic\\close.jpg"));
    ui->QuitButton->setIconSize(QSize(92,92));
    ui->QuitButton->setFlat(true);
}

gammingwidget::~gammingwidget()
{
    delete ui;
}

void gammingwidget::on_pushButton_clicked()
{
    this->close();
}
