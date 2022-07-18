#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int sum(int n,int m)
// {
//     int sum=0;
//     for(int i=0;i<=m;i++)
//     {
//         if((n*i)<m)
//         sum=sum+(i*n);

//         else break;

//     }
//     return sum;
// }

//find the number which divides all the elements of the array

int sumofK(int arr[], int n)
{
    int sum = 0;
    // largest element of the array
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    int j = 0, in[10],in=0;
    for (int i = 2; i < max; i++)
    {
        while (j < (sizeof(arr) / sizeof(arr[0])))
        {
            if (arr[j] % i == 0)
            {
                arr[in]
                j++;
            }
            else j++;
        }
    }   
        return sum;
    }
    int main()
    {
        int arr[] = {4, 10, 40, 28, 16};
        int n = sizeof(arr) / sizeof(arr[0]);
        cout << sumofK(arr, n);
        return 0;
    }
