// *********************************************** SOLUTION *********************************************** //


// #include<bits/stdc++.h>
// using namespace std;

// int countBalls(int lowLimit, int highLimit) {
//         map<int,int> mp;
//         for(int i=lowLimit;i<=highLimit;i++)
//         {
//             int sum=0,temp=i;
//             while(temp)
//             {
//                 sum+=temp%10;
//                 temp/=10;
//             }
//             mp[n]++;
//         }
//         int ans=0;
//         for(auto i:mp)
//         {
//             ans=max(ans,i.second);
//         }
//         return ans;
// }

// int main()
// {
//     int lowlimit=1,highlimit=10;
//     cout<<countBalls(lowlimit,highlimit);
//     return 0;
// }




// ************************************************ EFFICIENT SOLUTION ********************************************* //



#include<bits/stdc++.h>
using namespace std;

int countBalls(int lowLimit, int highLimit) {
        vector<int> box(46,0);    //int box[46]={};
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int sum=0,temp=i;
            while(temp)
            {
                sum+=temp%10;
                temp/=10;    
            }
            box[sum]++;
        }
        return *max_element(box.begin(),box.end()); // return *max_element(begin(box),end(box))
}

int main()
{
    int lowLimit=5,highLimit=99999;
    cout<<countBalls(lowLimit,highLimit);
    return 0;
}

