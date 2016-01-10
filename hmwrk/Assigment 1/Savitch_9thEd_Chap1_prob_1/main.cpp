
/* 
 * File:   main.cpp
 * Author: Luis Almazan
 * Created: on January 9, 2016, 10:32 PM
 * Purpose: Output product and sum
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begin here

int main(int argc, char** argv) {

    //Declare and Initialize variables
    int frsNum,secNum, ansSum,ansProd;
    
    //Input the number of the user
    
    cout<<"Enter Your First Number"<<endl; //Ask user to enter first Number
    cin>>frsNum;
    cout<<"Enter Your Second Number"<<endl; //Ask User to enter Second Number
    cin>>secNum;
  
    //Calculate the user Inputs
    ansSum=frsNum+secNum;
    ansProd=frsNum*secNum;
    
    //Output Results
    cout<<"The Sum is = "<<ansSum<<endl;
    cout<<"The Product is ="<<ansProd<<endl;
    
    //Exit stage Right
    return 0;
}

