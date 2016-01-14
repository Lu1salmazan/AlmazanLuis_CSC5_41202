/*Author: Luis Almazan
 *Date:01/11/16
 *Purpose: Calculate square root by Newton's Method
 */

//System libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

    //User libraries

    //Global constant

    //Function Prototypes

int main() {
    //Declare Variables
    float n;   //Input the value to obtain root
    float r, guess; //intermediate values which asymtotically approach sqrt(n)
    float tol=0.001f;  //Accuracy of the result/tolerance
    int counter=0;    //See how many loops are done
    
    //Input
    cout<<"Input the value to comput the sqrt of?"<<endl;
    cin>>n;
    
    //Calculation 
    guess=n/2; //only perform once to start the process
    
    //out
    cout<<"The Input value  = "<<n<<endl;
    cout<<"sqrt ( "<<n<<")     = "<<sqrt(n)<<endl;
    cout<<""<<endl;
    
    //Calculation 
    for(counter=0;abs((r-guess)/guess)*100>tol;(guess+r)/2)
        
    //Output
    cout<<"The r          = "<<r<<endl;
    cout<<"The Guess      = "<<guess<<endl;
    cout<<"The Loop executed "<<counter<<endl;
        
    //Exit stage right
        
	return 0;
}