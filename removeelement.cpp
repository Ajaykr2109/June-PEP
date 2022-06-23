// remove element from array in place and return the new length of the array after removing the element
#include <iostream>
using namespace std;
class Solution
{
public:
    int removeElement(int A[], int n, int elem)
    {
        int i = 0;
        int j = n - 1;
        while (i <= j)
        {
            if (A[i] == elem)
            {
                A[i] = A[j];
                j--;
            }
            else
            {
                i++;
            }
        }
        return j + 1;
    }
};
int main()
{
    int A[] = {4, 1, 5, 2, 6, 3};
    int n = sizeof(A) / sizeof(A[0]);
    Solution s;
    cout << s.removeElement(A, n, 3);
    return 0;
}