// ****************************************** SOLUTION ************************************************//


#include<bits/stdc++.h>
using namespace std;

int sumOfUnique(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(auto i: nums)
    {
        mp[i]++;
    }
    int sum=0;
    for(auto i: mp)
    {
        if(i.second==1)
        {
            sum+=i.first;
        }
    }
    return sum;
}

int main()
{
    vector<int> nums={1,2,3,4,5};
    cout<<sumOfUnique(nums);
    return 0;
}