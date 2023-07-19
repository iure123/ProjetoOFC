#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimerEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
  void tcpConnect();

public slots:
  void stop_temp(); //FEITO
  void start_temp(); //FEITO

    void putData();
    void timerEvent(QTimerEvent *event); //FEITO

private slots:


    void on_barraMin_valueChanged(int value);

    void on_barraMax_valueChanged(int value);

    void on_barraTimer_valueChanged(int value);
    void on_connect_clicked();

    void on_disconnect_clicked();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int temporizador;
};

#endif // MAINWINDOW_H
