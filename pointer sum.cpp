#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1=22,num2=30;
    int *p1,*p2;
    p1 = &num1;
    p2 = &num2;
    int sum = *p1+*p2; // * is used for pointer variable value.
    cout<< sum;

    getch();
}
