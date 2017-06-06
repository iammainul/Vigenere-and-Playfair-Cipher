#ifndef PLAYFAIR_H
#define PLAYFAIR_H

#include <QMainWindow>

namespace Ui {
class Playfair;
}

class Playfair : public QMainWindow
{
    Q_OBJECT

public:
    explicit Playfair(QWidget *parent = 0);
    ~Playfair();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_Exit_clicked();

private:
    Ui::Playfair *ui;
};

#endif // PLAYFAIR_H
