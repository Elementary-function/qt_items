#ifndef GAMMINGWIDGET_H
#define GAMMINGWIDGET_H

#include <QWidget>

namespace Ui {
class gammingwidget;
}

class gammingwidget : public QWidget
{
    Q_OBJECT

public:
    explicit gammingwidget(QWidget *parent = 0);
    void init();
    void initWindow();
    void initBackground();
    ~gammingwidget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::gammingwidget *ui;
};

#endif // GAMMINGWIDGET_H
