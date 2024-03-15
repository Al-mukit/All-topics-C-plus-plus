#include<iostream>
#include<conio.h>
#include<cstdlib>       // for rand()
using namespace std;

int main()
{
     while(1)
     {
             int guessNumber,RandomNumber;
    cout<<"Enter your guess between 1 to 5 : "<<endl;
    cin>>guessNumber;
    RandomNumber = rand()%5+1;


    if(guessNumber==RandomNumber){
        cout<<"You won"<<endl;

        }
    else
        {
        cout<<"You lost ---try again!!"<<endl;
        cout<<"The Random number was : "<<RandomNumber<<endl;

        }
        getch();

     }
}
