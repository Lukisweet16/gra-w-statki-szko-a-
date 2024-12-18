
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
bool endgame(bool cos,int x){
    if (cos==true)
   {
    cout<<"player"<<x<<"  won"<<endl;
    return true;
    
    
   }
   else 
   return false;
}
int main()
{
    
    bool winstatus1=false,winstatus2=false,attackstatus1=false,attackstatus2=false;
    char playingboard1[10][10][2],playingboard2[10][10][2],
    playingboard3[10][10],playingboard4[10][10];
    string playername1,playername2;


//create player1 and his boards
player myplayer1(0);

board myboard1( playingboard1);
board aimingboard1(playingboard3);
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
board myboard2( playingboard2);
board aimingboard2(playingboard4);
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





 
    cout<<"fasten your seatbelts,put your lifevests on, we are about to start the game"<<endl;
    cout<<"legend M-miss ,~-waves nothing there,O-ship,X-hit"<<endl<<"goodluck"<<endl;
    cout<<"player 1 turn to place the ships"<<endl;
    myboard1.ShowPlayingBoard(playingboard1);

    myFourMast1.setShipFourMast(playingboard1);
    cout<<" fourmast set"<<endl;
myboard1.ShowPlayingBoard(playingboard1);
    myThreeMast1.setShipThreeMast(playingboard1);
    cout<<"1 threemast set"<<endl;
    myThreeMast2.setShipThreeMast(playingboard1);
    cout<<"2 threemast set"<<endl;
myboard1.ShowPlayingBoard(playingboard1);
    myTwoMast1.setShipTwoMast(playingboard1);
    cout<<"1 twomast set"<<endl;
    myTwoMast2.setShipTwoMast(playingboard1);
    cout<<"2 twomast set"<<endl;
    myTwoMast3.setShipTwoMast(playingboard1);
    cout<<"3 twomast set"<<endl;
myboard1.ShowPlayingBoard(playingboard1);
    myOneMast1.setShipOneMast(playingboard1);
    cout<<"1 onemast set"<<endl;
    myOneMast2.setShipOneMast(playingboard1);
    cout<<"2 onemast set"<<endl;
    myOneMast3.setShipOneMast(playingboard1);
    cout<<"3 onemast set"<<endl;
     myOneMast4.setShipOneMast(playingboard1);
     cout<<"4 onemast set"<<endl;
myboard1.ShowPlayingBoard(playingboard1);
magicSpace();
cout<<"player 2 turn to place the ships"<<endl;

myboard2.ShowPlayingBoard(playingboard2);

 oppFourMast1.setShipFourMast(playingboard2);
 cout<<" four mast set"<<endl;
myboard2.ShowPlayingBoard(playingboard2);
    oppThreeMast1.setShipThreeMast(playingboard2);
    cout<<"1 threemast set"<<endl;
    oppThreeMast2.setShipThreeMast(playingboard2);
    cout<<"2 threemast set"<<endl;
myboard2.ShowPlayingBoard(playingboard2);  
    oppTwoMast1.setShipTwoMast(playingboard2);
    cout<<"1 twomast set"<<endl;
    oppTwoMast2.setShipTwoMast(playingboard2);
    cout<<"2 twomast set"<<endl;
    oppTwoMast3.setShipTwoMast(playingboard2);
    cout<<"3 twomast set"<<endl;
myboard2.ShowPlayingBoard(playingboard2);
    oppOneMast1.setShipOneMast(playingboard2);
    cout<<"1 onemast set"<<endl;
    oppOneMast2.setShipOneMast(playingboard2);
    cout<<"2 onemast set"<<endl;
   oppOneMast3.setShipOneMast(playingboard2);
   cout<<"3 onemast set"<<endl;
    oppOneMast4.setShipOneMast(playingboard2);
    cout<<"4 onemast set"<<endl;
    


magicSpace();
cout<<"press a key when the player 1 is ready "<<endl;
    cin.ignore();
    cin.get();
magicSpace();
// Game loop

    
    while (winstatus1 == false && winstatus2 == false) {
        attackstatus1=false,attackstatus2=false;
        magicSpace();
cout<<"press a key when the player 1 is ready "<<endl;
    cin.ignore();
    cin.get();
magicSpace();
     cout<<"player 1 turn to shoot"<<endl;

    myboard1.ShowPlayingBoard(playingboard1);
    aimingboard1.ShowAimingBoard(playingboard3);
    while(attackstatus1==false){
   attackstatus1= myplayer1.attack(playingboard2,playingboard3);
   winstatus1  = myboard1.checkIfWin(playingboard2);
   if(endgame(winstatus1,1)==true){break;};
    }
    if(winstatus1==true){
    break;
    }
   magicSpace();
    cout<<"player 2 turn to shoot"<<endl;
        magicSpace();
cout<<"press a key when the player 2 is ready "<<endl;
    cin.ignore();
    cin.get();
magicSpace();
    myboard2.ShowPlayingBoard(playingboard2);
    aimingboard2.ShowAimingBoard(playingboard4);
    while(attackstatus2==false){
   attackstatus2 = myplayer2.attack(playingboard1,playingboard4);
    winstatus2=myboard2.checkIfWin(playingboard1);
  if(endgame(winstatus2,2)==true){break;};
    }
if(winstatus2==true){
    break;
    }
}
 
 cout<<"thanks for playing"<<endl;

    cin.ignore(); 
    cin.get(); 

}
