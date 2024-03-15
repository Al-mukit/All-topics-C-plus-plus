#include<iostream>
#include<conio.h>
using namespace std;

void addition(int,int);
void subtraction (int,int);
void multiplication(int,int);
void division(int,int);

int main()
{
    addition(10,30);
    subtraction(66,66);
    multiplication(11,11);
    division(55,4);

    cout<<"All functions are called"<<endl;

    getch();
}

void addition(int a,int b)
{
    int sum = a+b;
    cout<<"Sum = "<<sum<<endl;
}

void subtraction(int a,int b)
{
    int sub = a-b;
    cout<<"Sub = "<<sub<<endl;
}
void multiplication(int a,int b)
{
    int mul = a-b;
    cout<<"mul = "<<mul<<endl;
}
void division(int a,int b)
{
    float div= (float) a/b;
    cout<<"div = "<<div<<endl;
}
