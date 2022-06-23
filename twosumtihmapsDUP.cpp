//two sum problem with maps duplicate elements
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(nums[i]) != m.end()) 
            {
                vector<int> result;
                result.push_back(m[nums[i]]+1);
                result.push_back(i+1);
                return result;
            }
            else
            {
                m[target - nums[i]] = i;
            }
        }
        return vector<int>();
    }
};
int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(9);

    Solution s;
    vector<int> result = s.twoSum(nums, 7);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}