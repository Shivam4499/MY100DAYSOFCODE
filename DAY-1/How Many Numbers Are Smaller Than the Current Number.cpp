// ******************************************** NAIVE SOLUTION ****************************************//


// Time:O(n^2)  Space:O(1)

// #include<bits/stdc++.h>
// using namespace std;

// int smallerNumbersThanCurrent(int nums[],int n)
// {
//     int count;
//     for(int i=0;i<n;i++)
//     {
//         count=0;
//         for(int j=0;j<n;j++)
//         {
//             if(nums[i]>nums[j] && i!=j)
//             {
//                 count++;
//             }
//         }
//         cout<<count<<" ";
//     }
//     return 0;
// }

// int main()
// {
//     int nums[]={8,1,2,2,3};
//     int n=sizeof(nums)/sizeof(nums[0]);
//     smallerNumbersThanCurrent(nums,n);
//     return 0;
// }




// ********************************************* EFFICIENT SOLUTION ********************************************* //

// Time: O(nlogn) Space:O(n)


#include<bits/stdc++.h>
using namespace std;

int smallerNumbersThanCurrent(int nums[],int n)
{
    unordered_map<int,int> mp;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=nums[i];
    }
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--)
    {
        mp[arr[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        nums[i]=mp[nums[i]];
        cout<<nums[i]<<" ";
    }
    return 0;
}

int main()
{
    int nums[]={6,5,4,8};
    int n=sizeof(nums)/sizeof(nums[0]);
    smallerNumbersThanCurrent(nums,n);
    return 0;
}

