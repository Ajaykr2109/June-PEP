#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 5, 7, 8, 9, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[n] = {0}, j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j++;
            continue;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            ans[j++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}