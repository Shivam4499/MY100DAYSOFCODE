// ***************************************** SOLUTION ********************************************************* //



#include<bits/stdc++.h>
using namespace std;


vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     unordered_set<int> h;
     for(auto i:nums1)
     {
        h.insert(i);
     }
     vector<int> ans;
     for(int i=0;i<nums2.size();i++)
     {
        if(h.find(nums2[i])!=h.end())
        {
            ans.push_back(nums2[i]);
            h.erase(nums2[i]);
        }
     }
     return ans;
}

int main()
{
    vector<int> nums1={4,9,5};
    vector<int> nums2={9,4,9,8,4};
    intersection(nums1,nums2);
    return 0;

}