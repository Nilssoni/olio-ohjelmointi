#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "secondDLL_global.h"

namespace Ui {
class Dialog;
}

class SECONDDLL_EXPORT Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

signals:
    void sendString(QString);

private slots:
    void clickHandler();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
