#include <iostream>
#include <random>

using namespace std;

int main()
{
    // Create a random number generator engine (using the default generator)
    random_device rd; // Seed the generator with a random device
    default_random_engine gen(rd());

    // Define the range
    int lower_bound = 1;
    int upper_bound = 1000;

    // Create a uniform distribution within the specified range
    uniform_int_distribution<int> distribution(lower_bound, upper_bound);
    cout<<endl;
    cout<<"Welcome to Number Guessing game !!"<<endl<<endl;
    cout<<"In this game computer will randomly generate a number between 1 to 1000 both inclusive."<<endl;
    cout<<"You have to guess the number."<<endl;
    cout<<"For every guess computer will tell whether "<<endl;
    cout<<"->you guess the correct number or"<<endl<<"->your guess is smaller then random number or"<<endl<<"->your guess is higher then random number "<<endl;
    cout<<endl;
    while(true){
        //setting of random number by computer
        int randomnumber=distribution(gen);
        cout<<"computer have setted its random number succesfully now it's your time to guess it."<<endl;
        
        int guess=0;
        int count=0;//storing number of guesses user taken
        while(guess!=randomnumber){
            //giving feedback
            if(count!=0){
                if(guess==randomnumber){break;}
                else if(guess<randomnumber){cout<<"Your guess is low"<<endl;}
                else {cout<<"Your guess is high"<<endl;}
            }
            //taking input from user
            cout<<"Enter your guess below"<<endl;
            cin>>guess;
            count++;
        }
        cout<<"Congratulations!! You have find the random number in "<<count<<" counts"<<endl;
        bool playagain;
        while(true){
            cout<<"Enter 0 to exit game 1 to play again"<<endl;
            int inputuser;
            cin>>inputuser;
            if(inputuser==0){playagain=false;break;}
            else if(inputuser==1){playagain=true;break;}
            else{cout<<"Please enter a valid input"<<endl;}
            }
            if(playagain){continue;}
            else{break;}
    }
}