/* 
 * File:   main.cpp
 * Author: Luis Almazan
 * Created on January 7, 2016, 10:48 AM
 * Purpose: How far those it drop
 */

#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random Function location
#include <cmath>      //Math function
#include <ctime>      //Time toset the random seed
#include <iomanip>    //Format Library
#include <fstream>    //Reading software

using namespace std;

//User Libraries

//Global Constant
const float GRAVITY=32.174f;   // Sea Level Earth Acceleration Constant ft/sec^2

//Function Prototypes

//Execution  Begin Here

int main(int argc, char** argv) {
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    ofstream out;               //Declare a file stream object called out
    float drpTime,distance;     //Time in sec and Distance in feet
    
    //Inputs the time a random number
    drpTime=rand()%11+10;       //[10,20]secs  
    const int SIZE=21;
    char fileNam[SIZE]="DropDistance.dat";
    out.open(fileNam);
    
    //Calculate the Distance
    distance=0.5f*GRAVITY*drpTime*drpTime;
    
    //Output the results
    cout<<"Drop Time ="<<drpTime<<"Sec"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<"Free Fall Distance ="<<setw(9)<<distance<<"(ft)"<<endl;
    
    //Calculate the dollar amount
    distance=0.5f*GRAVITY*pow(drpTime,2);
    
    //Output the results
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<"Free Fall Distance Pow ="<<setw(10)<<distance<<"(ft)"<<endl;
    
    //Calculate the dollar amount
    distance=0.5f*GRAVITY*exp(2*log(drpTime));
    
    //Output the results
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<"Free Fall Distance log ="<<setw(10)<<distance<<"(ft)"<<endl;
    
    //Output the results
    out<<fixed<<setprecision(3)<<showpoint;
    out<<"Free Fall Distance log ="<<setw(10)<<distance<<"(ft)"<<endl;
    
    //Exit stage right
    out.close();
    
    return 0;
}