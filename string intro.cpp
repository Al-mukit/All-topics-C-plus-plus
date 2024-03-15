#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
    char name[30];
    cout<<"Enter your name"<<endl;
    gets(name);// cin>> can't able to take space
    cout<<name;

    getch();
}
