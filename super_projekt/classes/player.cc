#include "player.h"
#include <iostream>
#include <string>

using namespace std;

player::player (int wincounter )
{
    this->wincounter=wincounter;
}

player::~player()
{
    cout<< "and it's over "<<endl;
}

string player::getplayername()
{
    return this->playername;
}

void player::setplayername(string playername)
{
   
    this->playername = playername;
    cout<<  "player name  changed to "<< playername;


}
