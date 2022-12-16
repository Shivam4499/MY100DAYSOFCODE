// ********************************************* SOLUTION ******************************************************* //



#include<bits/stdc++.h>
using namespace std;

int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second==n/2)
            {
                return i.first;
            }
        }
        return 0;
}

int main()
{
    vector<int> nums={1,2,3,3};
    cout<<repeatedNTimes(nums);

}