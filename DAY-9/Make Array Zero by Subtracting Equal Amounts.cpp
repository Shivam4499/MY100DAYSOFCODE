// ******************************************** SOLUTION ********************************************************** //


#include<bits/stdc++.h>
using namespace std;

int minimumOperations(vector<int>& nums)
{
    unordered_set<int> s;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            s.insert(nums[i]);
        }
    }
    return s.size();
}

int main()
{
    vector<int> nums={1,5,0,3,5};
    cout<<minimumOperations(nums);
    return 0;
}