#include<iostream>
#include<conio.h>
using namespace std;

// The process of obtaining the data members and functions from one class to another class.
// we can use existing class code

class person
{
     public:
         string name;
         int age;
         void display()
         {
             cout<<"Name  :  " <<name <<endl;
             cout<<"Age   :  " << age <<endl;
         }

};

class student : public person
{
    public:
        int id;
        void display2()
    {
           cout<<"ID   :   " << id <<endl;
          //cout<<"Name :   " <<name <<endl;
          //cout<<"Age  :  " << age <<endl;
                      //OR
                      display();

    }
};

int main()
{
    student s1;
    s1.id = 93;
    s1.age = 26;
    s1.name = "Mukit";
    s1.display2();


    getch();
}
