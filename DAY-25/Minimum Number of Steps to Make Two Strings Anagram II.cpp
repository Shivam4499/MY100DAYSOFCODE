// ************************************************ SOLUTION *************************************************** //


#include<bits/stdc++.h>
using namespace std;

int minSteps(string s,string t)
{
    int res=0;
    unordered_map<char,int> m;
    for(auto i:s)
    {
        m[i]++;
    }
    for(auto i:t)
    {
        m[i]--;
    }
    for(auto i:m)
    {
        res+=abs(i.second);
    }
    return res;
}

int main()
{
    string s="leetcode";
    string t="coats";
    cout<<minSteps(s,t);
    return 0;
}