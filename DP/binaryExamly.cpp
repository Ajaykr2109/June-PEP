#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    int n = 0, bin[100][100], i, j,NoE;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    
    int arr[n];
 while(NoE<= n)
 {
    cout<<"Enter the element: "<<endl;
    cin>>arr[i];
    NoE++;
 }
    for (i = 0; n > 0; i++)
    {
        for (j = 0; j < i; j++)
        {
            bin[i][j] = n % 2;
            n = n / 2;
        }
    }
    // binary addition
    //  for (i = 0; i < 100; i++)
    //  {
    //      dec = dec + bin[i] * pow(2, i);
    //  }

    for (i = i - 1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            sum += bin[i][j];
        }
        cout << endl;
    }

    if (sum == 2)


        cout << sum;
    return 0;
}