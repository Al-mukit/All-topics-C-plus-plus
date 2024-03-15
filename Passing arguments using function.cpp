#include<iostream>
    *num = 20;
#include<conio.h>
using namespace std;

void display(int *num)
{
}

int main()
{
    int x=10;
    cout<<"Before calling the value x = "<<x<<endl;
    //display(x);// pass by value
    display(&x);//pass by reference
    cout<<"After calling the value x = "<<x<<endl;
}
