#include "form2.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btnOpenForm2->setDisabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::on_btnTest_clicked()
{
    x++;
    QString s = QString::number(x);
    qDebug() << "Pressed the button";
    ui->labelResult->setText("Button pressed: " +s+ " times.");
}


void MainWindow::on_btnSave_clicked()
{
    fname = ui->textFname->text();
    lname = ui->textLname->text();
    ui->labelMessage->setText("Terve "+fname+" "+lname);
    ui->btnOpenForm2->setDisabled(false);
}


void MainWindow::on_btnOpenForm2_clicked()
{
    qDebug() << "btnOpenForm2 klikattu";
    // QString fname = ui->textFname->text();
    Form2 *objectForm2 = new Form2(this);
    objectForm2->setFname(fname);
    objectForm2->setLname(lname);
    // objectForm2->open(); //Mainwindow ei voi kirjoittaa, jos Form2 auki
    objectForm2->show(); //Mainwindow voi kirjoittaa, vaikka Form2 auki
    // ui->btnOpenForm2->setDisabled(true); // disabloidaan btnOpenForm2
}

