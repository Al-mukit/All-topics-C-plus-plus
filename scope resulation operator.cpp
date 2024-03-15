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
    int x = 20;
    ::x = 15;// change global variable
    cout<<"Inside the main function value of x is :  "<<x<<endl;
    cout<<"By usin scope resulatiom(::) we can access global variable which is :  "<<::x<<endl;
    display();

}
