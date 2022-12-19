// ********************************************** NAIVE SOLUTION *************************************************** //



// #include<bits/stdc++.h>
// using namespace std;


// int findFinalValue(vector<int>& nums, int original)
// {
//     for(int i=0;i<nums.size();i++)
//     {
//         if(original==nums[i])
//         {
//             original*=2;
//             i=-1;
//         }
//     }
//     return original;
// }

// int main()
// {
//     vector<int> nums={5,3,6,1,12};
//     int original=3;
//     cout<<findFinalValue(nums,original);
//     return 0;
// }




// ****************************************** SET FIND SOLUTION ********************************************** //


#include<bits/stdc++.h>
using namespace std;


int findFinalValue(vector<int>& nums, int original)
{
    unordered_set<int> s (nums.begin(),nums.end());
    
    while(s.find(original)!= s.end())   // while(find(nums.begin(),nums.end(),original())!=nums.end()) VECTOR FIND  METHOD
    {
        original=original*2;
    }
    return original;
}

int main()
{
    vector<int> nums={5,3,6,1,12};
    int original=3;
    cout<<findFinalValue(nums,original);
    return 0;
}