// ****************************************** SOLUTION ******************************************************* //



#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums)
{
    vector<int> ans;
    unordered_map<int,int> m;
    for(auto i:nums)
    {
        m[i]++;
    }

    for(auto i:m)
    {
        if(i.second==2)
        {
            ans.push_back(i.first);
        }
    }
    return ans;
} 

int main()
{
    vector<int> nums={4,3,2,7,8,2,3,1};
    findDuplicates(nums);
    return 0;

}


