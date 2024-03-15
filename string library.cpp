#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
    char name1[30]="Mukit Hassan";
    char name2[20];
    char name3[20]="Espan ";
    int len = strlen(name1);
    cout<<"string length : " << len<<endl;

      strcpy(name2,name1);
    cout<<"string copy from name1 : " << name2 <<endl;

    strcat(name3,name1);
    cout<<"string concat with name3+name1 : " << name3 <<endl;

    int value = strcmp(name1,name3);
    if(name1==name3)
    {
        cout<<"strings are equal"<<endl;
    }
    else
    {
        cout<<"Strings are not equal";
    }

    getch();
}
