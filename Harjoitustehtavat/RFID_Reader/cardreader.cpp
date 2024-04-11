#include "cardreader.h"
#include "ui_cardreader.h"
#include <QDebug>

cardReader::cardReader(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cardReader)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),
            this,SLOT(handleClick()));
}

cardReader::~cardReader()
{
    delete ui;
    qDebug()<<"cardReader Tuhoutui automaattisesti";
}

void cardReader::handleClick()
{
    qDebug()<<"RFID Card Reader sim handleclick()";
    QString number = ui->lineEdit->text();
    short num = number.toShort();
    emit sendCardNumToMain(num);
}
