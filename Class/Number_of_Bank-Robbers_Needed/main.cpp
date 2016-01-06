/* 
 * File:   main.cpp
 * Author: Luis Almazan
 * Created on January 6, 2016, 8:12 AM
 * Purpose: Number of Drinks
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constant
const char  wtBill=1;         //Weight in grams
const float cnvLbs=1/453.5f;  //Conversion from grams to lbs     

//Function Prototypes

//Execution  Begin Here

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    unsigned int amtStl;     //Amount to steal
    unsigned short denom;    //Bill denomination
    unsigned char  wtPers=80;//Weight of person can carry in lbs
    unsigned char  nPerps;   //Number of perpetrators
    
    //Inputs the Number of coins
    cout<<"How much money would you like to acquire?"<<endl;
    cin>>amtStl;
    cout<<"What is the bill denomination desired?"<<endl;
    cin>>denom;
    
    //Calculate the dollar amount
    nPerps=cnvLbs*wtBill*amtStl/denom/wtBill+1;
    
    //Output the results
    cout<<"Amount Desired = $"<<amtStl<<endl;
    cout<<"Denomination Desired = $"<<denom<<endl;
    cout<<"Number of Individuals required on job ="<<static_cast<int>(nPerps)<<endl;
    //Exit stage right
    return 0;
}