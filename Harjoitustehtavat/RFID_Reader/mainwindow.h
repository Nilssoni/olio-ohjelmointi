#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cardreader.h"
#include "pinreader.h"

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
    void handleInsertCardClick();
    void handleCardNumberRead(short);
    void handlePinNumberRead(short);

private:
    Ui::MainWindow *ui;
    short attemptsLeft;
    short cardNumber, pinNumber;
    short correctCardNumber = 1234;
    short correctPinNumber = 4321;
    cardReader * readerPtr;
    pinreader * pinReaderPtr;

};
#endif // MAINWINDOW_H
