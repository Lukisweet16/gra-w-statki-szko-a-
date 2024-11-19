
#include <iostream>
#include <cstdlib>
#include <string>
#include "../classes/player.cc"
#include "../classes/board.cc"
#include "../classes/ship.cc"
using namespace std;

int main(){


char playingfield1[10][10][2];
board myboard1( playingfield1);
myboard1.ShowPlayingBoard(playingfield1);
ship myonemast1(1,2);
ship mytwomast1(2,2);


myonemast1.setShipOneMast(playingfield1);
myboard1.ShowPlayingBoard(playingfield1);

mytwomast1.setShipTwoMast(playingfield1);
myboard1.ShowPlayingBoard(playingfield1);





}
