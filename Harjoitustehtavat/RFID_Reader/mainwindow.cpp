#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btn1,SIGNAL(clicked(bool)),
            this,SLOT(handleInsertCardClick()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleInsertCardClick()
{
    qDebug()<<"handleInsertCardClick funktiossa";

    pinReaderPtr = new pinreader(this);

    connect(pinReaderPtr,SIGNAL(sendPinNumToMain(short)),
            this,SLOT(handlePinNumberRead(short)));

    pinReaderPtr->open();

    readerPtr = new cardReader(this);

    connect(readerPtr,SIGNAL(sendCardNumToMain(short)),
            this,SLOT(handleCardNumberRead(short)));

    readerPtr->open();


}

void MainWindow::handleCardNumberRead(short num)
{
    qDebug()<<"MainWindow handleCardNumberRead funktiossa";
    qDebug()<<"numero on = "<<num;
    cardNumber = num;
    ui->CardNumber->setText(QString::number(num));
    delete readerPtr;
}

void MainWindow::handlePinNumberRead(short pinNum)
{
    qDebug()<<"MainWindow handlePinNumberRead funktiossa";
    qDebug()<<"numero on = "<<pinNum;
    pinNumber = pinNum;
    ui->PINnumber->setText(QString::number(pinNum));
    delete pinReaderPtr;
}
