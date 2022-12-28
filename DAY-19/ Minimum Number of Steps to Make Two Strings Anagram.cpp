// ********************************************** SOLUTION ******************************************* //


#include<bits/stdc++.h>
using namespace std;

int minSteps(string s, string t)
{
    int sum=0;
    unordered_map<char,int> m;
    for(auto i:s)
    {
        m[i]++;
    }
    for(auto i:t)
    {
        m[i]--;
    }
    for(auto i: m)
    {
        if(i.second<0)
        {
            sum+=i.second;
        }
    }
    return abs(sum);
}

int main()
{
    string s="leetcode";
    string t="practice";
    cout<<minSteps(s,t);
    return 0;
}