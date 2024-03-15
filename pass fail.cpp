#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int marks,grade;
    cout<<"Enter the marks : "<<endl;
    cin>>marks;

    if(marks>100 && marks>100 ){
             cout<<"Teacher Mental"<<endl;
    }
        else if(marks==100 ) {
        cout<<"osthirr"<<endl;
    }

       else if(marks>=80 ) {
        cout<<"A+"<<endl;
    }
        else if(marks>=70) {
        cout<<"A"<<endl;
    }
        else if(marks>=60) {
        cout<<"A-"<<endl;
        }
        else if(marks>=50) {
        cout<<"B"<<endl;
    }
        else if(marks>=40) {
        cout<<"C"<<endl;
        }
        else if(marks>=33) {
        cout<<"D"<<endl;
        }
        else if(marks<33) {
        cout<<"Student Mental and failed"<<endl;
        }

        getch();
}
