#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    list<int> l{10, 20, 30, 40}; // decalaration
    l.push_back(1);
    l.push_back(10);
    l.push_front(20);
    l.sort();
    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    if (is_sorted(l.begin(), l.end()))
        cout << "Is sorted" << endl;

    // string str = "Ajay";
    // map<char, int> mp;
    // for (int i = 0; i < str.size(); i++)
    // {
    //     mp[str[i]]++;
    // }
    // for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
    // {

    //     cout << it->first << "->" << it->second << endl;
    // }
    cout << endl;

    vector<int> v = {30, 252, 64, 85, 4, 33, 6, 45000};

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}