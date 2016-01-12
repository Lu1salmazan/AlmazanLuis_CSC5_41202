/* 
 * File:   main.cpp
 * Author: Luis Almazan
 * Created on January 6, 2016, 8:12 AM
 * Purpose: Coin Conversion
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constant
const char  cnvQrtr=25;  //Cents per Quarter
const char  cnvDime=10;  //Cents per Dimes     
const char  cnvNikl=5;   //Cents per Nickel
const char  cnvPndl=100;  //Conversion from pennies to dollars
//Function Prototypes

//Execution  Begin Here

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    unsigned short  nQrtr,nNikl,nDime;    //Declare inputs, number of Q,D,N
    unsigned short total;                 //total
    
    //Inputs the Number of coins
    cout<<"How many quarters do you have 0-9"<<endl;
    cin>>nQrtr;
    cout<<"How many dimes do you have 0-9"<<endl;
    cin>>nDime;
    cout<<"How many Nickels do you have 0-9"<<endl;
    cin>>nNikl;
               
    //Calculate the dollar amount
    total=cnvQrtr*nQrtr+cnvDime*nDime+cnvNikl*nNikl;
    //Output the results
    cout<<total<<" cents"<<endl;

    return 0;
}