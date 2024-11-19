
#include "ship.h"
#include <iostream>
#include <string>
#include <cctype>



using namespace std;



ship::ship(int cordX, int cordY)
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

int ship::LettertoNumber(char X)
{
    int a;
    char uppercase =toupper(X);
     a = int(uppercase)-64;
    return a;

}
// int ship::NumbertoNumber(char X)
// {
//     int a;
    
//      a = int(X)-48;
//     return a;

// }

void ship::PutOneBlock(char playingboard[10][10][2], int cordX, int cordY)
{
    int x,y;
    x=cordX-1;
    y=cordY-1;
    playingboard[x][y][0] = 'O';
    for (int j = -1; j <= 1; j++)
    {
   for (int i = -1; i <= 1; i++)
   {
    if ((x+i>=0 && x+i<=9)&&(y+j>=0  &&y+j<=9))
    {
    playingboard[x+i][y+j][1]='@';
    }
   }
    }
                
                
}

void ship::PutTwomast(char playingboard[10][10][2], int cordX, int cordY,int dir)
{
    int x=cordX,y=cordY;
    PutOneBlock(playingboard,x,y);
    switch (dir-1)
{
case 0:

   PutOneBlock(playingboard,x,y+1);
   
    break;
case 1:


   PutOneBlock(playingboard,x,y-1);

    break;
case 2:

   PutOneBlock(playingboard,x+1,y);

    break;

case 3:

   PutOneBlock(playingboard,x-1,y);

    break;
}
}

void ship::PutThreemast(char playingboard[10][10][2], int cordX, int cordY, int dir)
{
     int x=cordX,y=cordY;
    PutOneBlock(playingboard,x,y);
    switch (dir-1)
{
case 0:

   PutOneBlock(playingboard,x,y+1);
   PutOneBlock(playingboard,x,y+2);
   
    break;
case 1:


   PutOneBlock(playingboard,x,y-1);
   PutOneBlock(playingboard,x,y-2);

    break;
case 2:

   PutOneBlock(playingboard,x+1,y);
   PutOneBlock(playingboard,x+2,y);

    break;

case 3:

   PutOneBlock(playingboard,x-1,y);
   PutOneBlock(playingboard,x-2,y);

    break;
}
}

void ship::PutFourmast(char playingboard[10][10][2], int cordX, int cordY, int dir)
{
    int x=cordX,y=cordY;
    PutOneBlock(playingboard,x,y);
    switch (dir-1)
{
case 0:

   PutOneBlock(playingboard,x,y+1);
   PutOneBlock(playingboard,x,y+2);
   PutOneBlock(playingboard,x,y+3);
   
    break;
case 1:


   PutOneBlock(playingboard,x,y-1);
   PutOneBlock(playingboard,x,y-2);
   PutOneBlock(playingboard,x,y-3);

    break;
case 2:

   PutOneBlock(playingboard,x+1,y);
   PutOneBlock(playingboard,x+2,y);
   PutOneBlock(playingboard,x+3,y);

    break;

case 3:

   PutOneBlock(playingboard,x-1,y);
   PutOneBlock(playingboard,x-2,y);
   PutOneBlock(playingboard,x-3,y);

    break;
}
}

bool ship::checkIfCanPlaceOneblock(char playingboard[10][10][2],int cordX,int cordY)
{
    int x=cordX-1 ,y=cordY-1;
if ((x <= 9 && x >= 0) && (y <= 9  && y >= 0) )  
{
    if (playingboard[x][y][1] !='@')
    {
        return true;
    } 
    else
    return false;
    
      
}
else
{
    return false;

};
}

bool ship::checkIfCanPlaceTwomast(char playingboard[10][10][2], int cordX, int cordY, int dir)
{
  int a,x=cordX,y=cordY;
    if(checkIfCanPlaceOneblock(playingboard,x,y)==true)
    {
switch (dir-1)
{
case 0:
  if (checkIfCanPlaceOneblock(playingboard,x,y+1)==true)
   a=1;
   else{
    a=0;
   }
    break;
case 1:
 if (checkIfCanPlaceOneblock(playingboard,x,y-1)==true)
   a=1;
   else{
    a=0;
   }

    break;
case 2:
 if (checkIfCanPlaceOneblock(playingboard,x+1,y)==true)
   a=1;
   else{
    a=0;
   }

    break;

case 3:
 if (checkIfCanPlaceOneblock(playingboard,x-1,y)==true)
   a=1;
   else{
    a=0;
   }

    break;

default:
cout<<"improper direction";
a=0;
    break;
}
}

else
{
a=0;
};
if(a=0)
return false;
else
return true;
}

bool ship::checkIfCanPlaceThreemast(char playingboard[10][10][2], int cordX, int cordY, int dir)
{
    
  int a,x=cordX,y=cordY;
    if(checkIfCanPlaceOneblock(playingboard,x,y)==true )
    {
switch (dir-1)
{
case 0:
  if (checkIfCanPlaceOneblock(playingboard,x,y+1)==true && checkIfCanPlaceOneblock(playingboard,x,y+2)==true)
   a=1;
   else{
    a=0;
   }
    break;
case 1:
 if (checkIfCanPlaceOneblock(playingboard,x,y-1)==true && checkIfCanPlaceOneblock(playingboard,x,y-2)==true )
   a=1;
   else{
    a=0;
   }

    break;
case 2:
 if (checkIfCanPlaceOneblock(playingboard,x+1,y)==true && checkIfCanPlaceOneblock(playingboard,x+2,y)==true)
   a=1;
   else{
    a=0;
   }

    break;

case 3:
 if (checkIfCanPlaceOneblock(playingboard,x-1,y)==true && checkIfCanPlaceOneblock(playingboard,x-2,y)==true)
   a=1;
   else{
    a=0;
   }

    break;

default:
cout<<"improper direction";
a=0;
    break;
}
}

else
{
a=0;
};
if(a=0)
return false;
else
return true;
}

bool ship::checkIfCanPlaceFourmast(char playingboard[10][10][2], int cordX, int cordY, int dir)
{
      int a,x=cordX,y=cordY;
    if(checkIfCanPlaceOneblock(playingboard,x,y)==true )
    {
switch (dir-1)
{
case 0:
  if (checkIfCanPlaceOneblock(playingboard,x,y+1)==true && checkIfCanPlaceOneblock(playingboard,x,y+2)==true && checkIfCanPlaceOneblock(playingboard,x,y+3)==true)
   a=1;
   else{
    a=0;
   }
    break;
case 1:
 if (checkIfCanPlaceOneblock(playingboard,x,y-1)==true && checkIfCanPlaceOneblock(playingboard,x,y-2)==true && checkIfCanPlaceOneblock(playingboard,x,y-3)==true)
   a=1;
   else{
    a=0;
   }

    break;
case 2:
 if (checkIfCanPlaceOneblock(playingboard,x+1,y)==true && checkIfCanPlaceOneblock(playingboard,x+2,y)==true && checkIfCanPlaceOneblock(playingboard,x+3,y)==true)
   a=1;
   else{
    a=0;
   }

    break;

case 3:
 if (checkIfCanPlaceOneblock(playingboard,x-1,y)==true && checkIfCanPlaceOneblock(playingboard,x-2,y)==true && checkIfCanPlaceOneblock(playingboard,x-3,y)==true)
   a=1;
   else{
    a=0;
   }

    break;

default:
cout<<"improper direction";
a=0;
    break;
}
}

else
{
a=0;
};
if(a=0)
return false;
else
return true;
    
}

 void ship::setShipOneMast(char playingfield[10][10][2])
{
int cordY,cordX;
char cordYLetter,cordXNumber;
bool corectPlacement=false;
    while (corectPlacement==false)
    {
        cordX,cordY=0;
        cordYLetter,cordXNumber='0';
        cout<< "place thy ships mortal (one mast )"<<endl;
        cout<<"place the first cord(A-J): "<<endl;
        cin>>cordYLetter;
        if (isalpha(cordYLetter)==false)
        {
           cout<<"please use only letters"<<endl;
           continue;
        }
        cout<<"now the second  cord(1-10): "<<endl;
        cin>>cordX;
        if((isalpha(cordX)) == true)
        {
            cout<<"please use only digits"<<endl;
            cordX=0;
            continue;
        }
        
        cordY=LettertoNumber(cordYLetter);
    
    corectPlacement=checkIfCanPlaceOneblock(playingfield,cordX,cordY);
    if(corectPlacement==false){
    cout<<"wrong cords pick another one"<<endl;
    continue;
    }
    }
        PutOneBlock(playingfield,cordX,cordY);
}

void ship::setShipTwoMast(char playingboard[10][10][2])
{
    int cordY,cordX;
    char cordYLetter,cordXNumber;
bool corectPlacament=false;
 int dir;
    while (corectPlacament==false)
    {
        cordX,cordY=0;
        cordYLetter,cordXNumber='0';
        cout<< "place thy ships mortal (one mast )"<<endl;
        cout<<"place the first cord(A-J): "<<endl;
        cin>>cordYLetter;
        if (isalpha(cordYLetter)==false)
        {
           cout<<"please use only letters"<<endl;
           continue;
        }
        cout<<"now the second  cord(1-10): "<<endl;
        cin>>cordX;
        if((isalpha(cordX)) != false)
        {
            cout<<"please use only digits"<<endl;
            cordX=0;
            continue;
        }
        
        cordY=LettertoNumber(cordYLetter);
         cout<< "now the direction (1-right,2-left,3-down,4-up)"<<endl;
        cin >> dir;
        if(!(dir ==1 || dir ==2 || dir ==3 || dir ==4))
        {
            cout<<"please use only 1,2,3,4"<<endl;
            dir=0;
            continue;
        }
       corectPlacament= checkIfCanPlaceTwomast(playingboard,cordX,cordY,dir);
    }
   
   PutTwomast(playingboard,cordX,cordY,dir);

    
    cout << "thanks for cooperation  mortal"<<endl;
}
// void ship::setShipThreeMast(char playingfield[10][10][2])
// {
//     int cordY,cordX;
// bool isnotdumb=false;
//  int dir;
//     while (isnotdumb==false)
//     {
//         cout<< "place thy ships mortal (three mast )"<<endl;
//         cout<<"place the first cord(1-10): "<<endl;
//         cin>>cordY;
//         cout<<"now the second  cord(1-10): "<<endl;
//         cin>>cordX;
       
    
//     if(cordX <= 10 && cordX >= 1 && cordY <= 10  && cordY >= 1 && playingfield[cordX-1][cordY-1] !='@')
//     {
//                 if(playingfield[cordX-1][cordY-1] !='O'){
//                 cout<<"isn't taken nice"<<endl;
               
                
//                 }
//                 else{
//                     cout<<"dumb mortal, that spot is taken pick another one "<<endl;
//                     continue;
//                 }
//     }
//     else 
//     {
//         cout << "Invalid cord pick another one " << endl;
//        continue;

//     }
    
//          cout<< "now the direction (1-up,2-down,3-right,4-left)"<<endl;
//         cin >> dir;
//    switch ((dir-1))
//    {
//     //left 
//    case 0:
//     if(cordX <= 10 && cordX >= 3 && cordY <= 10  && cordY >= 1 && playingfield[cordX-2][cordY-1] !='O'&& playingfield[cordX-3][cordY-1] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
//         playingfield[cordX-1][cordY-1] ='O';
//         playingfield[cordX-2][cordY-1] = 'O';
//         playingfield[cordX-3][cordY-1] = 'O';
//           isnotdumb=true;
//     }
//     else
//     cout<<"improper direction"<<endl;
//     break;

//     //right
//     case 1:
//     if(cordX <= 8 && cordX >= 1 && cordY <= 10  && cordY >= 1 && playingfield[cordX][cordY-1] !='O'&& playingfield[cordX+1][cordY-1] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
//                 isnotdumb=true;
//      playingfield[cordX-1][cordY-1] ='O';
//     playingfield[cordX][cordY-1] = 'O';
//     playingfield[cordX+1][cordY-1] ='O';
//     }
//     else
//     cout<<"improper direction"<<endl;
//     break;

//     //down
//     case 2:

//     if(cordX <= 10 && cordX >= 1 && cordY <= 8  && cordY >= 1 && playingfield[cordX-2][cordY] !='O'&& playingfield[cordX-2][cordY+1] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
//         playingfield[cordX-1][cordY-1] ='O';
//         playingfield[cordX-1][cordY] = 'O';
//         playingfield[cordX-1][cordY+1] ='O';
//         isnotdumb=true;
//     }
//     else
//     cout<<"improper direction"<<endl;
//     break;
//     //up
//     case 3:
//     if(cordX <= 10 && cordX >= 1 && cordY <= 10  && cordY >= 3 && playingfield[cordX-1][cordY-2] !='O'&& playingfield[cordX-1][cordY-3] !='O'&& playingfield[cordX-1][cordY-1] !='@')
//     {
//         playingfield[cordX-1][cordY-1] ='O';
//         playingfield[cordX-1][cordY-2] = 'O';
//         playingfield[cordX-1][cordY-3] = 'O';
//         isnotdumb=true;
//     }
//     else
//     cout<<"improper direction"<<endl;
//     break;

//    //not specifed imput 
//    default:
//    cout<<"improper direction,pick another one "<<endl;
//     break;
//    }
//     }
//     cout << "thanks for cooperation  mortal"<<endl;
// }

// void ship::setShipFourMast(char playingfield[10][10][2])
// {
//         int cordY,cordX;
// bool isnotdumb=false;
//  int dir;
//     while (isnotdumb==false)
//     {
//         cout<< "place thy ships mortal (four mast )"<<endl;
//         cout<<"place the first cord(1-10): "<<endl;
//         cin>>cordY;
//         cout<<"now the second  cord(1-10): "<<endl;
//         cin>>cordX;
        
    
//     if(cordX <= 10 && cordX >= 1 && cordY <= 10  && cordY >= 1 && playingfield[cordX-1][cordY-1] !='@' && playingfield[cordX-1][cordY-1] !='@')
//     {
//                 if(playingfield[cordX-1][cordY-1] !='O'){
                
                
//                 }
//                 else{
//                     cout<<"dumb mortal, that spot is taken pick another one "<<endl;
//                     continue;
                    
//                 }
//     }
//     else 
//     {
//         cout << "Invalid cord pick another one " << endl;
//         continue;
        

//     }
    
//          cout<< "now the direction (1-up,2-down,3-right,4-left)"<<endl;
//         cin >> dir;
//    switch ((dir-1))
//    {
//     //left 
//    case 0:
//     if(cordX <= 10 && cordX >= 4 && cordY <= 10  && cordY >= 1 && playingfield[cordX-2][cordY-1] !='O'&& playingfield[cordX-3][cordY-1] !='O'&& playingfield[cordX-4][cordY-1] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
//         playingfield[cordX-1][cordY-1] ='O';
//         playingfield[cordX-2][cordY-1] = 'O';
//         playingfield[cordX-3][cordY-1] = 'O';
//         playingfield[cordX-4][cordY-1] = 'O';

//           isnotdumb=true;
//     }
//     else
//     cout<<"improper direction"<<endl;
//     break;

//     //right
//     case 1:
//     if(cordX <= 7 && cordX >= 1 && cordY <= 10  && cordY >= 1 && playingfield[cordX][cordY-1] !='O'&& playingfield[cordX+1][cordY-1] !='O'&& playingfield[cordX+2][cordY-1] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
//                 isnotdumb=true;
//                 playingfield[cordX-1][cordY-1] ='O';
//     playingfield[cordX][cordY-1] = 'O';
//     playingfield[cordX+1][cordY-1] ='O';
//     playingfield[cordX+2][cordY-1] ='O';
//     }
//     else
//     cout<<"improper direction"<<endl;
//     break;

//     //down
//     case 2:

//     if(cordX <= 10 && cordX >= 1 && cordY <= 7  && cordY >= 1 && playingfield[cordX-1][cordY] !='O'&& playingfield[cordX-1][cordY+1] !='O'&& playingfield[cordX-1][cordY+2] !='O'&& playingfield[cordX-1][cordY-1] !='@'){
//         playingfield[cordX-1][cordY-1] ='O';
//         playingfield[cordX-1][cordY] = 'O';
//         playingfield[cordX-1][cordY+1] ='O';
//         playingfield[cordX-1][cordY+2] ='O';

//         isnotdumb=true;
//     }
//     else
//     cout<<"improper direction"<<endl;
//     break;
//     //up
//     case 3:
//     if(cordX <= 10 && cordX >= 1 && cordY <= 10  && cordY >= 4 && playingfield[cordX-1][cordY-2] !='O'&& playingfield[cordX-1][cordY-3] !='O'&& playingfield[cordX-1][cordY-4] !='O'&& playingfield[cordX-1][cordY-1] !='@')
//     {
//         playingfield[cordX-1][cordY-1] ='O';
//         playingfield[cordX-1][cordY-2] = 'O';
//         playingfield[cordX-1][cordY-3] = 'O';
//         playingfield[cordX-1][cordY-4] = 'O';
//         isnotdumb=true;
//     }
//     else
//     cout<<"improper direction"<<endl;
//     break;

//    //not specifed imput 
//    default:
//    cout<<"improper direction,pick another one "<<endl;
//     break;
//    }
//     }
//     cout << "thanks for cooperation  mortal"<<endl;
// }