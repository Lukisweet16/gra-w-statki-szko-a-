#ifndef BOARD_H
#define BOARD_H


class board
{
private:
    /* data */
public:
char playingfield[10][10][2];
char aimingboard[10][10];
    board(char playingfield[10][10][2]);
    board(char aimingboard[10][10]);
    ~board();
   
     void ShowPlayingBoard(char playingfield[10][10][2]);
     void ShowPlayingBoard(char playingfield[10][10]);
     bool checkIfWin(char playingfield[10][10][2]);
     void attack(char playingboard[10][10][2],char aimingboard[10][10]);

};

#endif // BOARD_H

