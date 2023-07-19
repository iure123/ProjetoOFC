#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimerEvent>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);

  connect(ui->start,
          SIGNAL(clicked()),
          this,
          SLOT(start_temp())
          );
  connect(ui->stop,
          SIGNAL(clicked()),
          this,
          SLOT(stop_temp())
          );
  connect(ui->connect,
          SIGNAL(clicked()),
          this,
          SLOT(on_connect_clicked())
          );
  connect(ui->disconnect,
          SIGNAL(clicked()),
          this,
          SLOT(on_disconnect_clicked())
          );
}

//DESTRUTOR
MainWindow::~MainWindow(){
    delete socket;
    delete ui;
}


void MainWindow::timerEvent(QTimerEvent *event){
    putData();
}



//CLICK PRA CONECTAR COM SERVIDOR
void MainWindow::on_connect_clicked()
{
    tcpConnect();
}

//FUNCAO PRA DESCONECTAR
void MainWindow::on_disconnect_clicked(){
    socket->disconnectFromHost();
    ui->status->setText("Desconectado");
}

//FUNCAO COLOCAR NA TABELA DADOS
void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;

  int vmin = ui->minimo->value();
  int vmax = ui->maximo->value();

  if(socket->state()== QAbstractSocket::ConnectedState){

          msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch(); //GERE O NUMERO
          str = "set "+ QString::number(msecdate) + " " +  QString::number(vmin + rand()% (vmax - vmin))+"\r\n"; //CONCATENTE

         qDebug() << str;
         qDebug() << socket->write(str.toStdString().c_str())
         << " bytes written";
         if(socket->waitForBytesWritten(3000)){
                 qDebug() << "wrote";
        }
         ui->tabela->append(str); //ADC NA TABELA
  }
}


//PEGAR O VALOR DO MINIMO
void MainWindow::on_barraMin_valueChanged(int value)
{
    ui->minimo->display(value);
}

//PEGAR O VALOR DO MAXIMO
void MainWindow::on_barraMax_valueChanged(int value)
{
    ui->maximo->display(value);
}

//PEGAR O VALOR DO TIMER
void MainWindow::on_barraTimer_valueChanged(int value)
{
    ui->intervalTimer->setText(QString::number(value));
}

//FUNCAO COMECAR TEMPO
void MainWindow::start_temp(){
    int timerSeg = 1000*ui->barraTimer->value();
    temporizador = startTimer(timerSeg);
    ui->status2->setText("Start");
}

//FUNCAO PARAR TEMPO
void MainWindow::stop_temp(){
    killTimer(temporizador);
    ui->status2->setText("Stop");
}

//FUNCAO CONECTAR AO SERVICDOR
void MainWindow::tcpConnect(){
  socket->connectToHost(ui->ip->text(),1234);
  if(socket->waitForConnected(3000)){
      qDebug() << "Connected";
      ui->status->setText("Conectado");
  }
  else{
    qDebug() << "Disconnected";
  }
}


