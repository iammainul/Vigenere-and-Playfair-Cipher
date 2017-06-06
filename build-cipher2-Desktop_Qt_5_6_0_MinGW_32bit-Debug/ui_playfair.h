/********************************************************************************
** Form generated from reading UI file 'playfair.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYFAIR_H
#define UI_PLAYFAIR_H

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

class Ui_Playfair
{
public:
    QWidget *centralwidget;
    QTextEdit *PlayfairText;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *Key;
    QTextEdit *textOut;
    QLabel *label_out;
    QPushButton *pushButton_Exit;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QMenuBar *menubar;
    QMenu *menuPlayFair;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Playfair)
    {
        if (Playfair->objectName().isEmpty())
            Playfair->setObjectName(QStringLiteral("Playfair"));
        Playfair->resize(800, 600);
        Playfair->setStyleSheet(QLatin1String("background-color: rgb(113, 113, 113);\n"
"border-top-color: rgb(32, 255, 69);\n"
"border-left-color: rgb(255, 166, 23);"));
        centralwidget = new QWidget(Playfair);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        PlayfairText = new QTextEdit(centralwidget);
        PlayfairText->setObjectName(QStringLiteral("PlayfairText"));
        PlayfairText->setGeometry(QRect(160, 30, 211, 71));
        PlayfairText->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 111, 20));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color: rgb(255, 184, 84);\n"
"font: 9pt \"Lucida Sans Typewriter\";\n"
"font: 8pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 120, 47, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Lucida Sans Typewriter"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("background-color: rgb(255, 184, 84);\n"
"font: 8pt \"Lucida Sans Typewriter\";"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 180, 75, 23));
        pushButton->setFocusPolicy(Qt::StrongFocus);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(162, 162, 162);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 180, 75, 23));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(162, 162, 162);"));
        Key = new QTextEdit(centralwidget);
        Key->setObjectName(QStringLiteral("Key"));
        Key->setGeometry(QRect(160, 120, 201, 31));
        Key->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textOut = new QTextEdit(centralwidget);
        textOut->setObjectName(QStringLiteral("textOut"));
        textOut->setGeometry(QRect(130, 240, 294, 71));
        QFont font2;
        font2.setFamily(QStringLiteral("Cambria Math"));
        font2.setPointSize(10);
        textOut->setFont(font2);
        textOut->setMouseTracking(false);
        textOut->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_out = new QLabel(centralwidget);
        label_out->setObjectName(QStringLiteral("label_out"));
        label_out->setGeometry(QRect(40, 240, 61, 61));
        label_out->setStyleSheet(QStringLiteral("background-color: rgb(255, 184, 84);"));
        label_out->setFrameShape(QFrame::StyledPanel);
        label_out->setFrameShadow(QFrame::Raised);
        label_out->setTextFormat(Qt::RichText);
        pushButton_Exit = new QPushButton(centralwidget);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(150, 350, 75, 23));
        pushButton_Exit->setStyleSheet(QStringLiteral("background-color: rgb(162, 162, 162);"));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-10, 210, 951, 16));
        line->setStyleSheet(QStringLiteral("background-color: rgb(211, 230, 0);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 330, 851, 16));
        line_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(-10, 0, 881, 16));
        line_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 85, 127);"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        Playfair->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Playfair);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuPlayFair = new QMenu(menubar);
        menuPlayFair->setObjectName(QStringLiteral("menuPlayFair"));
        Playfair->setMenuBar(menubar);
        statusbar = new QStatusBar(Playfair);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Playfair->setStatusBar(statusbar);

        menubar->addAction(menuPlayFair->menuAction());

        retranslateUi(Playfair);

        QMetaObject::connectSlotsByName(Playfair);
    } // setupUi

    void retranslateUi(QMainWindow *Playfair)
    {
        Playfair->setWindowTitle(QApplication::translate("Playfair", "MainWindow", 0));
        label->setText(QApplication::translate("Playfair", "PlainText/CipherText", 0));
        label_2->setText(QApplication::translate("Playfair", "Key", 0));
        pushButton->setText(QApplication::translate("Playfair", "Encrypt", 0));
        pushButton_2->setText(QApplication::translate("Playfair", "Decrypt", 0));
        label_out->setText(QApplication::translate("Playfair", "   Output", 0));
        pushButton_Exit->setText(QApplication::translate("Playfair", "Exit", 0));
        menuPlayFair->setTitle(QApplication::translate("Playfair", "PlayFair", 0));
    } // retranslateUi

};

namespace Ui {
    class Playfair: public Ui_Playfair {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYFAIR_H
