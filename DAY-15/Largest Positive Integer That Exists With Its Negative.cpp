// *********************************************** SOLUTION ************************************************ //


#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int findMaxK(vector<int>& nums)
{
    // unordered_set<int> neg;
    // for(auto i:nums)
    // {
    //     if(i<0)
    //     {
    //         neg.insert(i);
    //     }
    // }
    // int ans=-1;
    // for(auto i:nums)
    // {
    //     if(i>ans && neg.count(-i))
    //     {
    //         ans=i;
    //     }
    // }
    // return ans;

    unordered_set<int> s(begin(nums),end(nums));
    int ans=-1;
    for(auto i:nums)
    {
        if(i>0 && s.count(-i))
        {
            ans=max(ans,i);
        }
    }
    return ans;
}

int main()
{
    vector<int> nums={-1,2,-3,3};
    cout<<findMaxK(nums);
    return 0;
}