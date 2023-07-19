#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(intervalT);
    socket = new QTcpSocket(this);
    tcpConnect();

    //EVENTO DE CLICAR NO BOTAO DE PEGAR OS DADOS
    connect(ui->startButton,
          SIGNAL(clicked()),
          this,
          SLOT(getData()));

   //EVENTO DE CLICAR NO BOTAO DE PARAR O TEMPO
    connect(ui->stopButton,
          SIGNAL(clicked()),
          this,
          SLOT(stopTimer()));

    //EVENTO DE CLICAR PARA CONECTAR O TCP
    connect(ui->connectButton,
          SIGNAL(clicked()),
          SLOT(tcpConnect()));

    //EVENTO DE CLICAR PARA DESCONECTAR O TCP
    connect(ui->disconnectButton,
          SIGNAL(clicked()),
          SLOT(tcpDisconnect()));

    //EVENTO DE PEGAR O VALOR DO SLIDER
    connect(ui->horizontalSlider_Timing,
          SIGNAL(valueChanged(int)),
          ui->intervalTimer,
          SLOT(setNum(int)));

    //EVENTO DE UPDATE DE IP
    connect(ui->updateButton,
          SIGNAL(clicked()),
          this,
          SLOT(updateIp()));

    //EVENTO DE CRIAR VARIAVEL DE INTERVALO DE TEMPO
    connect(ui->horizontalSlider_Timing,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(valorInterv(int))); 

    //EVENTO DE INICIAR O INTERVALO
    connect(timer,
          SIGNAL(timeout()),
          this,
          SLOT(timerEvent()));

    //EVENTO SE CLICAR NO START
    connect(ui->startButton,
            SIGNAL(clicked()),
            this,
            SLOT(startButton()));

    //EVENTO SE ALTERAR O TIMER
    connect(timer,
            SIGNAL(timeout()),
            this,
            SLOT(startButton()));
}


//DESTRUTOR
MainWindow::~MainWindow()
{
    delete socket;
    delete ui;
}

void MainWindow::timerEvent(){
    getData();
}

//FUNCAO CONECTAR NO SERVIDOR
void MainWindow::tcpConnect(){
    socket->connectToHost(ui->ipServer->text(),1234);

    if(socket->waitForConnected(3000)){
      qDebug() << "Connected";
      statusBar()->showMessage("Connected");
    }
    else{
      qDebug() << "Disconnected";
      statusBar()->showMessage("Disconnected");
    }
}

//FUNCAO DESCONECTAR DO SERVIDOR
void MainWindow::tcpDisconnect(){
    socket->disconnectFromHost();
    statusBar()->showMessage("Disconnected");
}



//FUNCAO DE PEGAR OS DADOS
void MainWindow::getData(){
    timer->start();
    QString str;
    QByteArray array;
    QStringList list;
    qint64 thetime;

    qDebug() << "to get data...";
    QHostAddress ipAddress = socket->peerAddress();
    QString ipString = ipAddress.toString();

    if(ipList.contains(ipString)){

    }else{

      ipList.append(ipString);

    }
    if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
        QStringList teste;
        teste << "get" << ipString << "5";
        QString command = teste.join(' ');
        socket->write(command.toUtf8());
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");

        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;
        }
        value = list.at(1).toInt();
        qDebug() << value << "\n";

      }
    }
    }
}


//FUNCAO DE ATUALIZAR O IP
void MainWindow::updateIp(){
    ui->listMaquinas->clear();
    ui->listMaquinas->addItems(ipList);
}

//FUNCAO DE PARAR O TEMPO
void MainWindow::stopTimer(){
    qDebug() << "reading...";
    timer->stop();
}

//FUNCAO DE PEGAR O VALOR DO INTERVALO DO TIMER
void MainWindow::intervalTimer(int TimerInt){
    intervalT = TimerInt*1000;
    timer->setInterval(intervalT);
}

//FUNCAO DE ADICIONAR VALOR NO WIDGET
void MainWindow::startButton(){
    ui->widget->setValor(value);
}


