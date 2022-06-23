//heap sort
// Language: cpp
// Path: heap.cpp
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }   
    for(int i=n/2-1;i>=0;i--)
    {
        int temp=a[i];
        int j=i;
        while(j<n/2)
        {
            if(a[j+1]>a[j])
            {
                a[j]=a[j+1];
                j++;
            }
            else
            {
                break;
            }
        }
        a[j]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

