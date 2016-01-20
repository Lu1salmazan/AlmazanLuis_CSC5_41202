/*Author: Luis Almazan
 *Date:01/20/16, 10:38AM
 *Purpose: Gaddis_8thEd_chap12
 */

//System libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User libraries

//Global constant

//Function Prototypes

int main() {
    cout<<"The Fehrenheit to celsius table"
    //Declare + initialize veriables
    float slope=5.0f/9;//slope of the liner temperature conversion C/F
    char intrcpt=-32;    //Scale 9/5 deg c
    unsigned char c1=0,c2=32,f1=32,f2=212; //Freezing to boiling points
    
    //Loop to generate the Degree Celsius 
    cout<<"Fahrenheit Celsius Celsius"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int f=f1;f<=f2;f++){
        float ceq=slope*(f+intrcpt);
        float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
        cout<<setw(8)<<f<<setw(8)<<ceq<<setw(8)<<cintrp<<endl;
    }
    //Input
    
    //Operation
    
    //Output
    
    //Exit
    
    return 0;
}