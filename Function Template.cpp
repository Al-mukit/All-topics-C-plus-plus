#include<iostream>
#include<conio.h>
using namespace std;

// Function Template = To work in an --- any data type

template <class myTemplate>
myTemplate add(myTemplate a,myTemplate b)
//int add(int a,int b)
{
    return a+b;
}

int main()
{

   cout<< add(10,20)<<endl;
   cout<< add(5.5,3.8)<<endl;// won't work in int data type

  getch();
}
