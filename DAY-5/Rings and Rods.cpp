// ******************************************* Solution *********************************************** //



#include<bits/stdc++.h>
using namespace std;

int countPoints(string rings) {
    unordered_map<char,set<char>> mp;

    for(int i=1;i<rings.size();i+=2)
    {
        mp[rings[i]].insert(rings[i-1]);
    }

    int count=0;
    for(auto i:mp)
    {
        if(i.second.size()==3)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string rings="B0B6G0R6R0R6G9";
    cout<<countPoints(rings);
    return 0;
}