/* 
 * File:   main.cpp
 * Author: rcc
 * Created on January 27, 2016, 9:58 AM
 * purpose: X shaped numbers
 */

#include <iostream>  //I/O
#include <iomanip>   //Format
using namespace std;
//system Libraries

//User Libraries

//Global Constants

//Function Prototypes

int main(int argc, char** argv) {
    //Declare and initialize variable
    short xN;              //The number input by the user
    short stktr=1,strktr2; //Diagnal format
    short contr;           //
    
    //Input
    cout<<"This will create an X of what ever value in descending";
    cout<<"order from left to right."<<endl;
    cout<<"Now please enter the number and hint return."<<endl;
    cin>>xN;
    cout<<""<<endl;
    
    strktr2=xN;
    contr=1;
    //Calculation
    for(int i=0;xN>i;xN--)
        cout<<setw(stktr++)<<xN<<setw((strktr2--)*2)<<contr++<<endl;
    //Output
    
    
    return 0;
}

