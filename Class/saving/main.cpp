/*
 * Author: Luis Almazan
 *Date:01/21/16 11:05
 *Purpose: Saving
 */

//System libraries
#include <iostream>  //I/O
#include <iomanip>   

using namespace std;
//System libraries

//User libraries

//Global constant

//Function Prototypes

int main() {
    //State which solution its is
    cout<<"Fun look at saving and rule of 72"<<endl;
    cout<<"URl"<<endl;

    //Declare Variables
    float balance;   //Initial Balance 
    float intRate;   // Interest rate /Year
    float rule72=0.72f/intRate;    //Rule of 72, Future Value= 2* Present value
    float intErnd;                 //Interest Earned
    
    //Output the Table Heading
    cout<<"The Interest rate = "<<intRate*100<<"%"<<endl;
    cout<<"At this Interest Principle should double every ";
    cout<<rule72<<"Years"<<endl;
    cout<<"Year  Year  balance  Interest"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    intErnd=balance*intRate;
    cout<<"   0 2016"<<setw(8)<<balance<<setw(9)<<balance*intRate<<endl;
    
    //calculate the savings
    balance*=(1+intRate);
    for(int y=1,year=2017;y<=50;y++,year++){
        cout<<setw(4)<<y<<" "<<year<<"    "<<balance<<"     "<<intErnd<<endl;
        balance*=(1+intRate);
    }

    //Exit stage right
        
	return 0;
}