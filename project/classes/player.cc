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
bool player::attack(char playingboard[10][10][2],char aimingboard[10][10])
{

    int cordY,cordX,a;
    char cordYletter;
    bool isnotdumb=0;
    while (isnotdumb==false){
         cout<<"pick the first shooting cord A-J: "<<endl;
        cin>>cordYletter;
        cout<<"now the second  cord(1-10): "<<endl;
        cin>>cordX;
        int cordY= LettertoNumber(cordYletter);
        int x=cordX-1,y=cordY-1;
       if(cordX < 10 && cordX > 0 && cordY < 10  && cordY > 0)
    {
                if(playingboard[x][y][0] !='X' &&  playingboard[x][y][0] !='M' && playingboard[x][y][0] =='O'){
                playingboard[x][y][0] = 'X';
                aimingboard[x][y]='X';
                isnotdumb=true;
                cout<<"hit. you've got another shot "<<endl;
                a=0;
                
                }
                else if(playingboard[x][y][0]== '~')
                {
                    cout<<"missed :)"<<endl;
                    playingboard[x][y][0] = 'M';
                aimingboard[x][y]='M';
                    isnotdumb = true;
                    
                    a=1;
                    
                }
                else{
                    cout<<"player  you have already shot here "<<endl;
                    isnotdumb =  true;
                    a=1;
                }
    }
    else 
    {
        cout << "Invalid cord" << endl;
isnotdumb=false;

    }
};
if(a=1)
{
    return false;
}
else return true;
}
int player::LettertoNumber(char X)
{
    int a;
    char uppercase =toupper(X);
     a = int(uppercase)-64;
    return a;

}
