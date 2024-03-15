#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    //same row value = <<cout row
    // different row value = <<cout col
    int n,row;
    char col;
    cout<<"Enter number"<<endl;
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1 ;col<=row;col){
            cout<<" "<<col+64;
        }
        cout<<endl;
    }


    getch ();
}

//     IT has OUTPUT Problem................
