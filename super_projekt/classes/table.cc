#include "table.h"
#include <iostream>
#include <string>
using  namespace std;

table::table(char playingfield[10][10])
{
    for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                playingfield[i][j] = '~';
                this->playingfield[i][j] = playingfield[i][j];
            }
        }

}

table::~table()
{
}



void table::showPlayingField(char playingfield[10][10])
{
    cout<<"  ";
    for (int h = 0; h < 10; h++)
    {
        cout<<h+1<<' ';
    }
    cout<<endl;
    for (int  i = 0; i < 10; i++)
    {
        cout<<i+1<<' ';
        for (int  j = 0; j < 10; j++)
        {
           cout << playingfield[i][j];
           cout << ' ';
        }
        cout << endl;
    }

}

void table::attack(char playingfield[10][10],char aimingboard[10][10])

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
                if(playingfield[cordX-1][cordY-1] !='X' &&  playingfield[cordX-1][cordY-1] !='M' && playingfield[cordX-1][cordY-1] =='O'){
                playingfield[cordX-1][cordY-1] = 'X';
                aimingboard[cordX-1][cordY-1]='X';
                isnotdumb=true;
                cout<<"hit."<<endl;
                
                }
                else if(playingfield[cordX-1][cordY-1] !='X' &&  playingfield[cordX-1][cordY-1] !='M')
                {
                    cout<<"missed :)"<<endl;
                    playingfield[cordX-1][cordY-1] = 'M';
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
bool table::checkIfWin(char playingfield[10][10])
{
    int zerosCounter;
     for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
               if  (playingfield[i][j] == 'O'){
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
