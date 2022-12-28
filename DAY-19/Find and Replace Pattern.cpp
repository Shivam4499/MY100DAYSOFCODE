// ************************************************* SOLUTION ***************************************************** //


#include<bits/stdc++.h>
using namespace std;

vector<string> findAndReplacePattern(vector<string>& words, string pattern)
{
    vector<string> ans;
    
    for(int i=0;i<words.size();i++)
    {
        unordered_map<char,char> m1,m2;
        int flag=1;
        for(int j=0;j<words[i].size();j++)
        {
            // words[i]="mee" , pattern="abb"
            auto it1=m1.find(pattern[j]);  // find a
            auto it2=m2.find(words[i][j]); // find m
            if(it1==m1.end())
            {
                m1.insert({pattern[j],words[i][j]});
            }
            else
            {
                if(it1->second!=words[i][j])
                {
                    flag=0;
                    break;
                }
            }
            if(it2==m2.end())
            {
                m2.insert({words[i][j],pattern[j]});
            }
            else
            {
                if(it2->second!=pattern[j])
                {
                    flag=0;
                    break;
                }
            }

        }
        if(flag)
            ans.push_back(words[i]);
    }
    return ans;
}

int main()
{
    vector<string> words={"abc","deq","mee","aqq","dkd","ccc"};
    string pattern="abb";
    findAndReplacePattern(words,pattern);
    return 0;
}