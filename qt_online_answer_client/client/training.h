#ifndef TRAINING_H
#define TRAINING_H

#include <QDialog>
#include "communicate.h"
#include <QJsonObject>
#include <QTimer>
#include <iostream>
#define QUESTIONTIME 8
#define QUESTION_NUM 5

namespace Ui {
class training;
}

class training : public QDialog
{
    Q_OBJECT

public:
    explicit training(Communicate *com, QJsonObject JSON, QWidget *parent = 0);
    ~training();

private:
    void singleGetQuestion();

    //个人训练答题
    void singleAnswerQuestion(int select);

    //设置个人训练题目
    void singleSetQuestion();


   // void singleTimerOut();

    void SetSelfLineInfo();

    void SetEnemyLineInfo();

    void RankSetQuestion();

    //排位答题
    void RankAnswerQuestion(int select);

    //处理排位结果
    void RankSetResult(QJsonObject);

private slots:
    void on_singleButton_clicked();

    void on_single_back_clicked();

    void on_single_start_clicked();

    //接受个人训练题目
    void receiveSingleQuestion(QJsonObject json);

    void on_single_SelectButton_one_clicked();

    void on_single_SelectButton_two_clicked();

    void on_single_SelectButton_three_clicked();

    void on_single_SelectButton_four_clicked();

    // 个人训练 计时器
    void  singleTimerOut();

    void on_singnal_score_backButton_clicked();

    void on_rankButton_clicked();

    //开始排位
    void Rank(QJsonObject json);

    void RankTimerOut();

    void on_rankSelectButton1_clicked();

    void on_rankSelectButton2_clicked();

    void on_rankSelectButton3_clicked();

    void on_rankSelectButton4_clicked();

    void on_pushButton_clicked();

private:
    Ui::training *ui;
    Communicate *_com;  //通信类指针


    QJsonObject _singleQuestionJson; //接收个人训练问题的对象
    int         singleQuestionFlag;  //个人训练当前问题的标志位（下标）
    QTimer      _singleTimer;        // 个人训练项目定时器
    int         _singleSec;          // 个人训练答题时间
    int         _singleScore;        // 个人训练得分

    QJsonObject RankQuestion;        //rank的问题
    QString     EnemyName;           //对手的名字
    QString     EnemyRank;           //对手的段位
    int         EnemyScore;          //对手的得分

    int         RankSec;             //rank答题计时
    int         SelfScore;           //个人得分

    QString     SelfName;            //个人用户名
    QString     SelfRank;            //个人段位

    int        CurrentRankQuestion;  //rank当前回答问题的下标
    int        EnemyRankQueston;     //对手当前回答问题的下标
    QTimer     RankTimer;            //rank定时器

};

#endif // TRAINING_H
