// *************************************************** SOLUTION *************************************************** //



#include<bits/stdc++.h>
using namespace std;

bool digitCount(string num) {
    map<int,int> m;
    for(int i=0;i<num.size();i++)
    {
        m[num[i]-'0']++;
    }
    for(int i=0;i<num.size();i++)
    {
        if(m[i]!=num[i]-'0')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string num="030";
    cout<<digitCount(num);
    return 0;
}