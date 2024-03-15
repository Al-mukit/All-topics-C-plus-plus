#include<iostream>
#include<conio.h>
using namespace std;


// single,multilevel,Hierarchical,Multiple,Hybrid

class database
{
   public:
       int id = 3;
       string name = "Mukit";
       float gpa = 3.44;
       void display()
       {
          cout<<name<<gpa<< id<<endl;
       }
};

class student : public database
{
   public:

       void display2()
       {
          cout<<id <<endl  <<  name <<endl  << gpa  <<endl;
       }
};



int main()
{
    student s1;
    s1.display2();


    getch();
}
