/*
 * Author: Luis Almazan
 *Date:01/11/16 11:06
 *Purpose:Craps
 */

//System libraries
#include <iostream>//I/O
#include <cstdlib>  //stand and rand function
#include <ctime>   //time to set the random number seed
using namespace std;

//User libraries

//Global constant

//Function Prototypes
int main() {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //variables to be used in time
    const unsigned short GAMES=36000;//Max number of throws
    //frequency of dies roles
    char die1,die2,sum;
    unsigned short frq2=0,frq3=0,frq4=0,frq5=0,frq6=0;
    unsigned short frq7=0,frq8=0,frq9=0,frq10=0,frq11=0,frq12=0;
    unsigned short wins=0,losses=0;
    //Input data
    
    //Throw the dice
    for(int game=1;game<=GAMES;game++){
        char die1=rand()%6+1;//Number between [1,6]
        char die2=rand()%6+1;//Number between [1,6]
        char sum=die1+die2;
        if(sum==2||sum==3||sum==12)losses++;
        else if (sum==7||sum==11)wins++;
        else{
            //roll again
            bool kpRln=true;
            do{
                die1=rand()%6+1;//Number between [1,6]
                die2=rand()%6+1;//Number between [1,6]
                char sum2=die1+die2;
                if(sum==sum2){wins++;kpRln=false;}
                if(sum2==7){losses++;kpRln=false;}
            }while(kpRln);
        }
    }
    //Output
    cout<<"Out of "<<GAMES<<" Played"<<endl;
    cout<<"You won "<<wins<<" games and"<<endl;
    cout<<"you lost "<<losses<<" games"<<endl;
    cout<<"Percentage wise"<<endl;
    cout<<"Your wins and losses total = "<<wins+losses<<endl;
    cout<<"You won "<<100.0f*wins/GAMES<<" % games and"<<endl;
    cout<<"you lost "<<100.0f*losses/GAMES<<" % games"<<endl;
	return 0;
}