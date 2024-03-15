#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    int a,MS,MS1,MS2,MS3,MS4,comma;
    float f;
    double d;
    char ch;
    char name [20];
      MS = sizeof(f);
     MS1 = sizeof(a);
      MS2 = sizeof(d);
      MS3 = sizeof(ch);
      MS4 = sizeof(name);
      comma = (MS1=2,MS2=5,comma=MS1+MS2);

    cout<<MS<<endl<<MS1<<endl<<MS2<<endl<<MS3<<endl<<MS4<<endl <<".....byte"<<endl;
    cout<<comma;




getch();

}
