#include<iostream>
#include<conio.h>
using namespace std;

// Friend class = If we want to access private class value.

class A
{
public:
    int roll = 2;
    string name = "Shakin";
public:
    friend class B; //Here it is
};
class B
{
public:
    void display(A obj)
    {
        cout<<"The Student Roll No : " <<obj.roll<<endl;
        cout<<"The Student Name  : " <<obj.name<<endl;
    }
};

int main()
{
    A ob1;
    B ob2;

    ob2.display(ob1);

    getch();
}
