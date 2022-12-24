// ********************************************** SOLUTION ****************************************************** //


#include<bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string>& words)
{
    map<char,int> m;
    for(auto i:words[0])
    {
        m[i]++;
    }
    map<char,int>cur;
    for(auto &i:words)
    {
        cur.clear();
        for(auto j:i)
        {
            cur[j]++;
        }
        for(auto &k:m)
        {
            k.second=min(k.second,cur[k.first]);
        }
    }
    vector<string> sol;
    string s;
    for(auto &i:m)
    {
        while(i.second!=0)
        {
            s=i.first;
            sol.push_back(s);
            i.second--;
        }
    }
    return sol;
}

int main()
{
    vector<string> words={"bella","label","roller"};
      commonChars(words);
    return 0;
}

