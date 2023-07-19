/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *ip;
    QTextBrowser *tabela;
    QPushButton *connect;
    QPushButton *disconnect;
    QLabel *label;
    QSlider *barraMin;
    QLCDNumber *minimo;
    QLabel *label_2;
    QSlider *barraMax;
    QLCDNumber *maximo;
    QLabel *label_3;
    QSlider *barraTimer;
    QLabel *intervalTimer;
    QPushButton *start;
    QPushButton *stop;
    QLabel *status2;
    QLabel *status;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(537, 344);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 521, 271));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ip = new QLineEdit(layoutWidget);
        ip->setObjectName("ip");

        gridLayout->addWidget(ip, 0, 0, 1, 5);

        tabela = new QTextBrowser(layoutWidget);
        tabela->setObjectName("tabela");

        gridLayout->addWidget(tabela, 0, 5, 8, 1);

        connect = new QPushButton(layoutWidget);
        connect->setObjectName("connect");

        gridLayout->addWidget(connect, 1, 0, 1, 2);

        disconnect = new QPushButton(layoutWidget);
        disconnect->setObjectName("disconnect");

        gridLayout->addWidget(disconnect, 1, 2, 1, 3);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 3, 1, 1);

        barraMin = new QSlider(layoutWidget);
        barraMin->setObjectName("barraMin");
        barraMin->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(barraMin, 3, 0, 1, 3);

        minimo = new QLCDNumber(layoutWidget);
        minimo->setObjectName("minimo");
        minimo->setFrameShape(QFrame::Box);
        minimo->setFrameShadow(QFrame::Plain);
        minimo->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(minimo, 3, 3, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 4, 3, 1, 1);

        barraMax = new QSlider(layoutWidget);
        barraMax->setObjectName("barraMax");
        barraMax->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(barraMax, 5, 0, 1, 3);

        maximo = new QLCDNumber(layoutWidget);
        maximo->setObjectName("maximo");
        maximo->setFrameShadow(QFrame::Plain);
        maximo->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(maximo, 5, 3, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        barraTimer = new QSlider(layoutWidget);
        barraTimer->setObjectName("barraTimer");
        barraTimer->setMinimum(1);
        barraTimer->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(barraTimer, 6, 1, 1, 3);

        intervalTimer = new QLabel(layoutWidget);
        intervalTimer->setObjectName("intervalTimer");

        gridLayout->addWidget(intervalTimer, 6, 4, 1, 1);

        start = new QPushButton(layoutWidget);
        start->setObjectName("start");

        gridLayout->addWidget(start, 7, 0, 1, 2);

        stop = new QPushButton(layoutWidget);
        stop->setObjectName("stop");

        gridLayout->addWidget(stop, 7, 2, 1, 3);

        status2 = new QLabel(layoutWidget);
        status2->setObjectName("status2");

        gridLayout->addWidget(status2, 8, 5, 1, 1);

        status = new QLabel(layoutWidget);
        status->setObjectName("status");

        gridLayout->addWidget(status, 8, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 537, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ip->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        intervalTimer->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        status2->setText(QString());
        status->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
