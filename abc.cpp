#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr1[n/2],arr2[n/2];

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr1[i]=arr[i];
        }
        else
        {
            arr2[i]=arr[i];

        }
    }
     int n1=sizeof(arr1)/sizeof(arr1[0]);
     int n2=sizeof(arr2)/sizeof(arr2[0]);

    for(int i=0;i<n1;i++)
    {
        cout<<arr1[i]<<endl;
    }
    cout<<"--------------------------"<<endl;
    for(int i=0;i<n2;i++)
    {
        cout<<arr2[i]<<endl;
    }

}
