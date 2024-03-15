#include<iostream>
#include<conio.h>
using namespace std;
int x = 10;// Global Variable
void display()
{
    cout<<"Inside the display function value of x is :  "<<x<<endl;
}


int main()
{
    //int x = 10;//Local variable
    cout<<"Inside the main function value of x is :  "<<x<<endl;
    display();

}
