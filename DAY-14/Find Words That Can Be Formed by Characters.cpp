// ************************************************* SOLUTION *************************************************** //


#include<bits/stdc++.h>
using namespace std;

int countCharacters(vector<string>& words, string chars)
{
    unordered_map<char,int> mp1;
    for(auto i:chars)
    {
        mp1[i]++;
    }
    bool flag=true;
    string count="";
    for(auto i:words)
    {
        flag=true;
        unordered_map<char,int> mp2;
        for(auto j:i)
        {
            mp2[j]++;
        }
        for(auto j:i)
        {
            if(mp2[j]>mp1[j])
                flag=false;
        }
        if(flag)
        {
            count+=i;
        }
    }
    return count.length();
}

int main()
{
    vector<string> words={"cat","bt","hat","tree"};
    string chars="atach";
    cout<<countCharacters(words,chars);
    return 0;
}