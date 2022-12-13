// **************************************** NAIVE SOLUTION ***************************************************** //



#include<bits/stdc++.h>
using namespace std;

int countConsistentStrings(string allowed , vector<string> words)
{
    unordered_set<char> h;

    for(int i=0;i<allowed.size();i++)
    {
        h.insert(allowed[i]);
    }
    int count=0;
    for(int i=0;i<words.size();i++)
    {
        bool flag=false;
        for(int j=0;j<words[i].size();j++)
        {
            flag=false;
            if(h.find(words[i][j])!=h.end())
            {
                flag=true;
            }
            if(flag==false)
            {
                break;
            }
        }
        if(flag==true)
        {
           count++;
        }
    }
    return count;
}

int main()
{
    string allowed="ab";
    vector<string> words={"ad","bd","aaab","baa","badab"};
    cout<<countConsistentStrings(allowed,words);
    return 0;
}