#ifndef SHIP_H
#define SHIP_H
#include <iostream>
class ship
{
private:
   int cordY,cordX,dir;
   
public:
    
    ship(int cordX,int cordY);
    ship(int cordX,int cordY,int dir);
    ~ship();
    int LettertoNumber(char X);
    int NumbertoNumber(char X);

     void PutOneBlock(char playingboard[10][10][2],int cordX,int cordY);
     void PutTwomast(char playingboard[10][10][2],int cordX,int cordY,int dir);
     void PutThreemast(char playingboard[10][10][2],int cordX,int cordY,int dir);
     void PutFourmast(char playingboard[10][10][2],int cordX,int cordY,int dir);

    bool checkIfCanPlaceOneblock(char playingboard[10][10][2],int cordX,int cordY);
    bool checkIfCanPlaceTwomast(char playingboard[10][10][2],int cordX,int cordY,int dir);
    bool checkIfCanPlaceThreemast(char playingboard[10][10][2],int cordX,int cordY,int dir);
    bool checkIfCanPlaceFourmast(char playingboard[10][10][2],int cordX,int cordY,int dir);
   
   void setShipOneMast(char playingfield[10][10][2]);
   void setShipTwoMast(char playingfield[10][10][2]);
   void setShipThreeMast(char playingfield[10][10][2]);
   void setShipFourMast(char playingfield[10][10][2]);
  

};






#endif 