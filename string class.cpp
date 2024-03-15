#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

int main()
{
    string str1 = "Mukit";
    string str2 = " Hassan";
    string str3;

    str3 = str1;
    cout<<str3<<endl;

    str3 = str1+str2;
    cout<<str3<<endl;

    int len= str2.size();
    cout<<len<<endl;



    getch();
}
