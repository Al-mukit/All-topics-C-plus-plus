#include<iostream>
#include<conio.h>
using namespace std;

// Abstraction is a process of hiding the implementation process just shows the result.
//you can create Abstract class pointer not obj.
//Example : send message/ATM Transaction/Phone call.

class MobileUser
{
public:
    virtual void sendMessage() = 0; //This is virtual function where NO BODY ALLOWED
};
class Mukit : public MobileUser
{
public:
    void sendMessage()
    {
        cout<<"Hi,This is Mukit"<<endl;
    }
};
class Shakin : public MobileUser
{
public:
    void sendMessage()
    {
        cout<<"Hi,This is Shakin"<<endl;
    }
};

int main()
{

   //MobileUser p; //cannot create Abstract obj
   MobileUser *p;
   Mukit m;
   Shakin s;

   p = &m;
   p->sendMessage();

   p = &s;
   p->sendMessage();


    getch();

}
