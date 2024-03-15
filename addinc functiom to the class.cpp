#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
    int id;
    float cgpa;
    void display()
    {
        cout<<id<<"  "<<cgpa <<endl;
    }
};

int main()
{
    student mukit,minal;
    mukit.id=93;
    mukit.cgpa=3.18;
    mukit.display();

    minal.id=15;
    minal.cgpa=3.10;
    minal.display();

  getch();
}
