#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPixmap>
#define TIMEOUT 1000

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    void timerEvent(QTimerEvent *e);
    ~Widget();

private slots:
    void on_StartButton_clicked();


    void on_StopButton_clicked();

private:
    Ui::Widget *ui;
    int timerId;
    int PicId;
};

#endif // WIDGET_H
