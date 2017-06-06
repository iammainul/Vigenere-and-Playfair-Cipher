/********************************************************************************
** Form generated from reading UI file 'vignere.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIGNERE_H
#define UI_VIGNERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vignere
{
public:
    QWidget *centralwidget;
    QTextEdit *textMessage;
    QLabel *label;
    QLabel *key;
    QPushButton *Encrypt;
    QPushButton *decrypt;
    QTextEdit *textOut;
    QTextEdit *textKey;
    QLabel *label_out;
    QPushButton *pushExit;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QMenuBar *menubar;
    QMenu *menuVignere;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Vignere)
    {
        if (Vignere->objectName().isEmpty())
            Vignere->setObjectName(QStringLiteral("Vignere"));
        Vignere->resize(800, 600);
        Vignere->setStyleSheet(QLatin1String("border-color: rgb(0, 0, 0);\n"
"border-top-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        centralwidget = new QWidget(Vignere);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textMessage = new QTextEdit(centralwidget);
        textMessage->setObjectName(QStringLiteral("textMessage"));
        textMessage->setGeometry(QRect(150, 40, 201, 71));
        textMessage->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 111, 21));
        label->setStyleSheet(QLatin1String("background-color: rgb(149, 149, 149);\n"
"border-color: rgb(4, 4, 4);\n"
"font: 8pt \"Franklin Gothic Book\";"));
        key = new QLabel(centralwidget);
        key->setObjectName(QStringLiteral("key"));
        key->setGeometry(QRect(76, 130, 51, 21));
        key->setStyleSheet(QLatin1String("background-color: rgb(149, 149, 149);\n"
"border-color: rgb(4, 4, 4);\n"
"font: 8pt \"Franklin Gothic Book\";"));
        Encrypt = new QPushButton(centralwidget);
        Encrypt->setObjectName(QStringLiteral("Encrypt"));
        Encrypt->setGeometry(QRect(90, 200, 75, 23));
        Encrypt->setStyleSheet(QStringLiteral("background-color: rgb(171, 171, 171);"));
        decrypt = new QPushButton(centralwidget);
        decrypt->setObjectName(QStringLiteral("decrypt"));
        decrypt->setGeometry(QRect(210, 200, 75, 23));
        decrypt->setStyleSheet(QStringLiteral("background-color: rgb(171, 171, 171);"));
        textOut = new QTextEdit(centralwidget);
        textOut->setObjectName(QStringLiteral("textOut"));
        textOut->setGeometry(QRect(150, 240, 201, 71));
        textOut->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textKey = new QTextEdit(centralwidget);
        textKey->setObjectName(QStringLiteral("textKey"));
        textKey->setGeometry(QRect(150, 130, 201, 31));
        textKey->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_out = new QLabel(centralwidget);
        label_out->setObjectName(QStringLiteral("label_out"));
        label_out->setGeometry(QRect(60, 240, 61, 71));
        label_out->setStyleSheet(QLatin1String("background-color: rgb(149, 149, 149);\n"
"border-color: rgb(4, 4, 4);\n"
"font: 8pt \"Franklin Gothic Book\";\n"
""));
        pushExit = new QPushButton(centralwidget);
        pushExit->setObjectName(QStringLiteral("pushExit"));
        pushExit->setGeometry(QRect(150, 340, 75, 23));
        pushExit->setStyleSheet(QStringLiteral("background-color: rgb(171, 171, 171);"));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-3, 180, 801, 16));
        line->setStyleSheet(QStringLiteral("background-color: rgb(199, 0, 0);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(-3, 320, 801, 16));
        line_2->setStyleSheet(QStringLiteral("background-color: rgb(66, 214, 255);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 10, 811, 16));
        line_3->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0) ;"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        Vignere->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Vignere);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuVignere = new QMenu(menubar);
        menuVignere->setObjectName(QStringLiteral("menuVignere"));
        Vignere->setMenuBar(menubar);
        statusbar = new QStatusBar(Vignere);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Vignere->setStatusBar(statusbar);

        menubar->addAction(menuVignere->menuAction());

        retranslateUi(Vignere);

        QMetaObject::connectSlotsByName(Vignere);
    } // setupUi

    void retranslateUi(QMainWindow *Vignere)
    {
        Vignere->setWindowTitle(QApplication::translate("Vignere", "MainWindow", 0));
        label->setText(QApplication::translate("Vignere", "PlainText/CipherText", 0));
        key->setText(QApplication::translate("Vignere", "Key", 0));
        Encrypt->setText(QApplication::translate("Vignere", "Encrypt", 0));
        decrypt->setText(QApplication::translate("Vignere", "Decrypt", 0));
        label_out->setText(QApplication::translate("Vignere", "Output", 0));
        pushExit->setText(QApplication::translate("Vignere", "Exit", 0));
        menuVignere->setTitle(QApplication::translate("Vignere", "Vigenere ", 0));
    } // retranslateUi

};

namespace Ui {
    class Vignere: public Ui_Vignere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIGNERE_H
