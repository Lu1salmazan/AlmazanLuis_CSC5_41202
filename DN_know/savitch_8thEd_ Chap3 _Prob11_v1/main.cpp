/* 
 * File:   main.cpp
 * Author: Luis Almazan
 * Created on January 19, 2016, 9:30 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables + initalize
    unsigned int factN=1, N;  //N and N!
    
    //Input the number of terms in the sequence
    cout<<"Enter the number you waould like to compute the factoial n!"<<endl;
    cout<<"the limit of this calculation is <=13"<<endl;
    cin>>N;
    
    //Calculate the number of terms 
    for(int i=1;i<=N;i++){
        factN*=i;
    }
    
    //Output or calculate the output required
    cout<<N<<"! "<<factN<<endl;
    
    //Exit Stage right
    return 0;
}

