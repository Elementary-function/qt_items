#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QIcon>
#include <QMessageBox>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QMouseEvent>
#define TITLE_MOVE_HIGHT 200

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    void timerEvent(QTimerEvent *e); //时间事件函数
    void paintEvent(QPaintEvent *e); //画布背景函数
    void mousePressEvent(QMouseEvent *e); //判断鼠标按压
    void mouseMoveEvent(QMouseEvent *e);  //判断鼠标拖拽
    void mouseReleaseEvent(QMouseEvent *e); //判断鼠标是否松开
    ~Widget();


private slots:
    void on_StartButton_clicked(); //开始按钮

    void on_CloseButton_clicked(); //退出按钮

private:
    bool m_pressing;   //鼠标是否正在按压——标志位
    QPoint m_startPosition;  //获取鼠标刚开始按压时，鼠标在全局的位置信息
    QPoint m_framePosition;  //获取鼠标刚开始按压时，窗口(左上角)的位置信息
private:
    Ui::Widget *ui;
    bool m_Drawing; //判断是否正在抽奖
    int myTimerId;  //确定时间ID
    QStringList m_listNum;  //定义待抽奖名单
    int m_CurPos;   //定义名单索引
    QPixmap m_pix;  //定义背景图片
};

#endif // WIDGET_H
