//perfect square by using binary search
// Language: cpp
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int i = 1;
        while (num > 0) // num is not 0
        {
            num -= i; // num is num - i
            i += 2; // i is i + 2
        }
        return num == 0;
    }
};
int main()
{
    Solution s;
    cout << s.isPerfectSquare(9);
    return 0;
}
