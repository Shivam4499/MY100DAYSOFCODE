// ***************************************** NAIVE SOLUTION ************************************* //


// #include<bits/stdc++.h>
// using namespace std;

// int goodPairs(int nums[],int n)
// {
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(nums[i]==nums[j])
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }


// int main()
// {
//     int nums[]={2,2,2,2,2};
//     int n=sizeof(nums)/sizeof(nums[0]);
//     cout<<goodPairs(nums,n);
//     return 0;
// }




// *********************************************** EFFICIENT SOLUTION *********************************************** //


// #include<bits/stdc++.h>
// using namespace std;

// int goodPairs(int nums[],int n)
// {
//     int count=0;
//     unordered_map<int,int> mp;
//     for(int i=0;i<n;i++)
//     {
//         count+=mp[nums[i]]++;
//     }
//     return count;
// }


// int main()
// {
//     int nums[]={1,2,3};
//     int n=sizeof(nums)/sizeof(nums[0]);
//     cout<<goodPairs(nums,n);
//     return 0;
// }



// ********************************************** EFFICIENT SOLUTION 2 ******************************************* //



#include<bits/stdc++.h>
using namespace std;

int goodPairs(int nums[],int n)
{
    int count=0;
    int freq[102]={0};
    for(int i=0;i<n;i++)
    {
        count+=freq[nums[i]]++;
    }
    return count;
}


int main()
{
    int nums[]={1,2,2,1,1};
    int n=sizeof(nums)/sizeof(nums[0]);
    cout<<goodPairs(nums,n);
    return 0;
}

