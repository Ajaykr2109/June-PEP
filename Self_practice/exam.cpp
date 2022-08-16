    #include<iostream>
    using namespace std;

    int missingMarbles(int arr[], int n)
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = ans ^ arr[i];
        }
        return ans;
    }
    int main()
    {
        int arr[] = {0, 5, 7, 8, 9, 0, 0};
        int n = sizeof(arr) / sizeof(arr[0]);
        cout << missingMarbles(arr, n);
    }