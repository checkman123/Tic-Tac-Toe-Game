#include "maingamewindow.h"
#include "ui_maingamewindow.h"

MainGameWindow::MainGameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainGameWindow),
    gameModel(new GameModel)   //declare
{
    ui->setupUi(this);
    updateScreen();
    ui->winnerCatLabel->setVisible(false);
    ui->winnerDogLabel->setVisible(false);
}

MainGameWindow::~MainGameWindow()
{
    delete ui;
}

void MainGameWindow::on_exitPushButton_clicked()
{
    QApplication::quit();
}

void MainGameWindow::on_board00_clicked()
{
    gameModel->put(0,0);
    ui->board00->setEnabled(false);
    updateScreen();
}

void MainGameWindow::on_board01_clicked()
{
    gameModel->put(0,1);
    ui->board01->setEnabled(false);
    updateScreen();
}

void MainGameWindow::on_board02_clicked()
{
    gameModel->put(0,2);
    ui->board02->setEnabled(false);
    updateScreen();
}

void MainGameWindow::on_board10_clicked()
{
    gameModel->put(1,0);
    ui->board10->setEnabled(false);
    updateScreen();
}

void MainGameWindow::on_board11_clicked()
{
    gameModel->put(1,1);
    ui->board11->setEnabled(false);
    updateScreen();
}

void MainGameWindow::on_board12_clicked()
{
    gameModel->put(1,2);
    ui->board12->setEnabled(false);
    updateScreen();
}

void MainGameWindow::on_board20_clicked()
{
    gameModel->put(2,0);
    ui->board20->setEnabled(false);
    updateScreen();
}

void MainGameWindow::on_board21_clicked()
{
    gameModel->put(2,1);
    ui->board21->setEnabled(false);
    updateScreen();
}

void MainGameWindow::on_board22_clicked()
{
    gameModel->put(2,2);
    ui->board22->setEnabled(false);
    updateScreen();
}

void MainGameWindow::updateScreen()
{
    QString current = gameModel->getCurrentBoard();

    if(gameModel->getWhosTurn() == "O"){
        ui->statusLabel->setText("Player X Turn");
    }else{
        ui->statusLabel->setText("Player O Turn");
    }

    if(ui->board00->isEnabled() == false &&
            ui->board01->isEnabled() == false &&
            ui->board02->isEnabled() == false &&
            ui->board10->isEnabled() == false &&
            ui->board11->isEnabled() == false &&
            ui->board12->isEnabled() == false &&
            ui->board20->isEnabled() == false &&
            ui->board21->isEnabled() == false &&
            ui->board22->isEnabled() == false)
    {
        ui->statusLabel->setText("Draw!");
    }
    //if won disable the button
    if(gameModel->hasSomeoneWon() == true){
        QString winner = gameModel->whosWinner();
        ui->statusLabel->setText("Player " + winner  + " has WON!");
        ui->boardGroupBox->setEnabled(false);
        if(winner == "X"){
           ui->winnerCatLabel->setVisible(true);
        }else {
           ui->winnerDogLabel->setVisible(true);
    }

    }
    ui->board00->setText("" + current[0]);
    ui->board01->setText("" + current[1]);
    ui->board02->setText("" + current[2]);
    ui->board10->setText("" + current[3]);
    ui->board11->setText("" + current[4]);
    ui->board12->setText("" + current[5]);
    ui->board20->setText("" + current[6]);
    ui->board21->setText("" + current[7]);
    ui->board22->setText("" + current[8]);

}

void MainGameWindow::on_resetPushButton_clicked()
{
    gameModel->reset();
    //ui->boardGroupBox->setEnabled(true);    this doesnt work for all? button still disabled when I uses it
    ui->boardGroupBox->setEnabled(true);
    ui->board00->setEnabled(true);
    ui->board01->setEnabled(true);
    ui->board02->setEnabled(true);
    ui->board10->setEnabled(true);
    ui->board11->setEnabled(true);
    ui->board12->setEnabled(true);
    ui->board20->setEnabled(true);
    ui->board21->setEnabled(true);
    ui->board22->setEnabled(true);
    QString current = gameModel->getCurrentBoard();
    ui->board00->setText("" + current[0]);
    ui->board01->setText("" + current[1]);
    ui->board02->setText("" + current[2]);
    ui->board10->setText("" + current[3]);
    ui->board11->setText("" + current[4]);
    ui->board12->setText("" + current[5]);
    ui->board20->setText("" + current[6]);
    ui->board21->setText("" + current[7]);
    ui->board22->setText("" + current[8]);
    ui->statusLabel->setText("");
    ui->winnerCatLabel->setVisible(false);
    ui->winnerDogLabel->setVisible(false);
    if(gameModel->getWhosTurn() == "O"){
        ui->statusLabel->setText("Player X Turn");
    }else{
        ui->statusLabel->setText("Player O Turn");
    }
}
