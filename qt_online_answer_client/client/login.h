#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "communicate.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_StartButton_clicked();

    void on_RegisterButton_clicked();

    void Login(QJsonObject json);

private:
    Ui::Widget *ui;

    Communicate *_com;  //定义一个通信类指针
};

#endif // WIDGET_H
