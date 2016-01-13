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
    
    //Input
    cout<<"Input the value to comput the sqrt of?"<<endl;
    cin>>n;
    
    //Calculation 
    guess=n/2; //only perform once to start the process
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output
    cout<<"The Input value        = "<<n<<endl;
    cout<<"sqrt ( "<<n<<") = "<<sqrt(n)<<endl;
    cout<<"The first pass r      = "<<r<<endl;
    cout<<"The first pass guess = "<<guess<<endl;
    
    //Calculation 
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output
    cout<<"The Second pass r      = "<<r<<endl;
    cout<<"The Second pass guess = "<<guess<<endl;
    
    //Calculation 
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output
    cout<<"The third pass r      = "<<r<<endl;
    cout<<"The third pass guess = "<<guess<<endl;
    
    //Calculation 
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output
    cout<<"The Fourth pass r      = "<<r<<endl;
    cout<<"The Fourth pass guess = "<<guess<<endl;
    
    //Calculation 
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output
    cout<<"the Fifth pass r      = "<<r<<endl;
    cout<<"The Fifth pass guess = "<<guess<<endl;
    
    //Calculation 
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output
    cout<<"the Sixth pass r      = "<<r<<endl;
    cout<<"The Sixth pass guess = "<<guess<<endl;
    
    //Calculation 
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output
    cout<<"the Seventh pass r      = "<<r<<endl;
    cout<<"The Seventh pass guess = "<<guess<<endl;
    
    //Calculation 
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output
    cout<<"the Eighth pass r      = "<<r<<endl;
    cout<<"The Eighth pass guess = "<<guess<<endl;
    
    //Calculation 
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output
    cout<<"the Fifth pass r      = "<<r<<endl;
    cout<<"The Fifth pass guess = "<<guess<<endl;
    
    
    
    //Exit stage right
        
	return 0;
}