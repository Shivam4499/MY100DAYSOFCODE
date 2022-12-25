// *********************************************** SOLUTION **************************************************//


#include<bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int>& candyType)
{
    int n=candyType.size();
    unordered_set<int> s;
    for(auto i:candyType)
    {
        s.insert(i);
    }
    if(s.size()==n/2)
        return s.size();
    else if(s.size()>=n/2)
        return n/2;
    else
        return s.size();    
}

int main()
{
    vector<int> candyType={1,1,1,1};
    cout<<distributeCandies(candyType);
    return 0;
}