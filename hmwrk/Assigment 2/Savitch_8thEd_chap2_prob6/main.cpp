/*Author: Luis Almazan
 *Date:01/11/16
 *Purpose:Jack Pot
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

    //User libraries

    //Global constant

    //Function Prototypes

int main() {
    //Declare Variables and initialize them
    const unsigned char MAXCAP=35;  //Max Capacity of the room
    unsigned short stsUtil;         //Sits utilized 
    char            delta;           //Difference between capacity and utilization
    
    //Input
    cout<<"How many sits are being utilized in BE200?"<<endl;
    cin>>stsUtil;
    
    //Calculation 
    delta=MAXCAP-stsUtil;
    
    //Output
    cout<<"Maximum Room Capcity of BE200 = "<<static_cast<int>(MAXCAP);
        cout<<" seats"<<endl;
        if(delta>=0){
            cout<<"class will be held ";
            cout<<static_cast<char>(delta)<<" available seats remain"<<endl;
            cout<<fixed<<setprecision(1)<<endl;
            cout<<"Percent capacity utilized = ";
            cout<<100.0f*stsUtil/MAXCAP<<"%"<<endl;
        }
        else{
            cout<<"Room capacity has been exeeded ";
            cout<<static_cast<char>(delta)<<" students need to leave!"<<endl;
        }
    //Exit stage right
        
	return 0;
}