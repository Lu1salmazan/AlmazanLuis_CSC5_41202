/* Date: 10/07/16 9:36
 *purpose: Car Payment
 *Athour: Luis Almazan
 */
  
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
//User Libraries
 
//Global Constant
unsigned short CNVPRC=12*100;
//Function Prototypes
 
//Execution Begin Here
 
int main() {
  
 //Declare and Initialize variables
    unsigned short loanAmt;
    unsigned short intRate;
    unsigned short nMonths;
    float          Payent;
    float          intrest;
    
 //Input Data
    cout<<"Car Loan Payment Calculation"<<endl;
    cout<<"Enter Loan Amount For Car"<<endl;
    cin>>loanAmt;
    cout<<"Enter The Number Payment"<<endl;
    cin>>nMonths;
    cout<<"Enter Your Interest Rate in percent"<<endl;
    cin>>intRate;
    
 //Calculate Payment
    float temp=static_cast<float>(pow(1+static_cast<float>(intRate)/CNVPRC,nMonths));
    Payent=temp*intRate/CNVPRC*loanAmt/(temp-1);
    intrest=nMonths*Payent-loanAmt;
            
 //Output the results
    cout<<endl<<"Car Loan Payment Results"<<endl;
    cout<<"Loan Amount for Car       = $"<<loanAmt<<endl;
    cout<<"Number Of Monthly Payment = $"<<nMonths<<endl;
    cout<<"Interest Rate             = "<<intRate<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Payment            = $"<<Payent<<endl;
    cout<<"Interest Paid              = $"<<intrest<<endl;
    
 
 //Exit Stage Right   
    return 0;
}