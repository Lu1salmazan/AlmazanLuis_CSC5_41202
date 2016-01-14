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
    float qwntity=0.5f;  //A value to add repeatedly
    float sum=0;         //The result of a repetitive addition 
    int nLoops=10000000; //Number of times to loop
    float answer;        //The computed answer
    
    //Input
    for(int i=1;i<=nLoops;i++){
        sum+=qwntity;
    }
    
    //Calculation 
    answer=nLoops*qwntity;
    
    //Output
    cout<<"The product answer  = "<<answer<<endl;
    cout<<"The sum answer      = "<<sum<<endl;
    cout<<"The percent error   = "<<(answer-sum)/answer*100<<"%"<<endl;
    
    //Exit stage right
        
	return 0;
}