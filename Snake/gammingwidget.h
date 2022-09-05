#ifndef GAMMINGWIDGET_H
#define GAMMINGWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QPainter>
#include <QRect>
#include <QMessageBox>
#include <QKeyEvent>
#define COL 26 //列
#define ROW 22 //行
#define RECTWIDTH 20
#define RECTHIGHT 20
namespace Ui {
class GammingWidget;
}

class GammingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GammingWidget(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent *e);
    void init();
    void initWinwdow();
    void initBackground();
    void Clear();
    void initConnect();
    void GameOver();
    void CheckEatFood();
    void Upgrade();
    void FlashScore();
    void CreateFood();
    void SnakeHeadRun();
    void DrawSnakeHead();
    ~GammingWidget();
    enum EmDirection
    {
      emUp = 0,
      emDown,
      emLeft,
      emRight
    };
private slots:
    void TimeOutSlots();
    void on_UpButton_clicked();

    void on_LeftButton_clicked();

    void on_RightButton_clicked();

    void on_DownButton_clicked();

    void on_quitButton_clicked();

protected:
    void paintEvent(QPaintEvent *event);
private:
    Ui::GammingWidget *ui;
    QTimer *timer;
    int m_CurrentSpeed;
    int FoodPosition[2];
    int Snake[100][2];
    int m_FoodCount;
    int m_Direction;
    int m_UpgradeScore;
    int m_CurrentGrade;
};

#endif // GAMMINGWIDGET_H
