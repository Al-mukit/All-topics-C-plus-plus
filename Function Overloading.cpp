#include<iostream>
#include<conio.h>
using namespace std;

// Function Overriding = must be same name and parameter
// Function Overloading = must be same name and different parameter

void sum(int x,int y)
{
   int add = x+y;
   cout<<add<<endl;

}
void sum(int x,int y,int z)
{
   int add = x+y+z;
   cout<<add;

}

int main()
{
    sum(3,5);
    sum(3,4,5);
}
