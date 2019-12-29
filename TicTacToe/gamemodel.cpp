#include "gamemodel.h"
#include "ui_maingamewindow.h"

GameModel::GameModel()
{

}

//Reset the whole game
void GameModel::reset()
{
    firstTurn = true;
    player = 0;
    position = 0;
    theBoard = "---------";
}

//put X or O into the board
void GameModel::put(int row, int col)
{
    position = (row * 3) + col;
}

//Check the status of the board
QString GameModel::getCurrentBoard()
{
    if(player == 0){
        playerTurn = "X";
    }else {
        playerTurn = "O";
    }
    if(firstTurn == false){
        return theBoard.replace(position,1,playerTurn);
    }
    firstTurn = false;
    return theBoard;

}

//Check X or O turn
QString GameModel::getWhosTurn()
{
        if(player == 0){
            player++;
            return "X";
        }else{
            player--;
            return "O";
        }
}

bool GameModel::hasSomeoneWon()
{
    //036
    if(theBoard.at(0) == "X"){
        if(theBoard.at(3) == "X"){
            if(theBoard.at(6) == "X")
                return true;
        }
    }else if(theBoard.at(0) == "O"){
        if(theBoard.at(3) == "O"){
            if(theBoard.at(6) == "O")
                return true;
        }
    }
    //048
    if(theBoard.at(0) == "X"){
        if(theBoard.at(4) == "X"){
            if(theBoard.at(8) == "X")
                return true;
        }
    }
    else if(theBoard.at(0) == "O"){
            if(theBoard.at(4) == "O"){
                if(theBoard.at(8) == "O")
                return true;
        }
    }
    //012
    if(theBoard.at(0) == "X"){
        if(theBoard.at(1) == "X"){
            if(theBoard.at(2) == "X")
                return true;
        }
    }else if(theBoard.at(0) == "O"){
            if(theBoard.at(1) == "O"){
                if(theBoard.at(2) == "O")
                return true;
        }
    }
    //246
    if(theBoard.at(2) == "X"){
        if(theBoard.at(4) == "X"){
            if(theBoard.at(6) == "X")
                return true;
        }
    }else if(theBoard.at(2) == "O"){
            if(theBoard.at(4) == "O"){
                if(theBoard.at(6) == "O")
                return true;
        }
    }
    //258
    if(theBoard.at(2) == "X"){
        if(theBoard.at(5) == "X"){
            if(theBoard.at(8) == "X")
                return true;
        }
    }else if(theBoard.at(2) == "O"){
            if(theBoard.at(5) == "O"){
                if(theBoard.at(8) == "O")
                return true;
        }
    }
    //678
    if(theBoard.at(6) == "X"){
        if(theBoard.at(7) == "X"){
            if(theBoard.at(8) == "X")
                return true;
        }
    }else if(theBoard.at(6) == "O"){
            if(theBoard.at(7) == "O"){
                if(theBoard.at(8) == "O")
                return true;
        }
    }
    //345
    if(theBoard.at(3) == "X"){
        if(theBoard.at(4) == "X"){
            if(theBoard.at(5) == "X")
                return true;
        }
    }else if(theBoard.at(3) == "O"){
            if(theBoard.at(4) == "O"){
                if(theBoard.at(5) == "O")
                return true;
        }
    }
    //147
    if(theBoard.at(1) == "X"){
        if(theBoard.at(4) == "X"){
            if(theBoard.at(7) == "X")
                return true;
        }
    }else if(theBoard.at(1) == "O"){
            if(theBoard.at(4) == "O"){
                if(theBoard.at(7) == "O")
                return true;
        }
    }
    return false;
}

//return X or O if there's any winner. Return anything if there is no winner yet.
QString GameModel::whosWinner()
{
        if(player == 0){
            return "O";
        }else {
            return "X";
        }
}
