#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStack>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    int Priority(char ch);
    ~Widget();

private slots:
    void on_ClearButton_clicked();

    void on_PlusButton_clicked();

    void on_SubButton_clicked();

    void on_ChopButton_clicked();

    void on_OneButton_clicked();

    void on_TwoButton_clicked();

    void on_ThreeButton_clicked();

    void on_MulButton_clicked();

    void on_FourButton_clicked();

    void on_FiveButton_clicked();

    void on_SixButton_clicked();

    void on_DivButton_clicked();

    void on_SevenButton_clicked();

    void on_EightButton_clicked();

    void on_NineButton_clicked();

    void on_LeftButton_clicked();

    void on_ZeroButton_clicked();

    void on_RightButton_clicked();

    void on_EqualButton_clicked();

private:
    Ui::Widget *ui;
    QString expression;
};

#endif // WIDGET_H
