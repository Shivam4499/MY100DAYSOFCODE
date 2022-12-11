// **************************************** NAIVE SOLUTION ******************************************//

// Time: O(n^3) Space:O(1)


// #include<bits/stdc++.h>
// using namespace std;

// int arithmeticTriplets(int nums[],int n,int diff)
// {
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             for(int k=j+1;k<n;k++)
//             {
//                 if((nums[j]-nums[i]==diff) && (nums[k]-nums[j]==diff))
//                 {
//                     count++;
//                 }
//             }
//         }
//     }
//     return count;
// }

// int main()
// {
//     int nums[]={0,1,4,6,7,10},diff=3;
//     int n=sizeof(nums)/sizeof(nums[0]);
//     cout<<arithmeticTriplets(nums,n,diff);
//     return 0;
// }



// ******************************************** EFFICIENT SOLUTION *********************************************** //


#include<bits/stdc++.h>
using namespace std;

int arithmeticTriplets(int nums[],int n,int diff)
{
    int count=0;
    unordered_map<int,bool> mp;
    for(int i=0;i<n;i++)
    {
        mp[nums[i]]=true;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[nums[i]-diff] && mp[nums[i]+diff])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int nums[]={0,1,4,6,7,10},diff=3;
    int n=sizeof(nums)/sizeof(nums[0]);
    cout<<arithmeticTriplets(nums,n,diff);
    return 0;
}









