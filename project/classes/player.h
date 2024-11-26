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
   bool attack(char playingboard[10][10][2],char aimingboard[10][10]);
   int LettertoNumber(char X);
};





#endif