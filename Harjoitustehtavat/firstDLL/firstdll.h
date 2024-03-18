#ifndef FIRSTDLL_H
#define FIRSTDLL_H

#include "firstDLL_global.h"
#include <QDebug>
#include <QObject>
#include <QRandomGenerator>

class FIRSTDLL_EXPORT FirstDLL:public QObject
{

    Q_OBJECT
public:
    FirstDLL(QObject * parent);
    ~FirstDLL();
    short getAndGenerateNumber();

signals:
    void number(short);

private:
    QRandomGenerator gen;

};

#endif // FIRSTDLL_H
