#ifndef BOARD_H
#define BOARD_H


class board
{
private:
    /* data */
public:
char playingboard[10][10][2];
char aimingboard[10][10];
    board(char playingfield[10][10][2]);
    board(char aimingboard[10][10]);
    ~board();
   
     void ShowAimingBoard(char aimingboard[10][10]);
     void ShowPlayingBoard(char playingboard[10][10][2]);
     bool checkIfWin(char playingfield[10][10][2]);
    

};

#endif // BOARD_H

