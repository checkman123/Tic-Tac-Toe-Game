#ifndef GAMEMODEL_H
#define GAMEMODEL_H

#include <QObject>
#include "ui_maingamewindow.h"

class GameModel
{
public:
    GameModel();

    void reset();
    void put(int row, int col);
    QString getCurrentBoard(); //Check the status of the board
    QString getWhosTurn(); //Check X or O turn
    bool hasSomeoneWon(); //return if somebody has won
    QString whosWinner(); //return X or O if there's any winner. Return anything if there is no winner yet.

    bool firstTurn = true;
    int player = 0;
    QString playerTurn;
    int position = 0;
    QString theBoard = "---------";

};

#endif // GAMEMODEL_H
