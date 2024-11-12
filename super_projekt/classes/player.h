#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;
class player
{
private:
  
public:
int wincounter;
 string playername;
    player(int wincounter);
    ~player();
    string getplayername();
   void setplayername(string playername);
};





#endif