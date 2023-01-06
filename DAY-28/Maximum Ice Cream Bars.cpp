// ********************************************** SOLUTION ****************************************************** //


#include<bits/stdc++.h>
using namespace std;

int maxIceCream(vector<int>& costs, int coins)
{
    sort(costs.begin(),costs.end());
    int n=costs.size();
    for(int i=0;i<n;i++)
    {
        if(coins>=costs[i])
        {
            coins=coins-costs[i];
        }
        else
        {
            return i;
        }
    }
    return n;
}


int main()
{
    vector<int> costs={1,3,2,4,1};
    int coins=7;
    cout<<maxIceCream(costs,coins);
    return 0;
}