#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color : darkcyan");
    ui->pushButton->setStyleSheet("background-color : #ff9e66");
    ui->pushButton_2->setStyleSheet("background-color: #aaff00");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    play =new Playfair(this);
    play->showNormal();
}

void MainWindow::on_pushButton_2_clicked()
{
    vig =new Vignere(this);
    vig->showNormal();
}
