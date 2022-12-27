// *********************************************** SOLUTION ************************************************** //

#include<bits/stdc++.h>
using namespace std;

vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k)
{
    unordered_map<int,unordered_set<int>> m;
    vector<int> ans(k);
    for(int i=0;i<logs.size();i++)
    {
        int id=logs[i][0];
        int time=logs[i][1];
        m[id].insert(time);
    }
    for(auto i:m)
    {
        ans[i.second.size()-1];
    }
    return ans;
}

int main()
{
    vector<vector<int>> logs={{0,5},{1,2},{0,2},{0,5},{1,3}};
    int k=5;
    findingUsersActiveMinutes(logs,k);
    return 0;
}