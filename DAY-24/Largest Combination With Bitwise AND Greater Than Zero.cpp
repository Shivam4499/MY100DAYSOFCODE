// ***************************************** SOLUTION *************************************************** //


#include<bits/stdc++.h>
using namespace std;

int largestCombination(vector<int>& candidates) {
        vector<int> bits(32);
        for(int i=0;i<candidates.size();i++)
        {
            int temp=31;
            while(candidates[i]>0)
            {
                bits[temp]+=candidates[i]%2;
                candidates[i]=candidates[i]/2;
                temp--;
            }
        }
        int ans=0;
        for(int i=0;i<32;i++)
        {
            ans=max(ans,bits[i]);
        }
        return ans;
}

int main()
{
    vector<int> candidates={16,17,71,62,12,24,14};
    cout<<largestCombination(candidates);
    return 0;
}