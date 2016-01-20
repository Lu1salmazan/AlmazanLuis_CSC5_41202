/*Author: Luis Almazan
 *Date:01/20/16
 *Purpose: Savtch 7ed ch3 prb1 R,P,S
 */

//System libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User libraries

//Global constant

//Function Prototypes

int main() {
    //rand number seed
    srand(static_cast<unsigned int>(time(0)));
    //declare variable
    char qstOFPLR;    //answer from the player
    
    do{
        //Declare Variables
        char qstOFPLR;    //answer from the player
        char comptr;       //PC's play
        char player;       //The player's move

        //Input
        do{
            //Input
            cout<<"Pick your play P,R,S"<<endl;
            cin>>player;
            player=toupper(player);
        }while(!(player=='P'||player=='R'||player=='S'));

        //PC Generator 
        do{
            comptr=rand()%4+80;
        }while(comptr=='Q');

        //Output the moves by PC and Player
        cout<<"The Computer Played "<<comptr<<endl;
        cout<<"The Player played "<<player<<endl;

        //determine the result
        if(comptr==player){
            cout<<"The Result is a tie"<<endl;
        }else if(player=='P'&&comptr=='R'){
            cout<<"The player Wins"<<endl;
        }else if (player=='R'&&comptr=='S'){
            cout<<"The player Wins"<<endl;
        }else if (player=='S'&&comptr=='P'){
            cout<<"The Player Wins"<<endl;
        }else
            cout<<"The Computer Wins"<<endl;
    
        //Keep Playing?
        cout<<"Do you Want to Continue Playing? Y or N"<<endl;
        cin>>qstOFPLR;
}while(toupper(qstOFPLR)=='Y');
        
    return 0;
}