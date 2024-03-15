#include<iostream>
#include<conio.h>
using namespace std;

void displayArray(int num[],int size)
{
    for(int i=0;i<=4;i++)
    {
        cout<<num[i]<<" "<<endl;
    }

}

int main()
{
    int num[5]={4,5,6,7,8};
    displayArray(num,5);

    getch();
}
