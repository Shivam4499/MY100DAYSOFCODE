// ******************************************** SOLUTION ************************************************* //



#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches)
{
    unordered_map<int,int> mlost;
    vector<vector<int>> res(2);

    for(int i=0;i<matches.size();i++)
    {
        mlost[matches[i][1]]++;
    }
    for(auto i=mlost.begin();i!=mlost.end();i++)
    {
        if(i->second==1)
        {
            res[1].push_back(i->first);
        }
    }
    for(int i=0;i<matches.size();i++)
    {
        if(mlost[matches[i][0]]==0)
        {
            res[0].push_back(matches[i][0]);
            mlost[matches[i][0]]=1;
        }
    }
    sort(res[0].begin(),res[0].end());
    sort(res[1].begin(),res[1].end());

    return res;
}

int main()
{
    vector<vector<int>> matches={{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    findWinners(matches);
    return 0;
}