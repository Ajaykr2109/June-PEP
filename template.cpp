#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// template
//  template <class t>

// t func(vector<int> &v)
// {
//     t sum = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         sum += v[i];
//     }
//     return sum;
// }

// int main()
// {
//     vector<int> v1 = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10};
//     vector<double> v2={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10};
//     cout << func<int>(v1) << endl;
//     cout << func<double>(v2) << endl;
// }

template <class t1, class t2>

class cal
{
public:
    t1 x;
    t2 y;
    cal(int a, int b)
    {
        x = a;
        y = b;
    }
    t1 add()
    {
        return x + y;
    }
    t2 sub()
    {
        return x - y;
    }
    t1 mul()
    {
        return x * y;
    }
    t2 div()
    {
        return x / y;
    }
};

int main()
{
    cal<int, int> c(20, 25);
    cal<double, double> c1(20.20, 25.25);

    cal<string> v1 = {"Hello", "World", "How", "Are", "You"};

    cout << c.add() << endl;
    cout << c1.sub() << endl;
    cout << v1.add() << endl;
    return 0;
}
