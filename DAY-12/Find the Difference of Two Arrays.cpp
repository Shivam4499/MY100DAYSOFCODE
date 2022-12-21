// ********************************************** SOLUTION ************************************************ //


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> h1,h2;
        for(auto i: h1)
        {
            h1.insert(i);
        }
        for(auto i: h2)
        {
            h2.insert(i);
        }
        vector<int> ans1;
        vector<vector<int>> ans;

        for(auto i: h1)
        {
            if(h2.find(i)==h2.end())
            {
                ans1.push_back(i);
            }
        }
        ans.push_back(ans1);
        ans1.clear();
        for(auto i: h2)
        {
            if(h1.find(i)==h1.end())
            {
                ans1.push_back(i);
            }
        }
        ans.push_back(ans1);
        return ans;
}

int main()
{
    vector<int> nums1={1,2,3};
    vector<int> nums2={2,4,6};
    findDifference(nums1,nums2);
    return 0;
}