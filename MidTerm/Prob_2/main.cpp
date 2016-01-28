/* 
 * File:   main.cpp
 * Author: Luis Almazan
 * Created on January 28, 2016, 10:22 AM
 * Purpose: * per number of places
 */

#include <iostream>
#include <iomanip>
using namespace std;
//System libraries

//User libraries

//Global Constants

//Function prototypes
int main(int argc, char** argv) {
    //Declare Variables
    int n1000s,n100s,n10,n1s; //Number of Places
    float numIN;              //Number input by the user
    char acci=42;           //set a variable to the multiple signal
    //Input
    cout<<"Please Enter a number no more than you thousandths place."<<endl;
    cin>>numIN;
    
    //Calculation
    if(numIN>=1000){
        numIN=numIN/1000;
        cout<<setprecision(1)<<numIN<<" "<<
                (numIN==1?('*':
                numIN==2?('**':
                numIN==3?('***':
                numIN==4))))
    }
    return 0;
}

