/* 
 * File:   main.cpp
 * Author: Luis Almazan
 * Created on January 19, 2016, 9:30 AM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begin Here
int main(int argc, char** argv) {
    //Declare + initialize variables
    const unsigned char nterms=13;
    float etox=1,x;   //e^x.
    
    //Input the value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    for(int N=1;N<=nterms;N++){
        //Declare +initialize variables
        unsigned int factN=1;  //N and N
        
        //Calculate e^x with above factorial
        for(int i=1;i<=N; i++){
            factN*=i;
        }
        //Calculate e^x with the above factorial
        etox+=pow(x,N)/factN;
    }
    //Output
    cout<<"The factorial for "<<etox<<endl;

    
    //Exit Stage right
    return 0;
}

