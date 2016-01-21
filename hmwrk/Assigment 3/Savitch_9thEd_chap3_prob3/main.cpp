/*
 * Author: Luis Almazan
 *Date:01/20/16 8:24
 *Purpose: Roman numeral conversion
 */

//System libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;
//System libraries

//User libraries

//Global constant

//Function Prototypes

int main() {
    //State which solution its is
    cout<<"Solution to savitch 9thEd Chap3 Prob 3"<<endl;
    cout<<"The Roman Numeral Conversion Program"<<endl;
    
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned short number=rand()%2001+1000;      //[1000,3000]
    unsigned char n1000s,n100s,n10s,n1s;         //Number of 10^x's
    cout<<endl<<"The Number to Convert = "<<number<<endl;
    
    //calculate the number of 1k's 100's 10's 1's
    n1000s =(number-number%1000)/1000;  //Number of 1000's
    number=(number-n1000s*1000);        //Subtract off 1000's   
    n100s =(number-number%100)/100;     //Number of 100's
    number=(number-n100s*100);          //Subtract off 100's  
    n10s  =(number-number%10)/10;       //Number of 10's
    n1s  =(number-n10s*10);             //number of 10's

    //Output Result
        cout<<"The Number of 1000's = "<<static_cast<int>(n1000s)<<endl;
        cout<<"The Number of 100's = "<<static_cast<int>(n100s)<<endl;
        cout<<"The Number of 10's = "<<static_cast<int>(n10s)<<endl;
        cout<<"The Number of 1's = "<<static_cast<int>(n1s)<<endl;
        
    //Output the 1000's
        switch(n1000s){
            case 3: cout<<"M";
            case 2: cout<<"M";
            case 1: cout<<"M";
        }
    //Output the 100's
        switch(n100s){
            case 9: cout<<"CM";break;
            case 8: cout<<"DCCC";break;
            case 7: cout<<"DCC";break;
            case 6: cout<<"DC";break;
            case 5: cout<<"D";break;
            case 4: cout<<"CD";break;
            case 3: cout<<"C";
            case 2: cout<<"C";
            case 1: cout<<"C";
                    
        }
        //Output the 10's
        switch(n10s){
            case 9: cout<<"XC";break;
            case 8: cout<<"LXXX";break;
            case 7: cout<<"LXX";break;
            case 6: cout<<"LX";break;
            case 5: cout<<"VL";break;
            case 4: cout<<"XL";break;
            case 3: cout<<"X";
            case 2: cout<<"X";
            case 1: cout<<"X";                   
        }
        //Output the 1's
        switch(n1s){
            case 9: cout<<"IX";break;
            case 8: cout<<"VIII";break;
            case 7: cout<<"VII";break;
            case 6: cout<<"VI";break;
            case 5: cout<<"V";break;
            case 4: cout<<"IV";break;
            case 3: cout<<"I";
            case 2: cout<<"I";
            case 1: cout<<"I";
        }
    //Exit stage right
        
	return 0;
}