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
       //constractor is a special type of function that helps to initialize the object.
       //constractor>> = class name = function name(no return type,no need to call)
       student(int x,double y)
       {
            id=x;
            gpa=y;
       }

};

int main()
{
    student mukit(1,3.44);
    mukit.display();

    student minal(2,3.75);
    minal.display();

    student sakin(3,3.91);
    sakin.display();


    getch();

}
