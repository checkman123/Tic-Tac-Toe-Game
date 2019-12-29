/********************************************************************************
** Form generated from reading UI file 'maingamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINGAMEWINDOW_H
#define UI_MAINGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainGameWindow
{
public:
    QWidget *centralWidget;
    QLabel *titleLabel;
    QLabel *catLabel;
    QLabel *dogLabel;
    QLabel *backgroundLabel;
    QLabel *title2Label;
    QLabel *statusLabel;
    QPushButton *exitPushButton;
    QGroupBox *boardGroupBox;
    QPushButton *board01;
    QPushButton *board02;
    QPushButton *board00;
    QPushButton *board11;
    QPushButton *board10;
    QPushButton *board12;
    QPushButton *board21;
    QPushButton *board20;
    QPushButton *board22;
    QLabel *winnerCatLabel;
    QLabel *winnerDogLabel;
    QPushButton *resetPushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainGameWindow)
    {
        if (MainGameWindow->objectName().isEmpty())
            MainGameWindow->setObjectName(QString::fromUtf8("MainGameWindow"));
        MainGameWindow->resize(497, 711);
        centralWidget = new QWidget(MainGameWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        titleLabel = new QLabel(centralWidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(150, 40, 211, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Papyrus"));
        font.setPointSize(26);
        titleLabel->setFont(font);
        catLabel = new QLabel(centralWidget);
        catLabel->setObjectName(QString::fromUtf8("catLabel"));
        catLabel->setGeometry(QRect(40, 20, 91, 91));
        catLabel->setStyleSheet(QString::fromUtf8("background-image: url(://images/smallCat.png);"));
        dogLabel = new QLabel(centralWidget);
        dogLabel->setObjectName(QString::fromUtf8("dogLabel"));
        dogLabel->setGeometry(QRect(380, 20, 91, 91));
        dogLabel->setStyleSheet(QString::fromUtf8("background-image: url(://images/smallDog.png);"));
        backgroundLabel = new QLabel(centralWidget);
        backgroundLabel->setObjectName(QString::fromUtf8("backgroundLabel"));
        backgroundLabel->setGeometry(QRect(0, 0, 501, 691));
        backgroundLabel->setStyleSheet(QString::fromUtf8("background-color:rgb(249, 235, 202);"));
        title2Label = new QLabel(centralWidget);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));
        title2Label->setGeometry(QRect(160, 80, 191, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Papyrus"));
        font1.setPointSize(14);
        title2Label->setFont(font1);
        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(50, 530, 381, 61));
        QFont font2;
        font2.setPointSize(26);
        statusLabel->setFont(font2);
        statusLabel->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(166, 129, 84);background: rgb(255, 240, 229);"));
        statusLabel->setFrameShape(QFrame::Box);
        statusLabel->setAlignment(Qt::AlignCenter);
        exitPushButton = new QPushButton(centralWidget);
        exitPushButton->setObjectName(QString::fromUtf8("exitPushButton"));
        exitPushButton->setGeometry(QRect(260, 610, 111, 51));
        QFont font3;
        font3.setPointSize(16);
        exitPushButton->setFont(font3);
        boardGroupBox = new QGroupBox(centralWidget);
        boardGroupBox->setObjectName(QString::fromUtf8("boardGroupBox"));
        boardGroupBox->setGeometry(QRect(50, 130, 381, 381));
        boardGroupBox->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"     border: 2px solid rgb(166, 129, 84); \n"
"	background: rgb(255, 240, 229);\n"
" } "));
        board01 = new QPushButton(boardGroupBox);
        board01->setObjectName(QString::fromUtf8("board01"));
        board01->setGeometry(QRect(140, 20, 101, 101));
        QFont font4;
        font4.setPointSize(22);
        font4.setBold(true);
        font4.setWeight(75);
        board01->setFont(font4);
        board01->setStyleSheet(QString::fromUtf8("color: rgb(125, 0, 188)"));
        board02 = new QPushButton(boardGroupBox);
        board02->setObjectName(QString::fromUtf8("board02"));
        board02->setGeometry(QRect(260, 20, 101, 101));
        board02->setFont(font4);
        board02->setStyleSheet(QString::fromUtf8("color: rgb(125, 0, 188)"));
        board00 = new QPushButton(boardGroupBox);
        board00->setObjectName(QString::fromUtf8("board00"));
        board00->setGeometry(QRect(20, 20, 101, 101));
        board00->setFont(font4);
        board00->setStyleSheet(QString::fromUtf8("color: rgb(125, 0, 188)"));
        board11 = new QPushButton(boardGroupBox);
        board11->setObjectName(QString::fromUtf8("board11"));
        board11->setGeometry(QRect(140, 140, 101, 101));
        board11->setFont(font4);
        board11->setStyleSheet(QString::fromUtf8("color: rgb(125, 0, 188)"));
        board10 = new QPushButton(boardGroupBox);
        board10->setObjectName(QString::fromUtf8("board10"));
        board10->setGeometry(QRect(20, 140, 101, 101));
        board10->setFont(font4);
        board10->setStyleSheet(QString::fromUtf8("color: rgb(125, 0, 188)"));
        board12 = new QPushButton(boardGroupBox);
        board12->setObjectName(QString::fromUtf8("board12"));
        board12->setGeometry(QRect(260, 140, 101, 101));
        board12->setFont(font4);
        board12->setStyleSheet(QString::fromUtf8("color: rgb(125, 0, 188)"));
        board21 = new QPushButton(boardGroupBox);
        board21->setObjectName(QString::fromUtf8("board21"));
        board21->setGeometry(QRect(140, 260, 101, 101));
        board21->setFont(font4);
        board21->setStyleSheet(QString::fromUtf8("color: rgb(125, 0, 188)"));
        board20 = new QPushButton(boardGroupBox);
        board20->setObjectName(QString::fromUtf8("board20"));
        board20->setGeometry(QRect(20, 260, 101, 101));
        board20->setFont(font4);
        board20->setStyleSheet(QString::fromUtf8("color: rgb(125, 0, 188)"));
        board22 = new QPushButton(boardGroupBox);
        board22->setObjectName(QString::fromUtf8("board22"));
        board22->setGeometry(QRect(260, 260, 101, 101));
        board22->setFont(font4);
        board22->setStyleSheet(QString::fromUtf8("color: rgb(125, 0, 188)"));
        winnerCatLabel = new QLabel(boardGroupBox);
        winnerCatLabel->setObjectName(QString::fromUtf8("winnerCatLabel"));
        winnerCatLabel->setGeometry(QRect(0, 0, 381, 381));
        winnerCatLabel->setStyleSheet(QString::fromUtf8("background-image: url(://images/cat.png)"));
        winnerDogLabel = new QLabel(boardGroupBox);
        winnerDogLabel->setObjectName(QString::fromUtf8("winnerDogLabel"));
        winnerDogLabel->setEnabled(true);
        winnerDogLabel->setGeometry(QRect(0, 0, 381, 381));
        winnerDogLabel->setStyleSheet(QString::fromUtf8("background-image: url(://images/dog.png);"));
        resetPushButton = new QPushButton(centralWidget);
        resetPushButton->setObjectName(QString::fromUtf8("resetPushButton"));
        resetPushButton->setGeometry(QRect(110, 610, 111, 51));
        resetPushButton->setFont(font3);
        MainGameWindow->setCentralWidget(centralWidget);
        backgroundLabel->raise();
        boardGroupBox->raise();
        titleLabel->raise();
        catLabel->raise();
        dogLabel->raise();
        title2Label->raise();
        statusLabel->raise();
        exitPushButton->raise();
        resetPushButton->raise();
        menuBar = new QMenuBar(MainGameWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 497, 21));
        MainGameWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainGameWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainGameWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainGameWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainGameWindow->setStatusBar(statusBar);

        retranslateUi(MainGameWindow);

        QMetaObject::connectSlotsByName(MainGameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainGameWindow)
    {
        MainGameWindow->setWindowTitle(QApplication::translate("MainGameWindow", "MainGameWindow", nullptr));
        titleLabel->setText(QApplication::translate("MainGameWindow", "Tic Tac Toe", nullptr));
        catLabel->setText(QString());
        dogLabel->setText(QString());
        backgroundLabel->setText(QString());
        title2Label->setText(QApplication::translate("MainGameWindow", "(X)Meow! vs Woof!(O)", nullptr));
        statusLabel->setText(QString());
        exitPushButton->setText(QApplication::translate("MainGameWindow", "Exit", nullptr));
        boardGroupBox->setTitle(QString());
        board01->setText(QString());
        board02->setText(QString());
        board00->setText(QString());
        board11->setText(QString());
        board10->setText(QString());
        board12->setText(QString());
        board21->setText(QString());
        board20->setText(QString());
        board22->setText(QString());
        winnerCatLabel->setText(QString());
        winnerDogLabel->setText(QString());
        resetPushButton->setText(QApplication::translate("MainGameWindow", "Reset!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainGameWindow: public Ui_MainGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINGAMEWINDOW_H
