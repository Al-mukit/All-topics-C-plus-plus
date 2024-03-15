#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
    //const int admissionFee;
    const int admissionFee,examFee ;
    student(int x,int y)
    //:admissionFee(x)//Constructor initializer
    :admissionFee(x),examFee(y)//Constructor initializer list
    {
        //admissionFee = x;
        cout<<admissionFee<<endl;
        cout<<examFee<<endl;
    }

} ;

int main()
{
    student s1(1500,500);

    getch();
}
