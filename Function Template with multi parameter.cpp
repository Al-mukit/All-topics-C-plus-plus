#include<iostream>
#include<conio.h>
using namespace std;

// Function Template = To work in an --- any data type
// Different data types in one function

template <class myTemplate,class myTemplate2>
myTemplate add(myTemplate a,myTemplate2 b)
//int add(int a,int b)
{
    return a+b;
}

int main()
{

   cout<< add(10.5,10)<<endl;//insert float data first
   cout<< add(5.4,5)<<endl;//

  getch();
}
