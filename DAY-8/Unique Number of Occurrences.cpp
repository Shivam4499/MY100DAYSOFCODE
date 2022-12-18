// ************************************************* SOLUTION ************************************************** //


#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
     unordered_map<int,int> mp;
     unordered_set<int> s;
     for(auto i: arr)
     {
        mp[i]++;
     }   
     for(auto i: mp)
     {
        s.insert(i.second);
     }
     return (mp.size()==s.size());
}

int main()
{
    vector<int> arr={1,2,2,3,3,3,4,4,4,4,5};
    cout<<uniqueOccurrences(arr);
    return 0;
}