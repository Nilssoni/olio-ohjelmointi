#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currentPlayer = 1;
    pQtimer = new QTimer(this);
    //yhdistetään timeri käyttöön
    connect(pQtimer, &QTimer::timeout, this, &MainWindow::timeout);
    //yhdistetään progressBar:it, joista näkyy jäljellä oleva aika
    connect(ui->progressBar, &QProgressBar::valueChanged, this, &MainWindow::on_progressBar_valueChanged);
    connect(ui->progressBar_2, &QProgressBar::valueChanged, this, &MainWindow::on_progressBar_2_valueChanged);
    setGameInfoText("Select palytime and press start to play", 20); //tämä teksti näkyy ruudussa heti kun sovellus aukeaa, antaa ohjeet
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQtimer;
    pQtimer = nullptr;
}

void MainWindow::timeout()
{
    //Kysytään onko pelaaja 1
    if(currentPlayer == 1){
        if(player1Time > 0){
            player1Time--;
        } //Pelaajan ollessa 1 tämän aika vähenee kunnes se on 0
        else{
            currentPlayer=2;
            setGameInfoText("PLAYER 2 WON!!", 20);
            //Jos aika pääsee ensimmäisellä pelaajalla kulumaan loppuun niin vuoro loppuu ja pelaaja 2 voittaa
        }
    }
    //Jos ei ole pelaaja 1
    else if(currentPlayer==2){
        if(player2Time > 0){
            player2Time--;
        }
        else{
            setGameInfoText("PLAYER 1 WON!!", 20);
        }
    }
    updateProgressBar();
}

void MainWindow::updateProgressBar()
{
    int player1remaining, player2remaining; //näillä saa merkittyä pelaajien kulunutta aikaa
        //täällä tehdään pelajan ajan ja kokonaisajan jako ja muutetaan se prosentiksi, jotta saadaan jäljellä olevat prosentit esitetyä kätevästi
    player1remaining = static_cast<int>((static_cast<float>(player1Time)/gameTime)*100); //tässä int:ksi määritellyt p1r 'muutetaan' float arvoksi,
    player2remaining = static_cast<int>((static_cast<float>(player2Time)/gameTime)*100); //static_cast mahdollistaa int ja float parametrien keskustelun

    //Tässä progressBarin arvo saadaan pysymään siinä, mihin se on pysäytetty, siitä saadaan jatketua kun toinen pelaajista päättää oman vuoronsa.
    ui->progressBar->setValue(player1remaining);
    ui->progressBar_2->setValue(player2remaining);

}

void MainWindow::setGameInfoText(QString text, short fontsize)
{
    QString labelText = text; //alustetaan tekstille paikka
    ui->label->setText(labelText); //asetetaan teksti
    QFont font = ui->label->font(); //näillä alustetaan fontti toiminto qt:ssa. eli qFont:ille annetaan nimi joka viedään labelille ja siitä fontiksi
    font.setPointSize(static_cast<int>(fontsize)); //fontin tulee olla int, joten static_cast:illa short saadaan taas toimiman
    ui->label->setFont(font); //tässä asetetaan fontti

}

void MainWindow::on_progressBar_valueChanged(int value)
{

}


void MainWindow::on_progressBar_2_valueChanged(int value)
{

}


void MainWindow::on_btn_swichPlayer1_clicked()
{
    currentPlayer = 2; //Luovutetaan vuoro pelaajalle 2.
    updateProgressBar(); //tämä kutsuu päivitysfunktiota, jotta pelaajan aika päivittyy aina heti nappia painettua
    ui->btn_swichPlayer2->setEnabled(true); // enabloidaan btn_swichPlayer2 kun pelaaja 1 päättää vuoronsa
    ui->btn_swichPlayer1->setEnabled(false); // disabloidaan btn_swichPlayer1 kun pelaaja 1 päättää vuoronsa

    setGameInfoText("Player 2 turn", 20);
    qDebug()<<"swichPlayer1 pressed";

}


void MainWindow::on_btn_swichPlayer2_clicked()
{
    currentPlayer = 1; //Luovutetaan vuoro pelaajalle 1.
    updateProgressBar();
    ui->btn_swichPlayer2->setEnabled(false); // disabloidaan btn_swichPlayer2 kun pelaaja 2 päättää vuoronsa
    ui->btn_swichPlayer1->setEnabled(true); // enabloidaan btn_swichPlayer1 kun pelaaja 2 päättää vuoronsa

    setGameInfoText("Player 1 turn", 20);
    qDebug()<<"swichPlayer2 pressed";

}


void MainWindow::on_btn_120sec_clicked()
{
    gameTime=120; //tässä annetaan ensimmäinen aika pelille ja se toimii määrittelynä playerTime:ille
    player1Time=gameTime;
    player2Time=gameTime;
    qDebug() << "120 Seconds button pressed";

    setGameInfoText("Ready to play", 20);
}


void MainWindow::on_btn_5min_clicked()
{
    gameTime=300;
    player1Time=gameTime;
    player2Time=gameTime;
    qDebug() << "5 Minutes button pressed";

    setGameInfoText("Ready to play", 20);
}


void MainWindow::on_btn_startGame_clicked()
{
    ui->btn_startGame->setEnabled(false);
    ui->btn_120sec->setEnabled(false);
    ui->btn_5min->setEnabled(false);
    qDebug()<<"Start game";
    setGameInfoText("Game ongoing", 20);

    //merkitsevät ajan alkamista
    pQtimer->start(1000);
    updateProgressBar();

}


void MainWindow::on_btn_stopGame_clicked()
{
    pQtimer->stop(); //tässä timer lopetetaan
    setGameInfoText("New game via start button", 20);

    //näillä sadaan pelaajien aika takaisin peliaikaan, eli peli alkaa alusta
    player1Time=gameTime;
    player2Time=gameTime;

    updateProgressBar();

    //alustaa start napin takaisin käyttöön, kun stop nappia on painettu, voidaan aloittaa uusi peli
    ui->btn_startGame->setEnabled(true);
    ui->btn_120sec->setEnabled(true);
    ui->btn_5min->setEnabled(true);
    qDebug()<<"Stop pressed";
}


