/* 
  File:   main.cpp
  Author: rcc
  Created on February 7, 2016, 1:07 AM
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
void pl1HVS(int []);
void pl2HVS();
void pl3HVS();
void pl4HVS();

int main(int argc, char** argv) {
    //Set random seed generator
    srand(static_cast<int>(time(0)));
    
    //declare and initialize variables
    float penTY,enTry,prce;//penalty for death, money for entry, and price for winning
    short rdHM,blHM,grHm,ylHM,trck=48;
    char die;
    bool win=false;
    
    //loop for rounds
    do{
        int ply=1;//set player turn for dies role
            if (ply==1){
            pl1HVS();
            
            ply++;
            //The second player's turn
            }else if(ply==2){
                pl2HVS();
                ply++;
            //The third player's turn
            }else if(ply==3){
                pl3HVS();
                ply++;
            //The forth player's turn
            }else if(ply==4){
                pl3HVS();
                ply=1;
        }else cout<<endl;
    }while(win);

    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//-----------------------Search player 1 home and start-------------------------
void pl1HVS(){
    short rdHM,trck=48;
    short plyRD1=0,plyRD2=0,plyRD3=0,plyRD4=0;//Player 1 and [1,4]pons
    int die=rand()%6+1;
    do{
        //getting out from starting point
        if (die==1){
            (plyRD1!=rdHM&&plyRD1==0?plyRD1=1:
            (plyRD2!=rdHM&&plyRD2==0?plyRD2=1:
            (plyRD3!=rdHM&&plyRD3==0?plyRD3=1:
            (plyRD4!=rdHM&&plyRD4==0?plyRD4=1:'Not Finished!'))));
            //Check for pons at home and at start
        }else if(die==6){
            (plyRD1!=rdHM&&plyRD1==0?plyRD1=1:
            (plyRD2!=rdHM&&plyRD2==0?plyRD2=1:
            (plyRD3!=rdHM&&plyRD3==0?plyRD3=1:
            (plyRD4!=rdHM&&plyRD4==0?plyRD4=1:'Not Finished!'))));
            die=rand()%6+1;
            //check for pons at home and at start then role again
        }else cout<<endl;
                    
    }while(plyRD1=0&&plyRD2=0&&plyRD3=0&&plyRD4=0);//check if their are any at the track
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//-----------------------Search player 2 home and start-------------------------
void pl2HVS(){
    short blHM,trck=48;
    short plyBL1=0,plyBL2=0,plyBL3=0,plyBL4=0;//Player 2 and [1,4]pons
    char die=rand()%6+1;
    do{
        //getting out from starting point
        if (die==1){
            (plyBL1!=blHM&&plyBL1==0?plyBL1=1:
            (plyBL2!=blHM&&plyBL2==0?plyBL2=1:
            (plyBL3!=blHM&&plyBL3==0?plyBL3=1:
            (plyBL4!=blHM&&plyBL4==0?plyBL4=1:'Not Finished!'))));
            //Check for pons at home and at start
        }else if(die==6){
            (plyBL1!=blHM&&plyBL1==0?plyBL1=1:
            (plyBL2!=blHM&&plyBL2==0?plyBL2=1:
            (plyBL3!=blHM&&plyBL3==0?plyBL3=1:
            (plyBL4!=blHM&&plyBL4==0?plyBL4=1:'Nont Finished!'))));
            die=rand()%6+1;
            //check for pons at home and at start then role again
        }else cout<<endl;

    }while(plyBL1=0&&plyBL2=0&&plyBL3=0&&plyBL4=0);//check if their are any at the track
}
    
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//-----------------------Search player 3 home and start-------------------------
void pl3HVS(){
    short grHM,trck=48;
    short plyGR1=0,plyGR2=0,plyGR3=0,plyGR4=0;//Player 3 and [1,4]pons
    char die=rand()%6+1;
    do{
        //getting out from starting point
        if (die==1){
            (plyGR1!=grHM&&plyGR1==0?plyGR1=1:
            (plyGR2!=grHM&&plyGR2==0?plyGR2=1:
            (plyGR3!=grHM&&plyGR3==0?plyGR3=1:
            (plyGR4!=grHM&&plyGR4==0?plyGR4=1:'Not Finished!'))));
            //Check for pons at home and at start
        }else if(die==6){
            (plyGR1!=grHM&&plyGR1==0?plyGR1=1:
            (plyGR2!=grHM&&plyGR2==0?plyGR2=1:
            (plyGR3!=grHM&&plyGR3==0?plyGR3=1:
            (plyGR4!=grHM&&plyGR4==0?plyGR4=1:'Not Finished!'))));
            die=rand()%6+1;
            //check for pons at home and at start then role again
        }else cout<<endl;
                    
    }while(plyGR1=0&&plyGR2=0&&plyGR3=0&&plyGR4=0);//check if their are any at the track
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//-----------------------Search player 4 home and start-------------------------
void pl4HVS(){
    short ylHM,trck=48;
    short plyYL1=0,plyYL2=0,plyYL3=0,plyYL4=0;//Player 1 and [1,4]pons
    char die=rand()%6+1;
    do{
    //getting out from starting point
        if (die==1){
            (plyYL1!=ylHM&&plyYL1==0?plyYL1=1:
            (plyYL2!=ylHM&&plyYL2==0?plyYL2=1:
            (plyYL3!=ylHM&&plyYL3==0?plyYL3=1:
            (plyYL4!=ylHM&&plyYL4==0?plyYL4=1:'Not Finished'))));
            //Check for pons at home and at start
        }else if(die==6){
            (plyYL1!=ylHM&&plyYL1==0?plyYL1=1:
            (plyYL2!=ylHM&&plyYL2==0?plyYL2=1:
            (plyYL3!=ylHM&&plyYL3==0?plyYL3=1:
            (plyYL4!=ylHM&&plyYL4==0?plyYL4=1:'Not Finished'))));
            die=rand()%6+1;
            //check for pons at home and at start then role again
        }else cout<<endl;

    }while(plyYL1=0&&plyYL2=0&&plyYL3=0&&plyYL4=0);//check if their are any at the track
}