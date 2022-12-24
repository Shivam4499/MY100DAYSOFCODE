// ************************************************************* SOLUTION ****************************************************************** //



#include<bits/stdc++.h>
using namespace std;

int similarPairs(vector<string>& words)
{
    int ans=0, n=words.size();
    for(int i=0;i<n-1;i++)
    {
        unordered_map<char,int> mp1;
        for(char &c:words[i])
        {
            mp1[c]=1;
        }
        for(int j=i+1;j<n;j++)
        {
            unordered_map<char,int> mp2;
            for(char &c:words[j])
            {
                mp2[c]=1;
            }
            if(mp1==mp2)
            {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<string> words={"aba","aabb","abcd","bac","aabc"};
    cout<<similarPairs(words);
    return 0;
}