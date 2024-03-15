 #include<iostream>
 #include<conio.h>
 using namespace std;

 int main()
 {
   int n,sum=0;
   cout<<"Enter number of student: ";
   cin>>n;
   int student[n];
   for(int i=0;i<n;i++){
        cout<<"marks for student"<<" "<<i+1<<endl;
    cin>>student[i];
    sum=sum+student[i];
   }

   float avg = (float)sum/n;
    cout<<"The summation of total marks  : "<<sum<<endl;
    cout<<"The average of total marks  : " <<avg;

   getch();

 }
