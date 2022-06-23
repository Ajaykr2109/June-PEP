// merge sort
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &v, int s, int mid, int e)
{
    if (s >= e)
    {
        return;
    }

    vector<int> arr;
    int i = s;
    int j = mid + 1;

    while (i <= mid && j <= 0)
    {
        if (v[i] <= v[j])
        {
            arr.push_back(v[i]);
            i++;
        }
        else
        {
            arr.push_back(v[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        arr.push_back(v[i]);
        i++;
    }
    while (j <= e)
    {
        arr.push_back(arr[j]);
        j++;
    }

    for (int k = s; k < v.size(); k++)
    {
        v[k] = arr[k - s];
    }
}
void merge_sort(vector<int> &v, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2; // S storing 1st index E for last index

    merge_sort(v, s, mid);
    merge_sort(v, mid + 1, e);

    merge(v, s, e);

    return;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v = {5, 10, 215, 23, 55, 2, 6, 42};
    merge_sort(v, 0, v.size() - 1);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}