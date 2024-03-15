#include<iostream>
#include<conio.h>
using namespace std;

void display(int a = 50,int b=77)// Overwrite korbeeee
{
    cout<<a<<endl;
    cout<<b<<endl;
}

int main()
{
    cout<<"For 1st function : "<<endl;
    display();
    cout<<"For 2nd function : "<<endl;
    display(15);
    cout<<"For 3rd function : "<<endl;
    display(33,55);



    getch();
}
