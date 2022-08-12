#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[] = {2, 2, 3, 4, 5, 6, 7, 8, 911};
    int n = sizeof(arr) / sizeof(arr[0]);

    /*for(int i=0;i<n;i++)
    {
        cout<<&arr[i]<<endl;
    }*/
    // double a;
    // cout<<sizeof(a);
    cout << arr[3];

    // int *p;
    // int arr[]={2,3,4,5,6,8,9};

    // how many ways to initialize a pointer to an array
    // 1.
    //  p=arr;
    //  cout<<*p<<endl;
    //  cout<<*(p+1)<<endl;
    //  cout<<*(p+2)<<endl;

    // p=&0[arr];
    // p=&arr[0];
    // cout<<*p+2<<endl;

    //     int arr[90],arr1[90];
    //     int amt = 90;

    //     for (int i = 0; i < 90; i++)
    //     {
    //         if (amt == 120)
    //         {
    //             amt++;
    //             continue;
    //         }

    //         else
    //             arr[i] = amt++;
    //     }

    //     amt=90;
    //    for (int i = 0; i < 90; i++)
    //     {
    //             arr1[i] = amt++;
    //     }

    //     for(int i=0;i<90;i++)
    //     {
    //         for(int j=0;j<90;j++)
    //         {
    //             if(arr[i]-arr1[j]==0)
    //             {
    //                 arr[j]=0;
    //             }
    //         }
    //     }

    return 0;
}