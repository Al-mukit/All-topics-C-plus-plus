#include<iostream>
#include<conio.h>
using namespace std;

int addition(int,int); // Function Prototype

int main()
{
    int result = addition(10,20);
    cout<< result;

    getch();
}

int addition (int a,int b)
{
    int sum = a+b;
    return sum;
}
