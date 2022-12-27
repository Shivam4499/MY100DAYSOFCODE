// ********************************************** SOLUTION ***************************************************** //



#include<bits/stdc++.h>
using namespace std;

int countDistinctIntegers(vector<int>& nums)
{
    unordered_set<int> s(nums.begin(),nums.end());
    for(auto i:nums)
    {
        int num=0;
        while(i!=0)
        {
            int rem=i%10;
            num=num*10+rem;
            i=i/10;
        }
        s.insert(num);
    }
    return s.size();
}
int main()
{
    vector<int> nums={1,13,10,12,31};
    cout<<countDistinctIntegers(nums);
    return 0;
}