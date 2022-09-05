#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
/*
QJsonArray	            封装 JSON 数组
QJsonDocument	        读写 JSON 文档
QJsonObject	            封装 JSON 对象
QJsonObject::iterator	用于遍历QJsonObject的 STL 风格的非 const 遍历器
QJsonParseError         报告 JSON 处理过程中出现的错误
QJsonValue              封装 JSON 值
*/
