#include<iostream>
#include<conio.h>
using namespace std;


// AND/OR/XOR output

int main ()
{
    int a,b,c;
    cin>>a>>b;
    c=a&b;  // a=10;b=11
    cout<<"The And gate output in binary : "<<c<<endl;

        c=a|b;  // a=10;b=11
    cout<<"The OR gate output in binary : "<<c<<endl;

        c=a^b;  // a=10;b=11
    cout<<"The XOR gate output in binary : "<<c<<endl;

    getch();
}
