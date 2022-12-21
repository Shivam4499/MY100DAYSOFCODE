// ************************************************ SOLUTION ****************************************************** //


#include<bits/stdc++.h>
using namespace std;

int countWords(vector<string>& words1, vector<string>& words2) 
{
    unordered_map<string,int> mp;
    for (auto i:words1)
    {
        mp[i]++;
    }
    for(auto i:words2)
    {
        if(mp[i]<2)
            mp[i]--;
    }
    int count=0;
    for(auto i:mp)
    {
        if(i.second==0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<string> words1={"leetcode","is","amazing","as","is"};
    vector<string> words2={"amazing","leetcode","is"};
    cout<<countWords(words1,words2);
    return 0;
}