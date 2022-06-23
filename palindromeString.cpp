//checking whether the string is a palindrome or not using recursion
#include <iostream> 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int n=s.length();
    int i=0,j=n-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            cout<<"The string is not a palindrome";
            break;
        }
        i++;
        j--;
    }
    if(i>=j)
    {
        cout<<"The string is a palindrome";
    }
    return 0;
}