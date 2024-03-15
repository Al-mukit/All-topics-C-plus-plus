#include<iostream>
#include<conio.h>
using namespace std;

void square(int n,int m)
{
    int result = n*n,result2=m*m;
    cout<<"The square of "<<n<<"  and  "<<m<<"  is : "<<result<<"   "<<result2<<endl;
}

int main()
{
    square(2,3);

    getch();
}
