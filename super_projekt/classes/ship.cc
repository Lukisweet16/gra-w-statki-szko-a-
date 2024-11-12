#include "ship.h"
#include <iostream>
#include <string>

using  namespace std;

ship::ship(int cordX,int cordY)
{
    this->cordX=cordX;
    this->cordY=cordY;
    
}
ship::ship(int cordX, int cordY, int dir)
{
    this->cordX=cordX;
    this->cordY=cordY;
    this->dir=dir;
}
ship::~ship()
{
}

void ship::setShipOneMast(char playingfield[10][10])
{
int cordY,cordX;
bool isnotdumb=false;
    while (isnotdumb==false)
    {
        cout<< "place thy ships mortal (one mast )"<<endl;
        cout<<"place the first cord(1-10): "<<endl;
        cin>>cordY;
        cout<<"now the second  cord(1-10): "<<endl;
        cin>>cordX;
    
    if(cordX <= 10 && cordX >= 1 && cordY <= 10  && cordY >= 1)
    {
                if(playingfield[cordX-1][cordY-1] !='O' && playingfield[cordX-1][cordY-1] !='@'){
                    for (int i = -2; i < 1; i++)
                    {
                        for (int j = -2; j < 1; j++)
                        {
                            if ((cordX+i<0 || cordX+i>9) || (cordY+j<0 || cordY+j>9))
                            {

                            }
                            else{
                            playingfield[cordX+i][cordY+j]='@';
                            }
                        }
                        
                    }
                    
                playingfield[cordX-1][cordY-1] = 'O';
                isnotdumb=true;
                }
                else{
                    cout<<"dumb mortal, that spot is taken"<<endl;
                }
    }
    else 
    {
        cout << "Invalid cord" << endl;

    }
    }
    cout << "thanks for cooperation  mortal"<<endl;
}

void ship::setShipTwoMast(char playingfield[10][10])
{
    int cordY,cordX;
bool isnotdumb=false;
 int dir;
    while (isnotdumb==false)
    {
        cout<< "place thy ships mortal (two mast )"<<endl;
        cout<<"place the first cord(1-10): "<<endl;
        cin>>cordY;
        cout<<"now the second  cord(1-10): "<<endl;
        cin>>cordX;
       
    
    if(cordX <= 10 && cordX >= 1 && cordY <= 10  && cordY >= 1 && playingfield[cordX-1][cordY-1] !='@')
    {
                if(playingfield[cordX-1][cordY-1] !='O'){
                   
                playingfield[cordX-1][cordY-1] = 'O';
                isnotdumb=true;
                }
                else{
                    cout<<"dumb mortal, that spot is taken"<<endl;
                    continue;
                }
    }
    else 
    {
        cout << "Invalid cord" << endl;
        continue;

    break;

    }
    
         cout<< "now the direction (1-up,2-down,3-right,4-left)"<<endl;
        cin >> dir;
   switch ((dir-1))
   {
    //up
   case 0:
    if(cordX <= 10 && cordX >= 2 && cordY <= 10  && cordY >= 1 && playingfield[cordX-2][cordY-1] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
        playingfield[cordX-1][cordY-1] ='O';
        playingfield[cordX-2][cordY-1] = 'O';
          isnotdumb=true;
    }
    else
    cout<<"improper direction"<<endl;
    break;

    //down
    case 1:
    if(cordX <= 9 && cordX >= 1 && cordY <= 10  && cordY >= 1 && playingfield[cordX][cordY-1] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
                isnotdumb=true;
                playingfield[cordX-1][cordY-1] ='O';
    playingfield[cordX][cordY-1] = 'O';
    }
    else
    cout<<"improper direction"<<endl;
    break;

    //right
    case 2:

    if(cordX <= 10 && cordX >= 1 && cordY <= 10  && cordY >= 2 && playingfield[cordX-2][cordY] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
        playingfield[cordX-1][cordY-1] ='O';
        playingfield[cordX-1][cordY] = 'O';
        isnotdumb=true;
    }
    else
    cout<<"improper direction"<<endl;
    break;
    //left
    case 3:
    if(cordX <= 10 && cordX >= 1 && cordY <= 9  && cordY >= 1 && playingfield[cordX-1][cordY-2] !='O'&& playingfield[cordX-1][cordY-1] !='@')
    {
        playingfield[cordX-1][cordY-1] ='O';
        playingfield[cordX-1][cordY-2] = 'O';
        isnotdumb=true;
    }
    else
    cout<<"improper direction"<<endl;
    break;

   //not specifed imput 
   default:
   cout<<"improper direction"<<endl;
    break;
   }
    }
    cout << "thanks for cooperation  mortal"<<endl;
}
void ship::setShipThreeMast(char playingfield[10][10])
{
    int cordY,cordX;
bool isnotdumb=false;
 int dir;
    while (isnotdumb==false)
    {
        cout<< "place thy ships mortal (three mast )"<<endl;
        cout<<"place the first cord(1-10): "<<endl;
        cin>>cordY;
        cout<<"now the second  cord(1-10): "<<endl;
        cin>>cordX;
       
    
    if(cordX <= 10 && cordX >= 1 && cordY <= 10  && cordY >= 1 && playingfield[cordX-1][cordY-1] !='@')
    {
                if(playingfield[cordX-1][cordY-1] !='O'){
                cout<<"isn't taken nice"<<endl;
               
                
                }
                else{
                    cout<<"dumb mortal, that spot is taken pick another one "<<endl;
                    continue;
                }
    }
    else 
    {
        cout << "Invalid cord pick another one " << endl;
       continue;

    }
    
         cout<< "now the direction (1-up,2-down,3-right,4-left)"<<endl;
        cin >> dir;
   switch ((dir-1))
   {
    //left 
   case 0:
    if(cordX <= 10 && cordX >= 3 && cordY <= 10  && cordY >= 1 && playingfield[cordX-2][cordY-1] !='O'&& playingfield[cordX-3][cordY-1] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
        playingfield[cordX-1][cordY-1] ='O';
        playingfield[cordX-2][cordY-1] = 'O';
        playingfield[cordX-3][cordY-1] = 'O';
          isnotdumb=true;
    }
    else
    cout<<"improper direction"<<endl;
    break;

    //right
    case 1:
    if(cordX <= 8 && cordX >= 1 && cordY <= 10  && cordY >= 1 && playingfield[cordX][cordY-1] !='O'&& playingfield[cordX+1][cordY-1] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
                isnotdumb=true;
     playingfield[cordX-1][cordY-1] ='O';
    playingfield[cordX][cordY-1] = 'O';
    playingfield[cordX+1][cordY-1] ='O';
    }
    else
    cout<<"improper direction"<<endl;
    break;

    //down
    case 2:

    if(cordX <= 10 && cordX >= 1 && cordY <= 8  && cordY >= 1 && playingfield[cordX-2][cordY] !='O'&& playingfield[cordX-2][cordY+1] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
        playingfield[cordX-1][cordY-1] ='O';
        playingfield[cordX-1][cordY] = 'O';
        playingfield[cordX-1][cordY+1] ='O';
        isnotdumb=true;
    }
    else
    cout<<"improper direction"<<endl;
    break;
    //up
    case 3:
    if(cordX <= 10 && cordX >= 1 && cordY <= 10  && cordY >= 3 && playingfield[cordX-1][cordY-2] !='O'&& playingfield[cordX-1][cordY-3] !='O'&& playingfield[cordX-1][cordY-1] !='@')
    {
        playingfield[cordX-1][cordY-1] ='O';
        playingfield[cordX-1][cordY-2] = 'O';
        playingfield[cordX-1][cordY-3] = 'O';
        isnotdumb=true;
    }
    else
    cout<<"improper direction"<<endl;
    break;

   //not specifed imput 
   default:
   cout<<"improper direction,pick another one "<<endl;
    break;
   }
    }
    cout << "thanks for cooperation  mortal"<<endl;
}

void ship::setShipFourMast(char playingfield[10][10])
{
        int cordY,cordX;
bool isnotdumb=false;
 int dir;
    while (isnotdumb==false)
    {
        cout<< "place thy ships mortal (four mast )"<<endl;
        cout<<"place the first cord(1-10): "<<endl;
        cin>>cordY;
        cout<<"now the second  cord(1-10): "<<endl;
        cin>>cordX;
        
    
    if(cordX <= 10 && cordX >= 1 && cordY <= 10  && cordY >= 1 && playingfield[cordX-1][cordY-1] !='@' && playingfield[cordX-1][cordY-1] !='@')
    {
                if(playingfield[cordX-1][cordY-1] !='O'){
                
                
                }
                else{
                    cout<<"dumb mortal, that spot is taken pick another one "<<endl;
                    continue;
                    
                }
    }
    else 
    {
        cout << "Invalid cord pick another one " << endl;
        continue;
        

    }
    
         cout<< "now the direction (1-up,2-down,3-right,4-left)"<<endl;
        cin >> dir;
   switch ((dir-1))
   {
    //left 
   case 0:
    if(cordX <= 10 && cordX >= 4 && cordY <= 10  && cordY >= 1 && playingfield[cordX-2][cordY-1] !='O'&& playingfield[cordX-3][cordY-1] !='O'&& playingfield[cordX-4][cordY-1] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
        playingfield[cordX-1][cordY-1] ='O';
        playingfield[cordX-2][cordY-1] = 'O';
        playingfield[cordX-3][cordY-1] = 'O';
        playingfield[cordX-4][cordY-1] = 'O';

          isnotdumb=true;
    }
    else
    cout<<"improper direction"<<endl;
    break;

    //right
    case 1:
    if(cordX <= 7 && cordX >= 1 && cordY <= 10  && cordY >= 1 && playingfield[cordX][cordY-1] !='O'&& playingfield[cordX+1][cordY-1] !='O'&& playingfield[cordX+2][cordY-1] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
                isnotdumb=true;
                playingfield[cordX-1][cordY-1] ='O';
    playingfield[cordX][cordY-1] = 'O';
    playingfield[cordX+1][cordY-1] ='O';
    playingfield[cordX+2][cordY-1] ='O';
    }
    else
    cout<<"improper direction"<<endl;
    break;

    //down
    case 2:

    if(cordX <= 10 && cordX >= 1 && cordY <= 7  && cordY >= 1 && playingfield[cordX-1][cordY] !='O'&& playingfield[cordX-1][cordY+1] !='O'&& playingfield[cordX-1][cordY+2] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
        playingfield[cordX-1][cordY-1] ='O';
        playingfield[cordX-1][cordY] = 'O';
        playingfield[cordX-1][cordY+1] ='O';
        playingfield[cordX-1][cordY+2] ='O';

        isnotdumb=true;
    }
    else
    cout<<"improper direction"<<endl;
    break;
    //up
    case 3:
    if(cordX <= 10 && cordX >= 1 && cordY <= 10  && cordY >= 4 && playingfield[cordX-1][cordY-2] !='O'&& playingfield[cordX-1][cordY-3] !='O'&& playingfield[cordX-1][cordY-4] !='O'&& playingfield[cordX-1][cordY-1] !='@')
    {
        playingfield[cordX-1][cordY-1] ='O';
        playingfield[cordX-1][cordY-2] = 'O';
        playingfield[cordX-1][cordY-3] = 'O';
        playingfield[cordX-1][cordY-4] = 'O';
        isnotdumb=true;
    }
    else
    cout<<"improper direction"<<endl;
    break;

   //not specifed imput 
   default:
   cout<<"improper direction,pick another one "<<endl;
    break;
   }
    }
    cout << "thanks for cooperation  mortal"<<endl;
}
