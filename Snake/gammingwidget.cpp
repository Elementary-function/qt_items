#include "gammingwidget.h"
#include "ui_gammingwidget.h"

GammingWidget::GammingWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GammingWidget)
{
    ui->setupUi(this);
    setFocusPolicy(Qt::StrongFocus);
    init();
    CreateFood();
}
void GammingWidget::Clear()
{
    timer = new QTimer;
    m_CurrentSpeed = 350;
    DrawSnakeHead();
    m_UpgradeScore = 100;
    m_CurrentGrade = 1;
    m_FoodCount = 0;
}
void GammingWidget::DrawSnakeHead()
{
    Snake[0][0] = qrand() % COL;
    Snake[0][1] = qrand() % ROW;
    m_Direction = qrand() % 4;
}
void GammingWidget::initWinwdow()
{
    this->setWindowTitle("贪吃蛇");
    this->setWindowIcon(QIcon("G:\\Employment class\\208+210 C++\\day19\\code\\pic\\snake.webp"));
}
void GammingWidget::initBackground()
{
    setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap("G:\\Employment class\\208+210 C++\\day19\\code\\pic\\gammingbackgroud.webp")));
    setPalette(palette);

    ui->quitButton->setIcon(QIcon("G:\\Employment class\\208+210 C++\\day19\\code\\pic\\quit.webp"));
    ui->quitButton->setIconSize(QSize(50,50));
    ui->quitButton->setFlat(true);
}
void GammingWidget::GameOver()
{
    timer->stop();
    QMessageBox::information(this,"提示","游戏结束");
    ui->LevellineEdit->setText("1");
    ui->ScorelineEdit->setText("0");
}
void GammingWidget::Upgrade()
{
    if(ui->ScorelineEdit->text().toInt() >= m_UpgradeScore * m_CurrentGrade)
    {
        m_UpgradeScore *= 2;
        ++m_CurrentGrade;
        if(m_CurrentSpeed > 50)
        {
            m_CurrentSpeed -= 100;
        }
        timer->stop();
        QMessageBox::information(this,"提示","升级成功，进入下一级");
        timer->start(m_CurrentSpeed);
    }
}

void GammingWidget::FlashScore()
{
    ui->LevellineEdit->setText(QString::number(m_CurrentGrade));
    ui->ScorelineEdit->setText(QString::number(m_FoodCount *10));
}
void GammingWidget::CreateFood()
{
    FoodPosition[0] = qrand() % COL;
    FoodPosition[1] = qrand() % ROW;
    //防止食物产生在蛇上
    for(int i = 0 ; i <= m_FoodCount;i++)
    {
        if(FoodPosition[0] == Snake[i][0] && FoodPosition[1] == Snake[i][1])
        {
            FoodPosition[0] = qrand() % COL - 1;
            FoodPosition[1] = qrand() % ROW - 1;
        }
    }
}
void GammingWidget::SnakeHeadRun()
{
    switch (m_Direction) {
    case emUp:
        --Snake[0][1];
        break;
    case emDown:
        ++Snake[0][1];
        break;
    case emLeft:
        --Snake[0][0];
        break;
    case emRight:
        ++Snake[0][0];
        break;
    default:
        break;
    }
}
void GammingWidget::CheckEatFood()
{
    if(Snake[0][0] == FoodPosition[0] && Snake[0][1] == FoodPosition[1])
    {
        ++m_FoodCount;
        Upgrade();
        FlashScore();
        CreateFood();
    }
    //蛇身体的移动
    for(int SnId = m_FoodCount; SnId > 0;--SnId)
    {
        Snake[SnId][0] = Snake[SnId - 1][0];
        Snake[SnId][1] = Snake[SnId - 1][1];
    }
    SnakeHeadRun();

}
void GammingWidget::TimeOutSlots()
{
    if(Snake[0][0] >= (COL -1) || Snake[0][0] <= 0 || Snake[0][1] <= 0 || Snake[0][1] >= (ROW - 1))
    {
        GameOver();
    }
    for(int i = 1;i <= m_FoodCount;i++)
    {
        if(Snake[0][0] == Snake[i][0] && Snake[0][1] == Snake[i][1])
        {
            GameOver();
        }
    }
    CheckEatFood();
    update();
}
void GammingWidget::initConnect()
{
    connect(timer,&QTimer::timeout,this,&GammingWidget::TimeOutSlots);
    timer->start(m_CurrentSpeed);
}
void GammingWidget::init()
{
    Clear();
    initWinwdow();
    initBackground();
    initConnect();
}

void GammingWidget::paintEvent(QPaintEvent *event)
{
    //画游戏盘
    QPainter painter(this);
    for(int x = 0; x < COL;x++)
    {
        for(int y = 0; y < ROW;y++)
        {
            QRect rect(x*RECTWIDTH,y*RECTHIGHT,RECTWIDTH,RECTHIGHT);
            painter.drawRect(rect);
        }
    }
    //画食物
    QRect FoodRect(FoodPosition[0]*RECTWIDTH,FoodPosition[1]*RECTHIGHT,RECTWIDTH,RECTHIGHT);
    painter.fillRect(FoodRect,Qt::green);
    //画蛇头
    QRect HeadRect(Snake[0][0]*RECTWIDTH,Snake[0][1]*RECTHIGHT,RECTWIDTH,RECTHIGHT);
    painter.fillRect(HeadRect,Qt::red);
    //画蛇身
    for(int i = 1;  i <= m_FoodCount;++i)
    {
        QRect BodyRect(Snake[i][0]*RECTWIDTH,Snake[i][1]*RECTHIGHT,RECTWIDTH,RECTHIGHT);
        painter.fillRect(BodyRect,Qt::red);
    }

}
void GammingWidget::keyPressEvent(QKeyEvent *e)
{
    if(e->key() == Qt::Key_Left)
    {
        on_LeftButton_clicked();
    }
    else if(e->key() == Qt::Key_Right)
    {
        on_RightButton_clicked();
    }
    else if(e->key() == Qt::Key_Up)
    {
        on_UpButton_clicked();
    }
    else if(e->key() == Qt::Key_Down)
    {
        on_DownButton_clicked();
    }
}
GammingWidget::~GammingWidget()
{
    delete ui;
}

void GammingWidget::on_UpButton_clicked()
{
    m_Direction = emUp;
}

void GammingWidget::on_LeftButton_clicked()
{
    m_Direction = emLeft;
}

void GammingWidget::on_RightButton_clicked()
{
    m_Direction = emRight;
}

void GammingWidget::on_DownButton_clicked()
{
    m_Direction = emDown;
}

void GammingWidget::on_quitButton_clicked()
{
    this->close();
}
