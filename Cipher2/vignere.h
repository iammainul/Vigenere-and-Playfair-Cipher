#ifndef VIGNERE_H
#define VIGNERE_H

#include <QMainWindow>

namespace Ui {
class Vignere;
}

class Vignere : public QMainWindow
{
    Q_OBJECT

public:
    explicit Vignere(QWidget *parent = 0);
    ~Vignere();

private slots:
    void on_pushButton_clicked();

    void on_Encrypt_clicked();

    void on_decrypt_clicked();

    void on_pushExit_clicked();

private:
    Ui::Vignere *ui;
};

#endif // VIGNERE_H
