/*Author: Luis Almazan
 *Date:01/20/16
 *Purpose: Savtch 7ed ch3 prb1 R,P,S
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
    char comptr;       //PC's play
    //Input
        
    //PC generation
    do{
        comptr=rand()%4+80;
    }while(comptr=='Q');
            
    //Output
    cout<<"The Computer Played "<<comptr<<endl;
    //Exit stage right
        
	return 0;
}