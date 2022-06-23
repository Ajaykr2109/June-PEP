//checking whether the number is a palindrome or not
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void palindrome(int a)
{
     int temp,rev=0;
   
    temp=a;
    while(a>0)
    {
        rev=rev*10+a%10;
        a=a/10;
    }
    if(temp==rev)
    {
        cout<<"The number is a palindrome";
    }
    else
    {
        cout<<"The number is not a palindrome";
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    palindrome(n);
    return 0;   
}