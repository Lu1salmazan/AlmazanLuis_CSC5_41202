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
	  float jckpt,lmpSum=0.62,aftTax=0.52,mrige=0.5,totamnt;

	//Input
	cout<<"Enter The JackPot Amount"<<endl;
	cin>>jckpt;

	//Calculation of Jackpot
	totamnt=jckpt*lmpSum*aftTax*mrige;

	//Output
	cout<<"The total amount of Money you are getting is "<<totamnt<<endl;

	return 0;
}