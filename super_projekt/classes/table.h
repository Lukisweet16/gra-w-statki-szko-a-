class table
{
private:
    /* data */
public:
char playingfield[10][10];
    table(char playingfield[10][10]);
    ~table();
   
     void showPlayingField(char playingfield[10][10]);
     void attack(char playingfield[10][10],char aimingboard[10][10]);
    bool checkIfWin(char playingfield[10][10]);

};



