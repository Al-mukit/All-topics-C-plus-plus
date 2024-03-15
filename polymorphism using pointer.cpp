#include<iostream>
#include<conio.h>
using namespace std;
//Function Overloading --- compile time Polymorphism
//Function Overriding --- Run time Ploymorphism

class person
{
public:
    virtual void display()
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
    person *p; // super class e pointer korte hobe
    student1 s1;
    student2 s2;
    p = &s1;
    p->display();

    p= &s2;
    p->display();

    getch();
}
