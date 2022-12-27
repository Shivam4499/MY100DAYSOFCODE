// ********************************************* SOLUTION ******************************************************** //


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> groupThePeople(vector<int>& groupSizes)
{
    vector<vector<int>> ans;

    unordered_map<int ,vector<int>> m;

    for(int i=0;i<groupSizes.size();i++)
    {
        m[groupSizes[i]].push_back(i);
        if(m[groupSizes[i]].size()==groupSizes[i])
        {
            ans.push_back(m[groupSizes[i]]);
            m[groupSizes[i]].clear();
        }
    }
    return ans;
}

int main()
{
    vector<int>groupSizes={3,3,3,3,3,1,3};
    groupThePeople(groupSizes);
    return 0;
}