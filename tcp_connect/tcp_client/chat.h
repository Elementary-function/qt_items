#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class chat;
}

class chat : public QWidget
{
    Q_OBJECT

public:
    explicit chat(QTcpSocket *s,QWidget *parent = 0);
    ~chat();

private slots:
    void on_SendButton_clicked();

    void on_ClearButton_clicked();

    void on_CloseButton_clicked();

private:
    Ui::chat *ui;
    QTcpSocket *sock;
};

#endif // CHAT_H
