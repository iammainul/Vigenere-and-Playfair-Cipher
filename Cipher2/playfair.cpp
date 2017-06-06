#include "playfair.h"
#include "ui_playfair.h"
#include<string.h>
#include<qstring.h>
#include<iostream>

char mat[5][5];
using namespace std;


void matrixFill(string str);
string stripper(string &str);
string Encrypt(string str);
string Decrypt(string str);
void matrixSearch(int &a,int &b, char c);
void spaceMaker(string &str);

Playfair::Playfair(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Playfair)
{
    ui->setupUi(this);
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label_2->setAlignment(Qt::AlignCenter);
    ui->label_out->setAlignment(Qt::AlignCenter);
    ui->label_out->setWordWrap(true);

}

Playfair::~Playfair()
{
    delete ui;
}


void Playfair::on_pushButton_clicked()
{
    QString PlainTex= ui->PlayfairText->toPlainText();
    string PlainText = PlainTex.toStdString();
    QString keye = ui->Key->toPlainText();
    string KeyPhrase = keye.toStdString();
    PlainText=stripper(PlainText);
    KeyPhrase=stripper(KeyPhrase);
    matrixFill(KeyPhrase);
    string CipherText=Encrypt(PlainText);
    spaceMaker(CipherText);
    QString out = QString::fromStdString(CipherText);

    ui->label_out->setText("Encrypted \n Text");
    ui->textOut->setTextBackgroundColor("white");
    ui->textOut->setTextColor("green");
    ui->textOut->clear();
    ui->textOut->setText(out);
}
void matrixSearch(int &ni, int &nj, char c)
{
    int i=0, j=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(mat[i][j]==c)
            {
                ni=i;
                nj=j;
            }
        }
    }
}
void spaceMaker(string &str)
{
    int i=0,p=0;
    while(i<str.length())
    {
        p=rand()%5;
        str.insert((i+p)%str.length(), " ");
        i=i+5;
    }

}
string stripper(string &str)
{
    string ReturnStr;
    int len=str.length(), i=0;
    while(i<len)
    {
        if(isalpha(str.at(i)))
        {
            ReturnStr.push_back(str.at(i));
        }
        i++;
    }
    transform(ReturnStr.begin(), ReturnStr.end(), ReturnStr.begin(), ::toupper);
    replace(ReturnStr.begin(), ReturnStr.end(), 'J', 'I');
    return ReturnStr;
}
void matrixFill(string str)
{
    int i,j;
    string alphabet="ABCDEFGHIKLMNOPQRSTUVWXYZ", temp, stor;
    temp=str+alphabet;
    for(i=0; i<temp.length(); i++)
    {
        if(stor.find(temp.at(i))==string::npos)
        {
            stor.push_back(temp.at(i));
        }
        else
        continue;
    }
   // cout<<stor<<endl;
    if(stor.length()==25)
    {
        int p=0;
        for(i=0;i<5;i++)
        {
            for (j=0;j<5;j++)
            {
                mat[i][j]=stor.at(p);
                p++;
            }
        }
    }
    else
    {
       // cout<<"Sorry"<<endl;//nonsensical code, highly unecessary
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            //cout<<mat[i][j]<<"\t";
        }
        //cout<<"\n";
    }
}
string Encrypt(string str)
{
    int i=0, p=0;
    int fi,fj,si,sj;
    string str2;
    while(i<str.length()-1)
    {
        if(str.at(i)==str.at(i+1))
        {
            //cout<<str.at(i);
            str.insert(str.begin()+(i+1), 'X');
        }
        i++;
    }
        if(str.length()%2!=0)
    {
        str.push_back('X');
    }
    //cout<<str<<endl;
    while(p<str.length())
    {
        matrixSearch(fi, fj, str.at(p));
        //cout<<"\n"<<fi<<fj<<endl;
        matrixSearch(si, sj, str.at(p+1));
        p=p+2;
            if(fi==si)
    {
        str2.push_back(mat[fi][(fj+1)%5]);
        str2.push_back(mat[si][(sj+1)%5]);
    }
    else if(fj==sj)
    {
        str2.push_back(mat[(fi+1)%5][fj]);
        str2.push_back(mat[(si+1)%5][sj]);
    }
    else
    {
        str2.push_back(mat[fi][sj]);
        str2.push_back(mat[si][fj]);
    }
    }
    return str2;
}
string Decrypt(string str)
{
    int i=0, p=0;
    int fi,fj,si,sj;
    string str2;
    int len=str.length();
    cout<<str<<endl;
    while(p<str.length())
    {
        matrixSearch(fi, fj, str.at(p));
        //cout<<"\n"<<fi<<fj<<endl;
        matrixSearch(si, sj, str.at(p+1));
        //cout<<str.at(p+1)<<endl;
        //cout<<si<<sj;
        p=p+2;
        if(fi==si)
        {
            str2.push_back(mat[fi][(fj-1+5)%5]);
            str2.push_back(mat[si][(sj-1+5)%5]);
        }
        else if(fj==sj)
        {
            str2.push_back(mat[(fi-1+5)%5][fj]);
            str2.push_back(mat[(si-1+5)%5][sj]);
        }
        else
        {
            str2.push_back(mat[fi][sj]);
            str2.push_back(mat[si][fj]);
        }
        //cout<<str2<<endl;
    }
        while(i<str2.length()-2)
    {
        if(str2.at(i)==str2.at(i+2)&&str2.at(i+1)=='X')
        {
            //cout<<str.at(i);
            str2.erase(i+1, 1);
        }
        i=i+1;
    }
        if(str2.length()%2==0&&str2.at(str2.length()-1)=='X')
    {
        str2.erase(str2.size()-1);
    }
    return str2;
}
void Playfair::on_pushButton_2_clicked()
{
    ui->textOut->setText("Please wait");
    string pt;
    QString CipherTex= ui->PlayfairText->toPlainText();
    string CipherText = CipherTex.toStdString();
    QString keye = ui->Key->toPlainText();
    string KeyPhrase = keye.toStdString();
    CipherText=stripper(CipherText);
    KeyPhrase=stripper(KeyPhrase);
    matrixFill(KeyPhrase);
    if(CipherText.length()%2==0)
      {
        pt= Decrypt(CipherText);
        QString out = QString::fromStdString(pt);
        ui->label_out->setText("Decrypted \n Text");
        ui->textOut->setTextBackgroundColor("white");
        ui->textOut->setTextColor("green");
        ui->textOut->setText(out);

       }
    else
        {
            ui->textOut->setTextBackgroundColor("red");
            ui->textOut->setTextColor("black");
            ui->textOut->setText("Enter Valid Input");
        }

}

void Playfair::on_pushButton_Exit_clicked()
{
    Playfair::close();
    QMainWindow::close();
}
