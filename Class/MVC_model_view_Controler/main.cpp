/* 
 * File:   main.cpp
 * Author: rcc
 * Created on January 28, 2016, 10:09 AM
 * Purpose: Storing in Array
 */

#include <iostream>
#include <iomanip>
using namespace std;
//System libraries

//User libraries

//Global constants
const int PERCENT=100;
//Function prototype

int main(int argc, char** argv) {
        //Declare Variables and initialize 
    float pv=100; //Present value in Dollars $'s
    int iRate=5; //Interest rate in percent %
    int nComp=12; //Number of compounding periods in years
    float fv=pv;
    
    //Output heading
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year Savings"<<endl;
    for(int year=0;year<=nComp;year++){
        int ifv=(fv+0.005)*PERCENT;//shifted 2 places for pennies
        fv=static_cast<float>(ifv)/PERCENT;//Convert back
        cout<<setw(4)<<year<<setw(7)<<fv<<endl;
        fv=(1+static_cast<float>(iRate)/PERCENT);
    }
        
    //The MVC concept separates the view from the model
    //Declare the array and initialize
    float balance[nComp+1];
    balance [0]=pv;
    //Calculate the model
    for(int year=0;year<nComp;year++){
        int ifv=balance[year]*PERCENT;//shifted 2 places for pennies
        balance[year]=static_cast<float>(ifv)/PERCENT;//Convert back
        balance[year+1]=balance[year]*(1+static_cast<float>(iRate)/PERCENT);
    }
    
    //Display or view of the model
    cout<<"Year Savings"<<endl;
    for(int year=0;year<nComp;year++){
        cout<<balance[year+1]=balance[year]*(1+static_cast<float>(iRate)/PERCENT)<<endl;

	return 0;
}


    return 0;
}

