#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    int speed=0,size;

    size = sizeof(speed);
    cout<<"The size of this data type is : " <<size<<endl;

    cout<<"Enter the speed : "<<endl;
    cin>>speed;
    if(speed>=60){
        cout<<"Risky" <<endl;
    }
    else{
        cout<<"Safe"<<endl;
    }

    getch();
}
