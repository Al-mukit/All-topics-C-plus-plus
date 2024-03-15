#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
       //same row value = <<cout row
    // different row value = <<cout col

    int n,row,col;
    cout<<"Enter number"<<endl;
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1 ;col<=row;col++){
            cout<<" "<<row;
        }
        cout<<endl;
    }


    getch ();
}
