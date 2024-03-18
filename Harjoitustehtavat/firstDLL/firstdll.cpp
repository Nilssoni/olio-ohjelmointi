#include "firstdll.h"

FirstDLL::FirstDLL(QObject * parent):QObject(parent)
{
    qDebug() << "DLL Created!";
}

FirstDLL::~FirstDLL()
{
    qDebug() << "DLL Destroyed!";
}

short FirstDLL::getAndGenerateNumber()
{
    short num = gen.generate();
    emit number(num);
    return num;
}
