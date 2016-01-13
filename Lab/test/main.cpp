/*Author: Luis Almazan
 *Date:01/11/16
 *Purpose:Jack Pot
 */

//System libraries
#include <iostream>
using namespace std;

	//User libraries

	//Global constant

	//Function Prototypes

int main() {
	//Declare Variables and initialize them
    const char hrsWrkd,regRate=800,payChk;

	//Input
    cout<<"Enter Hours Worked"<<endl; //Hours worked
    cin>>hrsWrkd;
	//Calculation for Paycheck
    payChk=(hrsWrkd<=5?"$ 4000":
            (hrsWrkd<=8?8*regRate:
            ((hrsWrkd-8)*regRate*1.5)));

	//Output
    cout<<payChk<<endl;
    
	return 0;