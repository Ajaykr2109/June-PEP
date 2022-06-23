#include<iostream>
using namespace std;
 int main()
 {
     //60
     int n,i,month=0,day=0;
     cout<<"Ender the Day: "<<endl;
     cin>>n;
     int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
     for(i=0;i<12;i++)
     {
         if(month>n)//month is greater than input?
         {
             month-=a[i-1];
             break;
         }
         month+=a[i];
     }
     day=n-month;
     cout<<day<<" "<<i;

     return 0;
 }
