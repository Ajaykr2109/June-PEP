//insert in map with int key and string value. Add the marks and name of the student in the map. erase the student with the name. Print the marks of the student with the name if no marks then print 0.
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<int, string> m;


    void insert(int key, string value)
    {
        m[key] = value;
    }
    void erase(string value)
    {
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second == value)
            {
                m.erase(it);
            }
        }
    }
    int find(string value)
    {
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second == value)
            {
                return it->first;
            }
        }
        return 0;
    }
};

int main()
{
    Solution s;
    cout<<"Enter the number of students: ";
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the name of the student: ";
        string name;
        cin>>name;
        cout<<"Enter the marks of the student: ";
        int marks;
        cin>>marks;
        s.insert(marks, name);
    }
    cout<<"Enter the name of the student to be erased: ";
    string name;
    cin>>name;
    s.erase(name);
    cout<<"Enter the name of the student to find the marks: ";
    string name1;
    cin>>name1;
    int marks = s.find(name1);
    if (marks == 0)
    {
        cout<<"No marks found";
    }
    else
    {
        cout<<"The marks of the student is: "<<marks;
    }
    return 0;
}
    