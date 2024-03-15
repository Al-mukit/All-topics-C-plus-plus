#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int A[2][3];

    //Taking Input for 2D array
    cout<<"Enter the element for metrix : "<<endl;
    for(int row=0;row<=1;row++)
    {
        for(int col=0;col<=2;col++){
            cout<<"A["<<row<<"]<<"<<col<<"]  = "<<endl;
              cin>>A[row][col];
    }
    }

    // Printing output for 2D Array

       for(int row=0;row<=1;row++)
    {
        for(int col=0;col<=2;col++){
            cout<<A[row][col]<<" ";
    }
     cout<<endl;
    }


    getch();
}
