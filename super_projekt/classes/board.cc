#include "board.h"
#include <iostream>
#include <string>
using  namespace std;


board::board(char playingfield[10][10][2])
{
    for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                for (int k = 0; k < 2; k++)
                {
                playingfield[i][j][k] = '~';
                this->playingfield[i][j][k] = playingfield[i][j][k];
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



void board::ShowPlayingBoard(char aimingboard[10][10])
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
           cout << playingboard[i][j][1];
           cout << ' ';
        }
        cout << endl;
    }

}
void board::attack(char playingboard[10][10][2],char aimingboard[10][10])

{
    int cordY,cordX;
    bool isnotdumb=0;
    while (isnotdumb==false){
         cout<<"pick the first shooting cord(1-10): "<<endl;
        cin>>cordY;
        cout<<"now the second  cord(1-10): "<<endl;
        cin>>cordX;
       if(cordX < 10 && cordX > 0 && cordY < 10  && cordY > 0)
    {
                if(playingboard[cordX-1][cordY-1][0] !='X' &&  playingboard[cordX-1][cordY-1][0] !='M' && playingboard[cordX-1][cordY-1][0] =='O'){
                playingboard[cordX-1][cordY-1][0] = 'X';
                aimingboard[cordX-1][cordY-1]='X';
                isnotdumb=true;
                cout<<"hit."<<endl;
                
                }
                else if(playingboard[cordX][cordY][0]== '~')
                {
                    cout<<"missed :)"<<endl;
                    playingboard[cordX-1][cordY-1][0] = 'M';
                aimingboard[cordX-1][cordY-1]='M';
                    isnotdumb = true;
                    
                }
                else{
                    cout<<"dumb mortal, you have already shot here "<<endl;
                }
    }
    else 
    {
        cout << "Invalid cord" << endl;

    }
};
}
bool board::checkIfWin(char playingfield[10][10][2])
{
    int zerosCounter;
     for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
               if  (playingfield[i][j][0] == 'O'){
               zerosCounter++;
               }
               
            }
     }
     if(zerosCounter>0){
        return true;
     }
        else 
        {
            return false;
        }

}
