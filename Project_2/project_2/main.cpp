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
int pl1HVS(int &[]);
int pl2HVS(int &[]);
int pl3HVS(int &[]);
int pl4HVS(int []);

int main(int argc, char** argv) {
    //Set random seed generator
    srand(static_cast<int>(time(0)));
    
    //declare and initialize variables
    float penTY,enTry,prce;//penalty for death, money for entry, and price for winning
    const char HOME=49;
    short home[HOME],trck=48;
    bool win=false;
    
    //loop for rounds
    do{
        int ply[];//set player turn for dies role
            switch(ply){
            case 1:pl1HVS();break;
            case 2:pl2HVS();break;
            case 3:pl3HVS();break;
            case 4:pl4HVS();break;}
    }while(win);

    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//-----------------------Search player 1 home and start-------------------------
int pl1HVS(int &[]){
    short rdHM,trck=48;
    short plyRD1=0,plyRD2=0,plyRD3=0,plyRD4=0;//Player 1 and [1,4]pons
    int die=rand()%6+1;
    while(plyRD1=0&&plyRD2=0&&plyRD3=0&&plyRD4=0){
        //getting out from starting point
        if (die==1){//check for pons at home and start
            (plyRD1!=rdHM&&plyRD1==0?plyRD1=1:
            (plyRD2!=rdHM&&plyRD2==0?plyRD2=1:
            (plyRD3!=rdHM&&plyRD3==0?plyRD3=1:
            (plyRD4!=rdHM&&plyRD4==0?plyRD4=1:'Not Finished!'))));
        }else if(die==6){
            (plyRD1!=rdHM&&plyRD1==0?plyRD1=1:
            (plyRD2!=rdHM&&plyRD2==0?plyRD2=1:
            (plyRD3!=rdHM&&plyRD3==0?plyRD3=1:
            (plyRD4!=rdHM&&plyRD4==0?plyRD4=1:'Not Finished!'))));
            do{die=rand()%6+1;
            (plyRD1!=rdHM&&plyRD1!=0&&(plyRD1=plyRD1+die)!=?plyRD1=plyRD1+die:
            (plyRD2!=rdHM&&plyRD2!=0&&(plyRD2=plyRD2+die)<rdHM?plyRD2=plyRD2+die:
            (plyRD3!=rdHM&&plyRD3!=0&&(plyRD3=plyRD3+die)<rdHM?plyRD3=plyRD3+die:
            (plyRD4!=rdHM&&plyRD4!=0&&(plyRD4=plyRD4+die)<rdHM?plyRD4=plyRD4+die:''))));
            }while(die==6);
        }else cout<<endl;
    }
    do{die=rand()%6+1;
        (plyRD1!=rdHM&&plyRD1!=0&&(plyRD1=plyRD1+die)<rdHM?plyRD1=plyRD1+die:
        (plyRD2!=rdHM&&plyRD2!=0&&(plyRD2=plyRD2+die)<rdHM?plyRD2=plyRD2+die:
        (plyRD3!=rdHM&&plyRD3!=0&&(plyRD3=plyRD3+die)<rdHM?plyRD3=plyRD3+die:
        (plyRD4!=rdHM&&plyRD4!=0&&(plyRD4=plyRD4+die)<rdHM?plyRD4=plyRD4+die:''))));
        }while(die==6);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//-----------------------Search player 2 home and start-------------------------
int pl2HVS(int &[]){
    short blHM,trck=48;
    short plyBL1=0,plyBL2=0,plyBL3=0,plyBL4=0;//Player 2 and [1,4]pons
    char die=rand()%6+1;
    while(plyBL1=0&&plyBL2=0&&plyBL3=0&&plyBL4=0){
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
            do{die=rand()%6+1;
            (plyBL1!=blHM&&plyBL1!=0&&(plyBL1=plyBL1+die)<blHM?plyBL1=plyBL1+die:
            (plyBL2!=blHM&&plyBL2!=0&&(plyBL2=plyBL2+die)<blHM?plyBL2=plyBL2+die:
            (plyBL3!=blHM&&plyBL3!=0&&(plyBL3=plyBL3+die)<blHM?plyBL3=plyBL3+die:
            (plyBL4!=blHM&&plyBL4!=0&&(plyBL4=plyBL4+die)<blHM?plyBL4=plyBL4+die:''))));
            }while(die==6);
        }else cout<<endl;
    }
    do{die=rand()%6+1;
        (plyBL1!=blHM&&plyBL1!=0&&(plyBL1=plyBL1+die)<blHM?plyBL1=plyBL1+die:
        (plyBL2!=blHM&&plyBL2!=0&&(plyBL2=plyBL2+die)<blHM?plyBL2=plyBL2+die:
        (plyBL3!=blHM&&plyBL3!=0&&(plyBL3=plyBL3+die)<blHM?plyBL3=plyBL3+die:
        (plyBL4!=blHM&&plyBL4!=0&&(plyBL4=plyBL4+die)<blHM?plyBL4=plyBL4+die:''))));
    }while(die==6);
}
    
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//-----------------------Search player 3 home and start-------------------------
int pl3HVS(int &[]){
    short grHM,trck=48;
    short plyGR1=0,plyGR2=0,plyGR3=0,plyGR4=0;//Player 3 and [1,4]pons
    char die=rand()%6+1;
    while(plyGR1=0&&plyGR2=0&&plyGR3=0&&plyGR4=0){
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
            do{die=rand()%6+1;
            (plyGR1!=grHM&&plyGR1!=0&&(plyGR1=plyGR1+die)<grHM?plyGR1=plyGR1+die:
            (plyGR2!=grHM&&plyGR2!=0&&(plyGR2=plyGR2+die)<grHM?plyGR2=plyGR2+die:
            (plyGR3!=grHM&&plyGR3!=0&&(plyGR3=plyGR3+die)<grHM?plyGR3=plyGR3+die:
            (plyGR4!=grHM&&plyGR4!=0&&(plyGR4=plyGR4+die)<grHM?plyGR4=plyGR4+die:''))));
            }while(die==6);
        }else cout<<endl;                    
    }
    do{die=rand()%6+1;
        (plyGR1!=grHM&&plyGR1!=0&&(plyGR1=plyGR1+die)<grHM?plyGR1=plyGR1+die:
        (plyGR2!=grHM&&plyGR2!=0&&(plyGR2=plyGR2+die)<grHM?plyGR2=plyGR2+die:
        (plyGR3!=grHM&&plyGR3!=0&&(plyGR3=plyGR3+die)<grHM?plyGR3=plyGR3+die:
        (plyGR4!=grHM&&plyGR4!=0&&(plyGR4=plyGR4+die)<grHM?plyGR4=plyGR4+die:''))));
    }while(die==6);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//-----------------------Search player 4 home and start-------------------------
int pl4HVS(int []){
    short ylHM,trck=48;
    short plyYL1=0,plyYL2=0,plyYL3=0,plyYL4=0;//Player 1 and [1,4]pons
    char die=rand()%6+1;
    while(plyYL1=0&&plyYL2=0&&plyYL3=0&&plyYL4=0){
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
            do{die=rand()%6+1;
            (plyYL1!=ylHM&&plyYL1!=0&&(plyYL1=plyYL1+die)<ylHM?plyYL1=plyYL1+die:
            (plyYL2!=ylHM&&plyYL2!=0&&(plyYL2=plyYL2+die)<ylHM?plyYL2=plyYL2+die:
            (plyYL3!=ylHM&&plyYL3!=0&&(plyYL3=plyYL3+die)<ylHM?plyYL3=plyYL3+die:
            (plyYL4!=ylHM&&plyYL4!=0&&(plyYL4=plyYL4+die)<ylHM?plyYL4=plyYL4+die:''))));
            }while(die==6);
        }else cout<<endl;
    }
    do{die=rand()%6+1;
        (plyYL1!=ylHM&&plyYL1!=0&&(plyYL1=plyYL1+die)<ylHM?plyYL1=plyYL1+die:
        (plyYL2!=ylHM&&plyYL2!=0&&(plyYL2=plyYL2+die)<ylHM?plyYL2=plyYL2+die:
        (plyYL3!=ylHM&&plyYL3!=0&&(plyYL3=plyYL3+die)<ylHM?plyYL3=plyYL3+die:
        (plyYL4!=ylHM&&plyYL4!=0&&(plyYL4=plyYL4+die)<ylHM?plyYL4=plyYL4+die:''))));
    }while(die==6);
}
