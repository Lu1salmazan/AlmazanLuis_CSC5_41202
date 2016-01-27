/*
 * Author: Luis Almazan
 *Date:01/11/16 11:06
 *Purpose:Craps
 */

//System libraries
#include <iostream> //I/O
#include <cstdlib>  //stand and rand function
#include <ctime>    //time to set the random number seed
#include <fstream>  //File I/O
#include <iomanip>  //Formating
using namespace std;

//User libraries

//Global constant

//Function Prototypes
int main() {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //frequency of dies roles
    int GAMES;
    const unsigned int LIMIT=1500; //Table single bet limit=$1500
    unsigned short wins=0,losses=0,games;
    unsigned int totRoll,cntRoll=0,maxRoll=0;
    float wallet,bet;
    char yes;
    ofstream out;
    
    //Open the file
    out.open("CardGame.dat");
    
    //Input data
    cout<<"How many games of craps would you like to play"<<endl;
    cout<<"Utilize a number between 10,000 and 40,000"<<endl;
    cin>>games;
    while(games<10000||games>40000){
        cout<<"How many games of craps would you like to play"<<endl;
        cout<<"Utilize a number between 10,000 and 40,000"<<endl;
        cin>>games;
    }
    cout<<"How much do you have to gamble$?"<<endl;
    cin>>wallet;
    cout<<"How much would you like to bet/games$?"<<endl;
    cin>>bet;
    cout<<"If you win would you like to double your bet"<<endl;
    //Modify the bet based upon the limit
    bet=bet<LIMIT?bet:LIMIT;
    //Throw the dice
    for(int game=1;game<=GAMES;game++){
        cntRoll=0;
        char die1=rand()%6+1;//Number between [1,6]
        char die2=rand()%6+1;//Number between [1,6]
        char sum=die1+die2;
        cntRoll++;//increment for every Roll
        if(sum==2||sum==3||sum==12){
            losses++;
            wallet-=bet;
        }
        else if (sum==7||sum==11){
            wins++;
            bet=(yes=='y')?2*bet:bet;
            wallet+=bet;
            bet=bet<LIMIT?bet:LIMIT;
        }
        else{
            //roll again
            bool kpRln=true;
            do{
                die1=rand()%6+1;//Number between [1,6]
                die2=rand()%6+1;//Number between [1,6]
                char sum2=die1+die2;
                cntRoll++;//increment for every Roll
                switch(sum==sum2){
                    case true:{wins++;
                    wallet+=bet;
                    kpRln=false;}
                    default:
                if(sum2==7){losses++;
                wallet-=bet;
                kpRln=false;}
                }
            }while(kpRln);
        }
        totRoll+=cntRoll;
        if(cntRoll>totRoll);
    }
    //Output
    cout<<"Out of "<<games<<" Played"<<endl;
    cout<<"You won "<<wins<<" games and"<<endl;
    cout<<"you lost "<<losses<<" games"<<endl;
    cout<<"Percentage wise"<<endl;
    cout<<"Your wins and losses total = "<<wins+losses<<endl;
    cout<<"You won "<<100.0f*wins/games<<" % games and"<<endl;
    cout<<"you lost "<<100.0f*losses/games<<" % games"<<endl;
    cout<<"The average roll per game = "<<static_cast<float>(totRoll)/games<<endl;
    cout<<"The maximum roll per game = "<<totRoll<<endl;
    cout<<"My Wallet Contains $"<<wallet<<endl;
    cout<<"My Bets were = $"<<bet<<endl;
    
    //Output
    out<<"Out of "<<games<<" Played"<<endl;
    out<<"You won "<<wins<<" games and"<<endl;
    out<<"you lost "<<losses<<" games"<<endl;
    out<<"Percentage wise"<<endl;
    out<<"Your wins and losses total = "<<wins+losses<<endl;
    out<<"You won "<<100.0f*wins/games<<" % games and"<<endl;
    out<<"you lost "<<100.0f*losses/games<<" % games"<<endl;
    out<<"The average roll per game = "<<static_cast<float>(totRoll)/games<<endl;
    out<<"The maximum roll per game = "<<totRoll<<endl;
    out<<"My Wallet Contains $"<<wallet<<endl;
    out<<"My Bets were = $"<<bet<<endl;
    
	return 0;
}