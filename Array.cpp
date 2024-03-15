#include<iostream>
#include<conio.h>
using namespace std;


int main()
{

    int array[10];

    for(int i=0;i<10;i++){
               cout<<"Marks for student  "<<" "<<i<<endl;
            cin>>array[i];
    }

    for(int i=0;i<10;i++)
    {


        cout<<array[i]<<endl;
    }

    getch();
}
