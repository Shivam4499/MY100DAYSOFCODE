// ************************************************* SOLUTION *************************************************** //


#include<bits/stdc++.h>
using namespace std;


vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
{
    vector<int> res;
    map<int,int> mp;

    for(auto i : arr1)
    {
        mp[i]++;
    }
    for(int i=0;i<arr2.size();i++)
    {
        if(mp[arr2[i]])
        {
            int count=mp[arr2[i]];
            for(int j=0;j<count;j++)
            {
                res.push_back(arr2[i]);
            }
            mp.erase(arr2[i]);
        }
    }
    for(auto i:mp)
    {
        int count=i.second;
        for(int j=0;j<count;j++)
        {
            res.push_back(i.first);
        }
    }
    return res;
}

int main()
{
    vector<int> arr1={2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2={2,1,4,3,9,6};
    relativeSortArray(arr1,arr2);
    return 0;
}