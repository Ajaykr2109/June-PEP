#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(int a[100], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

 int main()
{
    int a[10], size, opt, ele, pos;

    cout << "Enter the Size" << endl;
    cin >> size;
    a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "For further operation kindly choose out these  available options:\n 1.Insertion \n 2.Deletion \n 3.Updation" << endl;
    cin >> opt;

    switch (opt)
    {
    case 1:
    {
        int ele, pos;
        cout << "Enter the element to be inserted" << endl;
        cin >> ele;
        cout << "Enter the position to be inserted" << endl;
        cin >> pos;
        --pos;
        for (int i = size; i >= pos; i--)
        {
            a[i + 1] = a[i];
        }
        a[pos] = ele;
        size++;
        display(a, size);
        break;
    }

    case 2:
    {
        int pos;
        cout << "Enter the position to be deleted" << endl;
        cin >> pos;
        for (int i = pos; i < size; i++)
        {
            a[i] = a[i + 1];
        }
        size--;
        display(a, size);
        break;
    }

    case 3:
    {
        int pos, ele;
        cout << "Enter the position to be updated" << endl;
        cin >> pos;
        cout << "Enter the element to be updated" << endl;
        cin >> ele;
        a[pos] = ele;
        display(a, size);
        break;
    }
    default:
    {
        cout << "Not a valid  Option";
    }
    }
}
