#include<iostream>
#include<conio.h>
using namespace std;
//Function Overloading --- compile time Polymorphism
//Function Overriding --- Run time Ploymorphism

class person
{
public:
    void display()
    {
        cout<<"I am a person"<<endl;
    }

};
class student1 : public person
{
    public:
    void display()
    {
        cout<<"I am student 1"<<endl;
    }
};
class student2 : public person
{
    public:
    void display()
    {
        cout<<"I am student 2"<<endl;
    }
};

int main()
{
    person p;
    p.display();

    student1 s1;
    s1.display();

    student2 s2;
    s2.display();

    getch();
}
