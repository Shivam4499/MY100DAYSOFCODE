// ************************************************* SOLUTION ************************************************** //



#include<bits/stdc++.h>
using namespace std;
bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto i:target)
        {
            mp[i]++;
        }
        for(auto i:arr)
        {
            mp[i]--;
        }
        for(auto i:mp)
        {
            if(i.second!=0)
                return false;
        }
        return true;
    }

    int main()
    {
        vector<int> target={3,7,9};
        vector<int> arr={3,7,11};
        cout<<canBeEqual(target,arr);
    }