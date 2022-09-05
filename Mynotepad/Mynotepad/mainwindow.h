#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent *k);
    void mousePressEvent(QMouseEvent *m);
    ~MainWindow();

private slots:
    void NewActionSlots();
    void OpenActionSlots();
    void SaveActionSlots();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
