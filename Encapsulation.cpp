#include<iostream>
#include<conio.h>
using namespace std;

// Encapsualtion = combaining variables and functions in a single unit.
class student
{
    private:
    string name;
    public:
        void setName(string x)
        {
            name = x;
        }
};

int main()
{
    student s1;
    s1.setName("Mukit");

    getch();
}
