#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "gammingwidget.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    void init();
    void initWindow();
    void initBackground();
    ~Widget();

private slots:
    void on_StartButton_clicked();

    void on_CloseButton_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
