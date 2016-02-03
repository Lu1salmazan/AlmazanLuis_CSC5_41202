/*
 *Author: Luis Almazan
 *Date:01/20/16, 7:43AM
 *Purpose: Savitch 9thEd chapter 5 problem 1
 */

//System libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User libraries

//Global constant

//Function Prototypes
float avrge(int,int,int,int);
float stnDev(int,int,int,int);

int main() {
    //declare and initialize variables
    int s1,s2,s3,s4;//The user values for each number
    float avrg;
    //Input
    cout<<"Savitch 9thEd chapter 5 problem 1"<<endl;
    cout<<"Finding the standard deviation"<<endl;
    cout<<"Enter the four numbers to find the standard deviation to"<<endl;
    cin>>s1>>s2>>s3>>s4;
    cout<<endl;
    //Operation
    
    //Output
    cout<<"Your Average is "<<avrge(s1,s2,s3,s4)<<endl;
    cout<<"Your Stander deviation is "<<stnDev(s1,s2,s3,s4)<<endl;
    
    //Exit
    
return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                            Finding the average  
//******************************************************************************
float avrge(int s1, int s2,int s3,int s4){
    int avrg=(s1+s2+s3+s4)/4.0f;
    return avrg;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Standard deviation
//******************************************************************************
float stnDev(int s1,int s2,int s3,int s4){
    int vstDev=pow((s1-avrge(s1,s2,s3,s4)),2)+pow((s2-avrge(s1,s2,s3,s4)),2)
                +pow((s3-avrge(s1,s2,s3,s4)),2)+pow((s4-avrge(s1,s2,s3,s4)),2);
    int stDev=sqrt(vstDev);
    return vstDev;
}