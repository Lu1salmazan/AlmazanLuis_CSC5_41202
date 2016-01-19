/* 
 * File:   main.cpp
 * Author: Luis Almazan
 * Created on January 19, 2016, 8:35 AM
 * Purpose: Menu
 */

#include <iostream>

using namespace std;

//User  Libraries

//Global Constant

//Function Prototypes 

//Execution Begin Here

int main(int argc, char** argv) {
    //Declare and Initialize variables 
     unsigned short nSoltn;    //problem/solution to display
     bool reDsply=true;
    //Input 
     cout<<"Assigment 3 Problems set"<<endl;
     cout<<"Type 1 to Display Problem 1"<<endl;
     cout<<"Type 2 to Display Problem 2"<<endl;
     cout<<"Type 3 to Display Problem 3"<<endl;
     cin>>nSoltn;
     
    //Menu to display solution
     do{
             //Input 
             cout<<"Assigment 3 Problems set"<<endl;
             cout<<"Type 1 to Display Problem 1"<<endl;
             cout<<"Type 2 to Display Problem 2"<<endl;
             cout<<"Type 3 to Display Problem 3"<<endl;
             cout<<"Type anything else to exit "<<endl<<endl;
             cin>>nSoltn;
             //solution to all problems
             switch(nSoltn){
                case 1:{
                        cout<<endl<<"Solution savitch 8thEd Chap3 Prob 10"<<endl;
                        cout<<"The Fibonacci sequence"<<endl;
                        //Declare Variables
                        unsigned int fi,fim1,fim2;  //Designations in the sequence
                        unsigned short nTerms;      //Number of terms in the sequence
                        unsigned short counter;   //Current position in the sequence
                        //Initialize the sequence
                        fim2=fim1=1;
                        //Input the number of terms in the sequence
                        cout<<"Input the number of terms in the sequence"<<endl;
                        cin>>nTerms;
                        //Output and Calculate the output required 
                        if(nTerms==1){
                            cout<<"Term "<<nTerms<<"in the sequence = ";
                            cout<<fim2<<endl;
                        }else if(nTerms==2){    
                         cout<<"Term "<<nTerms<<"in the sequence = ";
                         cout<<fim2<<endl;
                        }else{
                            do{
                                fi=fim1+fim2;
                                counter++;
                                fim2=fim1;
                                fim1=fi;
                            }while(counter<nTerms);
                            cout<<"Term "<<nTerms<<"in the sequence ="
                            <<fi<<endl<<endl;
                            }
                        }
                    break;
                
                case 2:{
                        cout<<"Solution to problem 2"<<endl;
                    break;
                }
                case 3:{
                        cout<<"Solution to problem 3"<<endl;
                    break;
                }    
                default :{
                        cout<<"Exiting The program"<<endl;
                        reDsply=false;
                 }
             }while(reDsply);
     
                     
    //Calculate
    
    //Output the results
    
    //Exit stage right
    
    return 0;
}
