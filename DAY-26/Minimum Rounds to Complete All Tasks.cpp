// ************************************************** SOLUTION **************************************************//

#include<bits/stdc++.h>
using namespace std;

int minimumRounds(vector<int>& tasks)
{
    int ans=0;
    unordered_map<int,int> m;
    for(auto i:tasks)
    {
        m[i]++;
    }
    for(auto i:m)
    {
        if(i.second==1)
        {
            return -1;
        }
        if(i.second%3==0)
        {
            ans+=i.second/3;
        }
        else
        {
            ans+=i.second/3+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> tasks={2,2,3,3,2,4,4,4,4,4};
    cout<<minimumRounds(tasks);
    return 0;
}