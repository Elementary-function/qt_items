#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("计算器");
    QFont f("仿宋",14);
    ui->lineEdit->setFont(f);


    QIcon con("C:\\Users\\DELL\\Desktop\\QT_caculate\\img\\1.png");
    ui->ChopButton->setIcon(con);
    ui->EqualButton->setStyleSheet("background:red");
    ui->ClearButton->setStyleSheet("background:yellow");
}

Widget::~Widget()
{
    delete ui;
}

//优先级判断
int Widget::Priority(char ch)
{
    switch (ch)
    {
    case '(':
        return 3;
    case '*':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;
    }
}

void Widget::on_ClearButton_clicked()
{
    expression.clear();
    ui->lineEdit->clear();
}

void Widget::on_PlusButton_clicked()
{
    expression += "+";
    ui->lineEdit->setText(expression);
}

void Widget::on_SubButton_clicked()
{
    expression += "-";
    ui->lineEdit->setText(expression);
}

void Widget::on_ChopButton_clicked()
{
    expression.chop(1);
    ui->lineEdit->setText(expression);
}

void Widget::on_OneButton_clicked()
{
    expression += "1";
    ui->lineEdit->setText(expression);
}

void Widget::on_TwoButton_clicked()
{
    expression += "2";
    ui->lineEdit->setText(expression);
}

void Widget::on_ThreeButton_clicked()
{
    expression += "3";
    ui->lineEdit->setText(expression);
}

void Widget::on_MulButton_clicked()
{
    expression += "*";
    ui->lineEdit->setText(expression);
}

void Widget::on_FourButton_clicked()
{
    expression += "4";
    ui->lineEdit->setText(expression);
}

void Widget::on_FiveButton_clicked()
{
    expression += "5";
    ui->lineEdit->setText(expression);
}

void Widget::on_SixButton_clicked()
{
    expression += "6";
    ui->lineEdit->setText(expression);
}

void Widget::on_DivButton_clicked()
{
    expression += "/";
    ui->lineEdit->setText(expression);
}

void Widget::on_SevenButton_clicked()
{
    expression += "7";
    ui->lineEdit->setText(expression);
}

void Widget::on_EightButton_clicked()
{
    expression += "8";
    ui->lineEdit->setText(expression);
}

void Widget::on_NineButton_clicked()
{
    expression += "8";
    ui->lineEdit->setText(expression);
}

void Widget::on_LeftButton_clicked()
{
    expression += "(";
    ui->lineEdit->setText(expression);
}

void Widget::on_ZeroButton_clicked()
{
    expression += "0";
    ui->lineEdit->setText(expression);
}

void Widget::on_RightButton_clicked()
{
    expression += ")";
    ui->lineEdit->setText(expression);
}

void Widget::on_EqualButton_clicked()
{
    QStack<int> s_num,s_opt;
    QByteArray ba;
    ba.append(expression);
    char opt[128] = {0};
    strcpy(opt,ba.data());
    int i = 0,tmp = 0,num1,num2;
    while(opt[i] != '\0' || s_opt.empty() != true)
    {
        if(opt[i] >= '0' && opt[i] <= '9')
        {
            tmp = tmp *10 + opt[i] - '0';
            i++;
            if(opt[i] < '0' || opt[i] >'9')
            {
                s_num.push(tmp);
                tmp = 0;
            }
        }
        else  //操作符
        {
            if(s_opt.empty() == true || Priority(opt[i]) > Priority(s_opt.top()) || (s_opt.top() == '(' && opt[i] != ')'))
            {
                s_opt.push(opt[i]);
                i++;
                continue;
            }
            if(s_opt.top() == '(' && opt[i] == ')')
            {
                s_opt.pop();
                i++;
                continue;
            }
            if(Priority(opt[i]) <= Priority(s_opt.top()) || (opt[i] == ')' && s_opt.top() != ')') ||
            (opt[i] == '\0' && s_opt.empty() != true))
            {
                char ch = s_opt.top();
                s_opt.pop();
                switch (ch)
                {
                case '+':
                    num1 = s_num.top();
                    s_num.pop();
                    num2 = s_num.top();
                    s_num.pop();
                    s_num.push(num1 + num2);
                    break;
                case '-':
                    num1 = s_num.top();
                    s_num.pop();
                    num2 = s_num.top();
                    s_num.pop();
                    s_num.push(num2 - num1);
                    break;
                 case '*':
                    num1 = s_num.top();
                    s_num.pop();
                    num2 = s_num.top();
                    s_num.pop();
                    s_num.push(num1 * num2);
                    break;
                case '/':
                    num1 = s_num.top();
                    s_num.pop();
                    num2 = s_num.top();
                    s_num.pop();
                    s_num.push(num2 / num1);
                    break;
                default:
                    break;
                }
            }
        }
    }
    ui->lineEdit->setText(QString::number(s_num.top()));
    expression.clear();
}
