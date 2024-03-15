#include<iostream>
#include<conio.h>
using namespace std;

// We need a base case to stop this

int factorial(int n)
{
    if(n==1)
    {
       return 1;
    }
    else
    {
        return n*factorial(n-1);
    }

}

int main()
{

    int value = factorial(4);
    cout<<value;



    getch();
}

//EXM : Fibonacci series,Factorial
