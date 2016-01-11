/* 
     File:   main.cpp
    Author: Luis Almazan
    Created: on January 11, 2016, 8:59Am
    Purpose: Display table and compare swaps
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
  
 //Global Constant

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare an initialize variables
    bool x=true;
    bool y=true;
    int a=2,b=3,temp=a;
    
    //Create Heading
    cout<<"X Y !X!Y X&&Y X||Y X^Y (X^Y)^Y (X^Y)^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //First Row
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"     ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<" "<<endl;
    
    //Second Row
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"     ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<" "<<endl;
    
    //Third Row
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"     ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<" "<<endl;
    
    //Fourth Row
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"     ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<" "<<endl;
    
    //Swap with temp
    cout<<""<<endl;
    cout<<"Swap with temp"<<endl;
    cout<<"Before Swap: a="<<a<<" and b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After Swap: a="<<a<<" and b="<<b<<endl;
    
    //Swap with Exclusive or
    cout<<""<<endl;
    cout<<"Swap with Exclusive"<<endl;
    cout<<"Before Swap: a="<<a<<" and b="<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After Swap: a="<<a<<" and b="<<b<<endl;
            
    //Exit Stage Right        
    return 0;
}
