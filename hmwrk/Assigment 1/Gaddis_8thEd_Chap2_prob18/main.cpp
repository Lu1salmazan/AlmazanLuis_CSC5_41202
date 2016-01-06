/* 
 * File:   main.cpp
 * Author: Luis Almazan
 * Created on January 6, 2016, 8:12 AM
 * Purpose: Military Calculation
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constant
const char cnvPerc=100;//Conversion to percentage
//Function Prototypes

//Execution  Begin Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short cstSrvy=16500;  //Customer Surveyed
    unsigned char  peDrnk=15;       //Percentage surveyed energy drinkers
    unsigned char  pcDrnk=58;       //Percentage surveyed energy citrus drinkers
    unsigned short neDrnk,ncDrnk;   //Number of energy and citrus energy drinkers
    
    //Calculate the percentage for the military budget
    neDrnk=cstSrvy*peDrnk/cnvPerc;
    ncDrnk=cstSrvy*pcDrnk/cnvPerc;
    
    //Output the results
    cout<<"Number of Customer Surveyed = "<<cstSrvy<<endl;
    cout<<"Percent of Energy Drinkers"<<static_cast<int>(peDrnk)<<"%"<<endl;
    cout<<"Percent of Citrus Drinkers"<<static_cast<int>(pcDrnk)<<"%"<<endl;
    cout<<"Number of Energy Drinkers = "<<neDrnk<<endl;
    cout<<"Number of citrus Drinkers = "<<ncDrnk<<endl;

    return 0;
}