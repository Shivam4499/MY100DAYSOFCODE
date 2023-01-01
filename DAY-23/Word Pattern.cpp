// ******************************************* SOLUTION ******************************************************* //

#include<bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern, string s) 
{
    istringstream stcin(s);
    string word;
    vector<string> res;
    while(stcin >> word)
    {
        res.push_back(word);
    }
    if(pattern.size()!=res.size())
    {
        return false;
    }
    unordered_map<string,char> s2c;
    unordered_map<char,string> c2s;
    for(int i=0;i<res.size();i++)
    {
        if(s2c[res[i]]==0 && c2s[pattern[i]]=="")
        {
            s2c[res[i]]=pattern[i];
            c2s[pattern[i]]=res[i];
            continue;
        }
        if(s2c[res[i]]!=pattern[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string pattern="abba";
    string s="dog cat cat dog";
    cout<<wordPattern(pattern,s);
    return 0;
}