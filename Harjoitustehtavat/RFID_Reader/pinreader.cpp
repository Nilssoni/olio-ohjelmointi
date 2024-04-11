#include "pinreader.h"
#include "ui_pinreader.h"

pinreader::pinreader(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pinreader)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),
            this,SLOT(handleclick()));
}

pinreader::~pinreader()
{
    delete ui;
    qDebug()<<"pinreader Tuhoutui automaattisesti";
}

void pinreader::handleclick()
{
    qDebug()<<"PIN UI sim handleclick()";
    QString number = ui->lineEdit->text();
    short pinNum = number.toShort();
    emit sendPinNumToMain(pinNum);
}
