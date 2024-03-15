#include<iostream>
#include<conio.h>
using namespace std;

// Function Overriding = must be same name and parameter
// Function Overloading = must be same name and different parameter
class person
{
     public:
         void display()
         {
             cout<<"This is Mukit"<<endl;
         }

};
class student1 : public person
{
     public:
         void display()
         {
            cout<<"This is Function overriding 2"<<endl;;
         }

};
class student2 : public person
{
     public:
         void display()
         {
             cout<<"This is Function overriding 2"<<endl;
         }

};



int main()
{
    student1 s1;
    s1.display();

    student2 s2;
    s1.display();

     person p;
      p.display();


    getch();
}
