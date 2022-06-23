
//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct using maps.
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(nums[i]) != m.end())
            {
                return true;
            }
            else
            {
                m[nums[i]] = 1;
            }
        }
        return false;
    }
};
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    Solution s;
    cout << s.containsDuplicate(nums);
    return 0;
}