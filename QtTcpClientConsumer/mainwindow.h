#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QWidget>
#include <QTimer>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
  

public slots:

    void getData();
    void tcpConnect();
    void tcpDisconnect();


    void updateIp(); //FEITO
    void startButton(); //FEITO
    void intervalTimer(int); //FEITO
    void stopTimer(); //FEITO
    void timerEvent();


private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    QStringList ipList;
    QTimer *timer;

    int intervalT = 1000; //FEITO
    int value; //FEITO


};

#endif // MAINWINDOW_H
