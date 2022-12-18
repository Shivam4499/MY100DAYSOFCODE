// ********************************************** SOLUTION  *************************************************** //


#include<bits/stdc++.h>
using namespace std;

bool divideArray(vector<int>& nums) {
    int n =nums.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[nums[i]]++;
    }
    int count=0;
    for(auto i:mp)
    {
        count+=i.second/2;
    }
    return (count==n/2);
}

int main()
{
    vector<int> nums={3,2,3,2,2,2};
    cout<<divideArray(nums);
}
