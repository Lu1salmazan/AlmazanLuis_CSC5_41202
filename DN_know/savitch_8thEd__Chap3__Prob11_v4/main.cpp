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
    float tol=1e-6f, term=1,etox=1,x;   //e^x.
    float nTerm=1; //Counter to determine how many terms
    
    //Input the value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    do{
        term*=x/nTerm++;
        etox+=term;
    }while(term>tol);
    
    //output the results
    cout<<"The exact value of e^"<<x<<exp(x)<<endl;
    cout<<"The Number of Terms it took to approx e^"<<x<<nTerm<<endl;
    cout<<"The approx value of e^"<<x<<"="<<etox<<endl<<endl;
    
    //Exit Stage right
    return 0;
}

