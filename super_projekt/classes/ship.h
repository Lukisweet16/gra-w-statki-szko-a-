#ifndef SHIP_H
#define SHIP_H
class ship
{
private:
   int cordY,cordX,dir;
   
public:

    ship(int cordX,int cordY);
    ship(int cordX,int cordY,int dir);
    ~ship();
   void setShipOneMast(char playingfield[10][10]);
   void setShipTwoMast(char playingfield[10][10]);
   void setShipThreeMast(char playingfield[10][10]);
   void setShipFourMast(char playingfield[10][10]);
   

};






#endif 