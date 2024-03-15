#include<iostream>
#include<conio.h>
using namespace std;

class student
{
   public:
       int id;
       float gpa;
       void display()
       {
           cout<<id<<"  "<<gpa<<endl;
       }
       void prm(int x,float y)
       {
           id = x;
           gpa = y;
       }
};

int main()
{
    student mukit,minal,rifat;
    mukit.prm(1,3.44);
    mukit.display();

    rifat.prm(2,3.67);
    rifat.display();

    minal.prm(3,3.75);
    minal.display();
}
