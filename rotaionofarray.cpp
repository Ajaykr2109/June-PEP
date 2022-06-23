//rotation of the array by k
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6};
    int n=10;
    int k=3;
    int i,j;
    for(i=0,j=n-k;i<j;i++,j++)
    {
        swap(a[i],a[j]);
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array!"<<endl;
    cin>>size;
    int a[size];
    for(int b=0;b<size;b++)
    {
        cin>>a[b];
    }
    int n=size;
    int i,j,k;
    for(i=0,j=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[j]=a[i];
            j++;
        }
    }
    for(k=j;k<n;k++)
    {
        a[k]=0;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
