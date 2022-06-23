#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{

public:
void merge(vector<int> nums 1, int m, vector<int> nums 2, int n)
{
    int i=0,j=0,k=0;
    while(i<m&&j<n)
    {
        if(nums[i]<nums[j])
        {
            nums[k]=nums[i];
            i++;
        }
        else
        {
            nums[k]=nums[j];
            j++;
        }
        k++;
    }
    while(i<m)
    {
        nums[k]=nums[i];
        i++;
        k++;
    }
    while(j<n)
    {
        nums[k]=nums[j];
        j++;
        k++;
    }
}
};
