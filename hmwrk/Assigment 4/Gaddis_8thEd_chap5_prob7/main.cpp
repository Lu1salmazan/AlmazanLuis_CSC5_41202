/*Author: Luis Almazan
    Date:01/20/16, 11:15AM
    Purpose: Table of salary double at a penny
        Double is required because number of significant digits
        Anything larger than $99,999.00
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
    //Declare + initialize veriables
    unsigned int salary=1;  //Salary starting at a penny
    double totPay=salary;           //sum of salary
    char day;
    
    //Loop to generate Salary Table and Total Paid
    cout<<" Day        $Salary          $Total"<<endl;
    cout<<setw(4)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int day=2;day<=31;day++){
        salary*=2;   
        totPay+=salary;
        cout<<setw(4)<<day<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
    }
    //Input
    
    //Operation
    
    //Output
    
    //Exit
    
    return 0;
}