#include <iostream>
using namespace std;

// returns the index of second largest
// if second largest didn't exist return -1
int secondLargest(int arr[], int n)
{
    int first = 0, second = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[first]) // if current element is greater than first
        {
            second = first;
            first = i;
        }
        else if (arr[i] < arr[first]) // arr[i] is smaller than first but greater than second
        {
            if (second == -1 || arr[second] < arr[i])// if second is not assigned or arr[i] is greater than second
                second = i;
        }
    }
    return second;
}

int main()
{
    int arr[] = {20, 20, 20, 20};
    int index = secondLargest(arr, sizeof(arr) / sizeof(arr[0]));
    if (index == -1)
        cout << "Second Largest didn't exist";
    else
        cout << "Second largest : " << arr[index];
}