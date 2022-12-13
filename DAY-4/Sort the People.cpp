// ****************************************** NAIVE SOLUTION ***************************************** //


#include<bits/stdc++.h>
using namespace std;

vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

    vector<string> res;

    int n=names.size();
    unordered_map<int,string> mp;
    for(int i=0;i<n;i++)
    {
        mp[heights[i]]=names[i];
    }

    sort(heights.begin(),heights.end(),greater<int>());

    for(int i=0;i<n;i++)
    {
        res.push_back(mp[heights[i]]);
        //cout<<mp[heights[i]]<<" ";
    }
    return res;
}


int main()
{
    vector<string> names={"Mary","John","Emma"};
    vector<int> heights={180,165,170};
    sortPeople(names,heights);
    return 0;
}