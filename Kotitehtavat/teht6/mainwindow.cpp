#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::on_btnCount_clicked()
{
    x++;
    QString s = QString::number(x);
    qDebug() << "Pressed the Count button";
    ui->labelResult->setText("Button pressed: " +s+ " times.");
}


void MainWindow::on_btnReset_clicked()
{
    x = 0;
    qDebug() << "Pressed the Reset button";

}
