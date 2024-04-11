#ifndef PINREADER_H
#define PINREADER_H

#include <QDialog>

namespace Ui {
class pinreader;
}

class pinreader : public QDialog
{
    Q_OBJECT

public:
    explicit pinreader(QWidget *parent = nullptr);
    ~pinreader();
private slots:
    void handleclick();

signals:
    void sendPinNumToMain(short);

private:
    Ui::pinreader *ui;
};

#endif // PINREADER_H
