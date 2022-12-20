// ****************************************** SOLUTION ***************************************************** //


#include<bits/stdc++.h>
using namespace std;

bool checkDistances(string s, vector<int>& distance)
{
    map<char, vector<int>> mpp;

        for (int i = 0; i < s.size(); i++){
            mpp[s[i]].push_back(i);
        }

        for (auto it : mpp)
        {    
            if (it.second[1] - it.second[0] - 1 != distance[it.first - 'a']){
                return false;
            }
        }
        return true;
}

int main()
{
    string s="abaccb";
    vector<int> distance={1,3,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    cout<<checkDistances(s,distance);
    return 0;
}