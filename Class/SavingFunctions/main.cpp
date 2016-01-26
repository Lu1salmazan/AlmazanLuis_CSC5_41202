/*Author: Luis Almazan
 *Date:01/11/16 8:37
 *Purpose:Power Function
 */

//System libraries
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//User libraries

//Global constant

//Function Prototypes
void Pow(int,int);
int main() {
    //variables to be used in time
    //Beggining and ending of library function V user function
    unsigned int begi,endi,begd,endd,loop=100000000;
    
    //Declare Variables and initialize them
    int x;//base of problem
    int y;//exponent of the problem
    int z;//the result of a^b
    
    //Input
    cout<<"Input a and b i.e for a^b?"<<endl;
    cin>>x>>y;
    
    //Calculation 
    begi=static_cast<unsigned int>(time(0));
    z=pow(x,y);
    endi=static_cast<unsigned int>(time(0));
    //Output
    cout<<"Our Function Result "<<x<<" "<<y<<" = "<<z<<endl;
    cout<<"The total time taken = "<<endi-begi<<" (secs)"<<endl;
    
    //Compare library power to function power
    begd=static_cast<unsigned int>(time(0));
    double dx=x;//copy into a double
    double dy=y;//copy into a double
    double dz;
    endd=static_cast<unsigned int>(time(0));
    
    //Call math library function
    dz=pow(dx,dy);
    //Output
    cout<<"Library Function Result "<<dx<<" "<<dy<<" = "<<dz<<endl;
    cout<<"The total time Taken = "<<endd-begd<<" (sec)"<<endl;
    
	return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                        Power Function                                      */
//Inputs
//a=>integer base
//
int pow(int a,int b){
    if(b<=0)return 1;
    if(b==1)return a;
    int abd2=pow(a,b/2);
    if(b%2)return abd2*abd2*a;  //if even
    return abd2*abd2;       //else odd

}