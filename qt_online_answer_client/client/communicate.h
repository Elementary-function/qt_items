#ifndef COMMUNICATE_H
#define COMMUNICATE_H

#include <QObject>
#include <QTcpSocket>
#include <QJsonObject>
#include <QJsonDocument>
#include "../common.h"
#include <QJsonArray>

class Communicate : public QObject
{
    Q_OBJECT
public:
    explicit Communicate(QObject *parent = nullptr);

    void writeData(const QJsonObject &json);

signals:
    void rstResult(int);

    void Login(QJsonObject json);

    void receiveSingleQuestion(QJsonObject);

    void Rank(QJsonObject);

public slots:
    void readData();

private:
    QTcpSocket s;
};

#endif // COMMUNICATE_H
