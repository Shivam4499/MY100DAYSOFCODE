// ********************************************* SOLUTION **************************************************** //



#include<bits/stdc++.h>
using namespace std;

vector<string> findWords(vector<string>& words)
{
     unordered_set<char> s1={'q','w','e','r','t','y','u','i','o','p','Q','W','E','R','T','Y','U','I','O','P'};
    unordered_set<char> s2={'a','s','d','f','g','h','j','k','l','A','S','D','F','G','H','J','K','L'};
    unordered_set<char> s3={'z','x','c','v','b','n','m','Z','X','C','V','B','N','M'};

    vector<string> ans;
    for(int i=0;i<words.size();i++)
    {
        bool flag=true;
        if(s1.find(words[i][0])!=s1.end())
        {
            for(int j=0;j<words[i].size();j++)
            {
                if(s1.find(words[i][j])==s1.end())
                {
                    flag=false;
                    break;
                }
            }
        }
        else if(s2.find(words[i][0])!=s2.end())
        {
            for(int j=0;j<words[i].size();j++)
            {
                if(s2.find(words[i][j])==s2.end())
                {
                    flag=false;
                    break;
                }
            }
        }
        else
        {
            for(int j=0;j<words[i].size();j++)
            {
                if(s3.find(words[i][j])==s3.end())
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag==true)
        {
            ans.push_back(words[i]);
        }
    }
    return ans;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
}

int main()
{
    vector<string> words={"Hello","Alaska","Dad","Peace"};
    findWords(words);
    return 0;
}