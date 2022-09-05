#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Newaction,&QAction::triggered,this,&MainWindow::NewActionSlots);
    connect(ui->Openaction,&QAction::triggered,this,&MainWindow::OpenActionSlots);
    connect(ui->Saveaction,&QAction::triggered,this,&MainWindow::SaveActionSlots);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NewActionSlots()
{
    ui->textEdit->clear();
    this->setWindowTitle("新建文本文档.txt");
}

void MainWindow::OpenActionSlots()
{
    QString filename = QFileDialog::getOpenFileName(this,tr("请选择一个文件"),
                                                    QCoreApplication::applicationFilePath(),
                                                    "*.cpp");
    if(filename.isEmpty())
    {
        QMessageBox::warning(this,"警告","请选择一个文件");
    }
    else {
        QFile file(filename);
        file.open(QIODevice::ReadOnly);
        QByteArray ba = file.readAll();
        ui->textEdit->setText(QString(ba));
        file.close();
    }
}

void MainWindow::SaveActionSlots()
{
    QString filename = QFileDialog::getSaveFileName(this,tr("请选择一个文件"),
                                                    QCoreApplication::applicationFilePath());
    if(filename.isEmpty())
    {
        QMessageBox::warning(this,"警告","请选择一个文件");
    }
    else {
        QFile file(filename);
        file.open(QIODevice::WriteOnly);
        QByteArray ba;
        ba.append(ui->textEdit->toPlainText());
        file.write(ba);
        file.close();
    }
}

void MainWindow::keyPressEvent(QKeyEvent *k)
{
    if(k->modifiers() == Qt::ControlModifier && k->key() == Qt::Key_S)
    {
        SaveActionSlots();
    }
    if(k->modifiers() == Qt::ControlModifier && k->key() == Qt::Key_C)
    {
        NewActionSlots();
    }
    if(k->modifiers() == Qt::ControlModifier && k->key() == Qt::Key_O)
    {
        OpenActionSlots();
    }
}
void MainWindow::mousePressEvent(QMouseEvent *m)
{
    QPoint pt = m->pos();
    qDebug()<<pt;
    if(m->button() == Qt::LeftButton)
    {
        qDebug()<<"左键被按下";
    }
    else if(m->button() == Qt::RightButton)
    {
        qDebug()<<"右键被按下";
    }
}
