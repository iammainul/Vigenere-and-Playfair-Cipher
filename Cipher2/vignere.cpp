#include "vignere.h"
#include "ui_vignere.h"
#include <QtAlgorithms>
#include <algorithm>
#include <string>
#include <qstring.h>
#include<sstream>
using namespace std;

QString stripper(QString &str);
Vignere::Vignere(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Vignere)
{
    ui->setupUi(this);

    ui->label_out->setAlignment(Qt::AlignCenter);
    ui->label_out->setWordWrap(true);
    ui->key->setAlignment(Qt::AlignCenter);
    ui->label->setAlignment(Qt::AlignCenter);
}

Vignere::~Vignere()
{
    delete ui;
}
string text=" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", output;


void Vignere::on_Encrypt_clicked()
{
    string outputter;
    QString plainText=ui->textMessage->toPlainText();
    string plaintext=plainText.toStdString();
    QString keye = ui->textKey->toPlainText();
    string key=keye.toStdString();
    for(int i=0;i<plaintext.length();i++)
            {
               int foundplain = text.find(plaintext.at(i));
               int j = i%key.length();
               int foundkey = text.find(key.at(j));
               outputter.push_back(text.at((foundplain+foundkey)%95));
            }
    QString oute = QString::fromStdString(outputter);
    ui->label_out->setText("Encrypted \n text");
    ui->textOut->setTextColor("green");
    ui->textOut->setTextBackgroundColor("white");
    ui->textOut->clear();
    ui->textOut->setText(oute);


}
/*Stripping all non-alpha characters*/

void Vignere::on_decrypt_clicked()
{
    QString ciphertex=ui->textMessage->toPlainText();
    string ciphertext= ciphertex.toStdString();
    QString keye = ui->textKey->toPlainText();
    string key1 = keye.toStdString();
    for(int i=0;i<ciphertext.length();i++)
                {
                   int foundplain = text.find(ciphertext.at(i));
                   int j = i%key1.length();
                   int foundkey = text.find(key1.at(j));
                   output.push_back(text.at(((foundplain-foundkey)+95)%95));
                }
    QString out = QString::fromStdString(output);
    ui->label_out->setText("Decrypted \n Text");
    ui->textOut->setTextBackgroundColor("white");
    ui->textOut->setTextColor("green");
    ui->textOut->clear();
    ui->textOut->setText(out);
}

void Vignere::on_pushExit_clicked()
{
    Vignere::close();
    QMainWindow::close();
}
