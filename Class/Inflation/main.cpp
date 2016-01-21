/*
 * Author: Luis Almazan
 *Date:01/21/16 11:05
 *Purpose: inflation
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
    float price=0.25f;   //Initial Balance 
    float inflate=0.07f;
    float intRate;   // Interest rate /Year
    float rule72=0.72f/inflate;    //Rule of 72, Future Value= 2* Present value
    float infYear;                 //Interest Earned
    
    //Output the Table Heading
    cout<<"The Inflation rate = "<<intRate*100<<"%"<<endl;
    cout<<"At this Inflation year should double every ";
    cout<<rule72<<"Years"<<endl;
    cout<<"Year  Year  balance  Inflation"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    infYear=price*intRate;
    cout<<"  0  2016"<<setw(8)<<price<<setw(9)<<price*intRate<<endl;
    
    //calculate the savings
    price*=(1+intRate);
    for(int y=1,year=2017;y<=50;y++,year++){
        cout<<setw(4)<<y<<" "<<year<<"    "<<price<<"     "<<infYear<<endl;
        price*=(1+intRate);
    }

    //Exit stage right
        
	return 0;
}