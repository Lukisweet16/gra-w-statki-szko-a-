#include "board.h"
#include <iostream>
#include <string>
using  namespace std;


board::board(char playingboard[10][10][2])
{
    for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                for (int k = 0; k < 2; k++)
                {
                playingboard[i][j][k] = '~';
                this->playingboard[i][j][k] = playingboard[i][j][k];
                }
            }
        }

}
board::board(char aimingboard[10][10])
{
    for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {

                aimingboard[i][j] = '~';
                this->aimingboard[i][j] = aimingboard[i][j];
                
            }
        }

}

board::~board()
{
}



void board::ShowAimingBoard(char aimingboard[10][10])
{
    cout<<"  ";
   for (char boardheader = 'A'; boardheader <= 'J'; ++boardheader) {
        cout << boardheader << ' '; 
    }
    cout<<endl;
    for (int  i = 0; i < 10; i++)
    {
        cout<<i+1<<' ';
        for (int  j = 0; j < 10; j++)
        {
           cout << aimingboard[i][j];
           cout << ' ';
        }
        cout << endl;
    }

}
void board::ShowPlayingBoard(char playingboard[10][10][2])
{
    cout<<"  ";
    for (char boardheader = 'A'; boardheader <= 'J'; ++boardheader) {
        cout << boardheader << ' '; 
    }
    cout<<endl;
    
        

    
    for (int  i = 0; i < 10; i++)
    {
        cout<<i+1<<' ';
        for (int  j = 0; j < 10; j++)
        {
           cout << playingboard[i][j][0];
           cout << ' ';
        }
        cout << endl;
    }

}

bool board::checkIfWin(char playingfield[10][10][2])
{
    int zerosCounter=0;
     for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
               if  (playingfield[i][j][0] == 'O'){
               zerosCounter=1;
               }
               
            }
     }
     if(zerosCounter == 0){
        return true;
     }
        else 
        {
            return false;
        }

}
