#include "communicate.h"
#include <QHostAddress>
#include <QDebug>
Communicate::Communicate(QObject *parent) : QObject(parent)
{
    //连接服务器
    s.connectToHost(QHostAddress("192.168.1.170"),9999);

    connect(&s,SIGNAL(readyRead()),this,SLOT(readData()));
}
/*
QJsonArray	            封装 JSON 数组
QJsonDocument	        读写 JSON 文档
QJsonObject	            封装 JSON 对象
QJsonObject::iterator	用于遍历QJsonObject的 STL 风格的非 const 遍历器
QJsonParseError         报告 JSON 处理过程中出现的错误
QJsonValue              封装 JSON 值
*/
void Communicate::readData()
{
    QByteArray data;
    while (s.bytesAvailable())
    {
        data += s.readAll();
    }

    //数据解析
    QJsonDocument dt = QJsonDocument::fromJson(data);
    //QJsonDocument::fromJson()可以由QByteArray对象构造一个QJsonDocument对象，用于我们的读写操作。
    if(dt.isNull())
    {
        return;
    }
    QJsonObject root = dt.object();

    //具体的逻辑处理
    int cmd = root["cmd"].toInt();
    switch (cmd) {
    case REGISTER:
        emit rstResult(root["result"].toInt());
        break;
    case LOGIN:
        emit Login(root);
        break;
    case SINGLEGETQUESTION:
        emit receiveSingleQuestion(root["question"].toObject());
        break;
    case RANK:
        emit Rank(root);
        break;
    case ANSWER:
        emit Rank(root);
        break;
    case RANKRESULT:
        emit Rank(root);
        break;
    default:
        break;
    }

}

void Communicate::writeData(const QJsonObject &json)
{
    //QJsonDocument：能将对象转变为json字符串
    QJsonDocument d(json);
    //toJSON() 方法可以将 Date 对象转换为字符串，并格式化为 JSON 数据格式。
    QByteArray sendData = d.toJson();
    int len = sendData.size();

    //发送数据长度
    s.write((char *)&len,sizeof(int));
    //发送数据
    s.write(sendData);
}
