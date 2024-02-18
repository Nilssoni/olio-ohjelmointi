#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->N0, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N1, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N2, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N3, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N4, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N5, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N6, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N7, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N8, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N9, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);

    connect(ui->add, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);

    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::numberClickedHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button) return;
    QString name = button->objectName();
    qDebug() << "Button name: " << name;
    QString num = button->text();

    if (state == 1){
        number1 += num;
        ui->Num1->setText(number1);
    }
    else if(state == 2){
        number2 += num;
        ui->Num2->setText(number2);
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    if(state == 2){
        float num1 = number1.toFloat();
        float num2 = number2.toFloat();
        float result = 0.0;
        switch (operand) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if(num2 != 0){
                result = num1 / num2;
            }
            else {
                qDebug() << "Error";
            }
            break;
        default:
            qDebug() << "Error";
            break;
        }
        qDebug()<<"number 1 = "<<number1<<" and number 2 = "<<number2;
        ui->Result->setText(QString::number(result));
    } else {
        resetLineEdits();
        number1.clear();
        number2.clear();
        state = 1;
    }


}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    if (!clickedButton) return;
    QString name = clickedButton->text();
    qDebug() << "Operand button: " << name;
    if(name == "+"){
        operand = 1;
    }
    else if (name == "-"){
        operand = 2;
    }
    else if (name == "*"){
        operand = 3;
    }
    else if (name == "/"){
        operand = 4;
    }
    state = 2;
    ui->Num2->setFocus();
}

void MainWindow::resetLineEdits()
{
    ui->Num1->clear();
    ui->Num2->clear();
    ui->Result->clear();
}


void MainWindow::on_N1_clicked()
{

}


void MainWindow::on_N2_clicked()
{

}


void MainWindow::on_N3_clicked()
{

}


void MainWindow::on_N4_clicked()
{

}


void MainWindow::on_N5_clicked()
{

}


void MainWindow::on_N6_clicked()
{

}


void MainWindow::on_N7_clicked()
{

}


void MainWindow::on_N8_clicked()
{

}


void MainWindow::on_N9_clicked()
{

}


void MainWindow::on_N0_clicked()
{

}


void MainWindow::on_add_clicked()
{

}


void MainWindow::on_sub_clicked()
{

}


void MainWindow::on_mul_clicked()
{

}


void MainWindow::on_div_clicked()
{

}


void MainWindow::on_enter_clicked()
{
    state = 2;
}


void MainWindow::on_clear_clicked()
{
    state = 1;
}


