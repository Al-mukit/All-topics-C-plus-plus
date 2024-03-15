#include<iostream>
#include<conio.h>
using namespace std;

// Exception Handling  = Runtime error
//Keyword = try,catch,throw

int main()
{
    try // to safe program error
    {
    int num1,num2;
    cout<<"Enter The 1st Number  : "<<endl;
    cin>>num1;

    cout<<"Enter The 2nd Number  : "<<endl;
    cin>>num2; // If user put num2 = 0...then exception error occurs.

    if(num2 == 0)
    {
        throw -1;
    }

     double result = (double)num1/num2;
     cout<<"Result :  "<<result;

   }

    catch(int x) //we can use = catch(...) = to accept any data type
    {
        cout<< "Divide by Zero is not possible"<<endl;
        cout<< "Please try again ....... ";
    }
    getch();
}
