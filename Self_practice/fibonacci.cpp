#include <iostream>
using namespace std;

int main()
{
    long long int t1 = 0, t2 = 1, fib = 0, sum = 0;
    for (int i = 0; i < 30; i++)
    {
        t1 = t2;
        t2 = sum;
        sum = t1 + t2;
        cout << sum << " ";
    }
    return 0;
}