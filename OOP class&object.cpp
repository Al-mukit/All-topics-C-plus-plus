#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
    int id;
    float cgpa;
};
int main()
{
    student Mukit,Hasan;
    Mukit.id=100;
    Mukit.cgpa=3.44;
    cout<<Mukit.id <<"  " << Mukit.cgpa<<endl;


    Hasan.id=125;
    Hasan.cgpa=3.75;
    cout<<Hasan.id <<"  " << Hasan.cgpa<<endl;

    getch();
}
