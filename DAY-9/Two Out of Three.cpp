// ********************************************* SOLUTION ******************************************************* //



#include<bits/stdc++.h>
using namespace std;

vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    map<int, set<int>> mp;
    for(int i = 0 ; i < nums1.size() ; i++){
    mp[nums1[i]].insert(1);
}
for(int i = 0 ; i < nums2.size() ; i++){
    mp[nums2[i]].insert(2);
}

for(int i = 0 ; i < nums3.size() ; i++){
    mp[nums3[i]].insert(3);
}
vector<int> ans;

for(auto it = mp.begin() ; it!=mp.end() ; it++){
    if(it->second.size()>=2){ans.push_back(it->first);}
}
return ans;
}

int main()
{
    vector<int> num1={};
    vector<int> num2={};
    vector<int> num3={};
    twoOutOfThree(num1,num2,num3);
    return 0;
}