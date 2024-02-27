#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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
    void timeout();

private slots:

    // määritetään shakkikellossa tarvittavat napit

    void on_progressBar_valueChanged(int value);

    void on_progressBar_2_valueChanged(int value);

    void on_btn_swichPlayer1_clicked();

    void on_btn_swichPlayer2_clicked();

    void on_btn_120sec_clicked();

    void on_btn_5min_clicked();

    void on_btn_startGame_clicked();

    void on_btn_stopGame_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *pQtimer; // Timer olio
    short player1Time; // Pelaajan 1 aika
    short player2Time; // Pelaajan 2 aika
    short currentPlayer; // Tämän hetkinen pelaaja
    short gameTime; // Peliaika
    void updateProgressBar();
    void setGameInfoText(QString,short);

};
#endif // MAINWINDOW_H
