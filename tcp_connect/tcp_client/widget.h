#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QMessageBox>
#include <QHostAddress>
#include "chat.h"

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
    void on_ConnectButton_clicked();

    void on_CloseButton_clicked();

private:
    Ui::Widget *ui;
    QTcpSocket *sock;
};

#endif // WIDGET_H
