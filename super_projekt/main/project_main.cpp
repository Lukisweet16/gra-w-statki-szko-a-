/**/
#include <iostream>
#include <cstdlib>
#include <string>
#include "../classes/player.cc"
#include "../classes/board.cc"
#include "../classes/ship.cc"
using namespace std;

void magicSpace()
{
system("cls");
}

int main()
{
    char alphabetarray[10];
    bool winstatus1=false,winstatus2=false;
    char playingfield1[10][10][2],playingfield2[10][10][2],
    playingfield3[10][10],playingfield4[10][10];
    string playername1,playername2;


//create player1 and his boards
player myplayer1(0);

board myboard1( playingfield1);
board aimingboard1(playingfield2);
//create ships for player1
ship myOneMast1 (0,0);
ship myOneMast2 (1,1);
ship myOneMast3 (2,3);
ship myOneMast4 (4,5);

ship myTwoMast1(1,6,2);
ship myTwoMast2(7,0,2);
ship myTwoMast3(9,0,3);

ship myThreeMast1(3,0,3);
ship myThreeMast2(5,0,3);

ship myFourMast1(3,9,4);

//create player2 and his boards

player myplayer2(0);
board myboard2( playingfield3);
board aimingboard2(playingfield4);
//create ships for player2
ship oppOneMast1 (0,0);
ship oppOneMast2 (1,1);
ship oppOneMast3 (2,3);
ship oppOneMast4 (4,5);

ship oppTwoMast1(1,6,2);
ship oppTwoMast2(7,0,2);
ship oppTwoMast3(9,0,3);

ship oppThreeMast1( 5,5,3);
ship oppThreeMast2( 8,8,3);

ship oppFourMast1( 0,2,4);

myboard1.ShowPlayingBoard(playingfield1);
//game loop

 while(winstatus1==false || winstatus2==false)
 {
    cout<<"fasten your seatbelts,put your lifevests on, we are about to start the game"<<endl;
    cout<<"legend M-miss ,~-waves nothing there,O-ship,X-hit"<<endl<<"goodluck"<<endl;
    cout<<"player 1 turn to place the ships"<<endl;
    myboard1.showPlayingField(playingfield1);

    myFourMast1.setShipFourMast(playingfield1);
mytable1.showPlayingField(playingfield1);
    myThreeMast1.setShipThreeMast(playingfield1);
    myThreeMast2.setShipThreeMast(playingfield1);
mytable1.showPlayingField(playingfield1);
    myTwoMast1.setShipTwoMast(playingfield1);
    myTwoMast2.setShipTwoMast(playingfield1);
    myTwoMast3.setShipTwoMast(playingfield1);
mytable1.showPlayingField(playingfield1);
    myOneMast1.setShipOneMast(playingfield1);
    myOneMast2.setShipOneMast(playingfield1);
    myOneMast3.setShipOneMast(playingfield1);
    myOneMast4.setShipOneMast(playingfield1);
mytable1.showPlayingField(playingfield1);
magicSpace();
cout<<"player 2 turn to place the ships"<<endl;

mytable2.showPlayingField(playingfield3);

 oppFourMast1.setShipFourMast(playingfield3);
mytable2.showPlayingField(playingfield3);
    oppThreeMast1.setShipThreeMast(playingfield3);
    oppThreeMast2.setShipThreeMast(playingfield3);
mytable2.showPlayingField(playingfield3);

    oppTwoMast1.setShipTwoMast(playingfield3);
    oppTwoMast2.setShipTwoMast(playingfield3);
    oppTwoMast3.setShipTwoMast(playingfield3);
mytable2.showPlayingField(playingfield3);
    oppOneMast1.setShipOneMast(playingfield3);
    oppOneMast2.setShipOneMast(playingfield3);
    oppOneMast3.setShipOneMast(playingfield3);
    oppOneMast4.setShipOneMast(playingfield3);
    cout<<"cos";
 while(winstatus1==false || winstatus2==false)
{
    cout<<"player 1 turn to shoot"<<endl;

    mytable1.showPlayingField(playingfield1);
    aimingboard1.showPlayingField(playingfield2);
    mytable1.attack(playingfield2,playingfield3);
   winstatus1  = mytable1.checkIfWin(playingfield1);
   if (winstatus1==false)
   {
    break;
   }
   magicSpace();
    cout<<"player 2 turn to shoot"<<endl;
    mytable2.showPlayingField(playingfield3);
    aimingboard2.showPlayingField(playingfield4);
    mytable2.attack(playingfield1,playingfield4);
    winstatus2=mytable2.checkIfWin(playingfield3);
    
    
}



 }
 cout<<"thanks for playing"<<endl;

    cin.ignore(); 
    cin.get(); 






}