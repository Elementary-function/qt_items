#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_pressing = false;
    m_Drawing = false;
    //不显示标题栏
    this->setWindowFlags(Qt::Window|Qt::FramelessWindowHint);
    m_pix.load("C:/Users/DELL/Desktop/lottery/img/background.jpg");
    ui->listWidget->setStyleSheet("background:gray");
    ui->StartButton->setIcon(QIcon("C:/Users/DELL/Desktop/lottery/img/start.jpg"));
    ui->CloseButton->setStyleSheet("QPushButton{border-image: url(C:/Users/DELL/Desktop/lottery/img/close1.jpg);}"
                                   "QPushButton:hover{border-image: url(C:/Users/DELL/Desktop/lottery/img/close2.jpg);}"
                                   "QPushButton:pressed{border-image: url(C:/Users/DELL/Desktop/lottery/img/close3.jpg);}");
    m_listNum.push_back("吃饭");
    m_listNum.push_back("睡觉");
    m_listNum.push_back("打游戏");
    m_listNum.push_back("锻炼");
    m_listNum.push_back("运动");
    m_listNum.push_back("跑步");
    m_listNum.push_back("读书");
    m_listNum.push_back("深度之眼");
    m_listNum.push_back("进程间通信");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::timerEvent(QTimerEvent *e)
{
    if(myTimerId == e->timerId())
    {
        m_CurPos++;
        if(m_listNum.size() - 1 <= m_CurPos)
        {
            m_CurPos = 0;
        }
        if(0 == m_listNum.size())
        {
            killTimer(myTimerId);
            m_Drawing = false;
            ui->StartButton->setIcon(QIcon("C:/Users/DELL/Desktop/lottery/img/start.jpg"));
            QMessageBox::warning(this,"温馨提示","已经抽完了");
            return;
        }
        ui->Listlabel->setText(m_listNum.at(m_CurPos));
    }
}

void Widget::on_StartButton_clicked()
{
    if(!m_Drawing)
    {
        m_Drawing = true;
        ui->StartButton->setIcon(QIcon("C:/Users/DELL/Desktop/lottery/img/close1.jpg"));
        myTimerId = this->startTimer(20);
    }
    else
    {
        m_Drawing = false;
        ui->StartButton->setIcon(QIcon("C:/Users/DELL/Desktop/lottery/img/start.jpg"));
        killTimer(myTimerId);
        if(m_listNum.size() > 0)
        {
            QString strval = m_listNum.at(m_CurPos);
            m_listNum.removeAt(m_CurPos);
            ui->listWidget->addItem(new QListWidgetItem(strval));
        }
    }
}

void Widget::on_CloseButton_clicked()
{
    if(QMessageBox::Yes == QMessageBox::question(this,"提示","你确定要退出此程序吗？",QMessageBox::Yes | QMessageBox::No))
    {
        this->close();
    }
}

void Widget::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QRect rc = rect();
    painter.drawPixmap(rc,m_pix);
}

void Widget::mousePressEvent(QMouseEvent *e) //判断鼠标按压
{
    if(e->button() == Qt::LeftButton)
    {
        QRect rcTop = rect();
        rcTop.setBottom(rcTop.top() + TITLE_MOVE_HIGHT);
        if(rcTop.contains(e->pos()))
        {
            m_pressing = true;
            m_startPosition = e->globalPos();
            m_framePosition = frameGeometry().topLeft();
        }
    }
}

void Widget::mouseMoveEvent(QMouseEvent *e)  //判断鼠标拖拽
{
    if(e->buttons() == Qt::LeftButton)
    {
        if(m_pressing)
        {
            QPoint delta = e->globalPos() - m_startPosition;
            move(m_framePosition + delta);
        }
    }
}

void Widget::mouseReleaseEvent(QMouseEvent *e) //判断鼠标是否松开
{
    m_pressing = false;
}
