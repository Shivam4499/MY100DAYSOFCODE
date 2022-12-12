// ******************************************** Naive Solution ********************************************** //




// #include<bits/stdc++.h>
// using namespace std;

// int countKDifference(int nums[],int n,int k)
// {
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(abs(nums[i]-nums[j])==k)
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }


// int main()
// {
//     int nums[]={1,2,2,1},k=1;
//     int n=sizeof(nums)/sizeof(nums[0]);
//     cout<<countKDifference(nums,n,k);
// }




// ********************************************** EFFICIENT SOLUTION ******************************************* //




#include<bits/stdc++.h>
using namespace std;

int countKDifference(int nums[],int n,int k)
{

    unordered_map<int,int> mp;
    int count=0;
    for(int i=0;i<n;i++)
    {
        count+=mp[nums[i]+k]+mp[nums[i]-k];
        mp[nums[i]]++;
    }
    return count;
}


int main()
{
    int nums[]={1,2,2,1,4,5,6},k=1;
    int n=sizeof(nums)/sizeof(nums[0]);
    cout<<countKDifference(nums,n,k);
}
