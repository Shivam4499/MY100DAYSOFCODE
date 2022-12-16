// ************************************************* SOLUTION ***************************************************** //

#include<bits/stdc++.h>
using namespace std;

vector<int> numberOfPairs(vector<int> nums) {
      unordered_map<int ,int> mp;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }
    int pairs=0,leftover=0;
    for(auto i:mp)
    {
        pairs+=i.second/2;
        leftover+=i.second%2;
    }
    return {pairs,leftover};           
}

int main()
{
    vector<int> nums={1,3,2,1,3,2,2};
    numberOfPairs(nums);
    return 0;
}