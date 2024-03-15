#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
    string name;
    //student(string x)// constructor
    student(string name)
    {
        this -> name = name; // This keyword(when class variable and local variable are same...)
    }
    void display()
    {
        cout<< name <<endl;
    }
};

int main()
{
    student s1("Mukit");
    s1.display();




  getch();

}
