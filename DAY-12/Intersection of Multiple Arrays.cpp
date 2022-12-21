// ********************************************* SOLUTION **************************************************** //


#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<vector<int>>& nums)
{
    int n=nums.size();
    map<int,int> mp;
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<nums[i].size();j++)
        {
            mp[nums[i][j]]++;
        }
    }
    for(auto i:mp)
    {
        if(i.second==n)
        {
            ans.push_back(i.first);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> nums={{3,1,2,4,5},{1,2,3,4},{3,4,5,6}};
    intersection(nums);
    return 0;
}