// ************************************************** SOLUTION *********************************************** //




#include<bits/stdc++.h>
using namespace std;

map<string,string> m;
int n=0;

string encode(string longUrl)
{
    string res="http://tinyurl.com/"+to_string(n);
    n++;
    m[res]=longUrl;
    return res;
}

string decode(string shortUrl)
{
    return m[shortUrl];
}

int main()
{
    string longUrl="https://leetcode.com/problems/design-tinyurl";
    cout<<encode(longUrl)<<endl;
    cout<<decode(encode(longUrl));
    return 0;
}