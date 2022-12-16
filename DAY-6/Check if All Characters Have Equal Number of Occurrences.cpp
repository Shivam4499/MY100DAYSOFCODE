// ?************************************************* SOLUTION ************************************************ //


#include<bits/stdc++.h>
using namespace std;

bool areOccurrencesEqual(string s) 
{
       unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int num=mp[s[0]];
        for(int i=1;i<s.size();i++)
        {
            if(num!=mp[s[i]])
            {
                return false;
                break;
            }
        }
        return true; 
}

int main()
{
    string s="vvvvvvvvvvvvvvvvvvv";
    cout<<areOccurrencesEqual(s);
    return 0;
}




