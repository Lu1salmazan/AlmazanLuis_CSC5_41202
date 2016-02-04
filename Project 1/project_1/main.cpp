/* 
  File:   main.cpp
  Author: rcc
  Created on February 4, 2016, 10:10 AM
 *Purpose: recreate a game
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//System libraries

//User libraries

//Global constants

//function Prototypes

int main(int argc, char** argv) {
    //Set random seed generator
    srand(static_cast<int>(time(0)));
    
    //declare and initialize variables
    short plyRD1=0,plyRD2=0,plyRD3=0,plyRD4=0;//Player 1 and [1,4]pons
    short plyBL1=0,plyBL2=0,plyBL3=0,plyBL4=0;//Player 2 and [1,4]pons
    short plyGR1=0,plyGR2=0,plyGR3=0,plyGR4=0;//Player 3 and [1,4]pons
    short plyYL1=0,plyYL2=0,plyYL3=0,plyYL4=0;//Player 4 and [1,4]pons
    float penTY,enTry,prce;//penalty for death, money for entry, and price for winning
    short rdHM,blHM,grHm,ylHM,trck=48;
    char die;
    bool win=true;
    
    //loop for rounds
    do{
        int ply=1;//set player turn for dies role
            switch (ply){
                case 1: die=rand()%6+1;//random dies role
                do{
                //getting out from starting point
                if (die==1){
                    (plyRD1!=rdHM&&plyRD1==0?plyRD1=1:
                    (plyRD2!=rdHM&&plyRD2==0?plyRD2=1:
                    (plyRD3!=rdHM&&plyRD3==0?plyRD3=1:
                    (plyRD4!=rdHM&&plyRD4==0?plyRD4=1:'Your have one more'))));
                    //Check for pons at home and at start
                }else if(die==6){
                    (plyRD1!=rdHM&&plyRD1==0?plyRD1=1:
                    (plyRD2!=rdHM&&plyRD2==0?plyRD2=1:
                    (plyRD3!=rdHM&&plyRD3==0?plyRD3=1:
                    (plyRD4!=rdHM&&plyRD4==0?plyRD4=1:'Your have one more'))));
                    die=rand()%6+1;
                    //check for pons at home and at start then role again
                }else ply++;//go to the next player
                    
            }while(plyRD1=0&&plyRD2=0&&plyRD3=0&&plyRD4=0);//check if their are any at the track
            break;
            cout<<plyRD1<<endl;
            //The second player's turn
                case 2:die=rand()%6+1;//random dies role
                do{
                //getting out from starting point
                if (die==1){
                    (plyBL1!=rdHM&&plyBL1==0?plyBL1=1:
                    (plyBL2!=rdHM&&plyBL2==0?plyBL2=1:
                    (plyBL3!=rdHM&&plyBL3==0?plyBL3=1:
                    (plyBL4!=rdHM&&plyBL4==0?plyBL4=1:'Your have one more'))));
                    //Check for pons at home and at start
                }else if(die==6){
                    (plyBL1!=rdHM&&plyBL1==0?plyBL1=1:
                    (plyBL2!=rdHM&&plyBL2==0?plyBL2=1:
                    (plyBL3!=rdHM&&plyBL3==0?plyBL3=1:
                    (plyBL4!=rdHM&&plyBL4==0?plyBL4=1:'Your have one more'))));
                    die=rand()%6+1;
                    //check for pons at home and at start then role again
                }else ply++;//go to the next player
                    
            }while(plyBL1=0&&plyBL2=0&&plyBL3=0&&plyBL4=0);//check if their are any at the track
            break;
            //The third player's turn
                case 2:die=rand()%6+1;//random dies role
                do{
                //getting out from starting point
                if (die==1){
                    (plyGR1!=rdHM&&plyGR1==0?plyGR1=1:
                    (plyGR2!=rdHM&&plyGR2==0?plyGR2=1:
                    (plyGR3!=rdHM&&plyGR3==0?plyGR3=1:
                    (plyGR4!=rdHM&&plyGR4==0?plyGR4=1:'Your have one more'))));
                    //Check for pons at home and at start
                }else if(die==6){
                    (plyGR1!=rdHM&&plyGR1==0?plyGR1=1:
                    (plyGR2!=rdHM&&plyGR2==0?plyGR2=1:
                    (plyGR3!=rdHM&&plyGR3==0?plyGR3=1:
                    (plyGR4!=rdHM&&plyGR4==0?plyGR4=1:'Your have one more'))));
                    die=rand()%6+1;
                    //check for pons at home and at start then role again
                }else ply++;//go to the next player
                    
            }while(plyGR1=0&&plyGR2=0&&plyGR3=0&&plyGR4=0);//check if their are any at the track
            break;
            //The forth player's turn
                case 2:die=rand()%6+1;//random dies role
                do{
                //getting out from starting point
                if (die==1){
                    (plyYL1!=rdHM&&plyYL1==0?plyYL1=1:
                    (plyYL2!=rdHM&&plyYL2==0?plyYL2=1:
                    (plyYL3!=rdHM&&plyYL3==0?plyYL3=1:
                    (plyYL4!=rdHM&&plyYL4==0?plyYL4=1:'Your have one more'))));
                    //Check for pons at home and at start
                }else if(die==6){
                    (plyYL1!=rdHM&&plyYL1==0?plyYL1=1:
                    (plyYL2!=rdHM&&plyYL2==0?plyYL2=1:
                    (plyYL3!=rdHM&&plyYL3==0?plyYL3=1:
                    (plyYL4!=rdHM&&plyYL4==0?plyYL4=1:'Your have one more'))));
                    die=rand()%6+1;
                    //check for pons at home and at start then role again
                }else ply=1;//give the turn to first player
                    
            }while(plyYL1=0&&plyYL2=0&&plyYL3=0&&plyYL4=0);//check if their are any at the track
            break;
        }
    }while(!win);

    return 0;
}
