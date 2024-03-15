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
    for(row=n;row>=1;row--){
        for(col=1 ;col<=row;col++){
            cout<<" "<<col;
        }
        cout<<endl;
    }


    getch ();
}
