#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "firstdll.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void handleClick();
    void handleNumber(short);

private:
    Ui::MainWindow *ui;
    FirstDLL *ptr_dll;


};
#endif // MAINWINDOW_H
