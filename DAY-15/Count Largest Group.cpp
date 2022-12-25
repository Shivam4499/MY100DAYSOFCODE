// *********************************************** SOLUTION **************************************************** //


#include<bits/stdc++.h>
using namespace std;

int countLargestGroup(int n)
{
    // 
    map<int,int> m;
        for(int i=1;i<=n;i++){
            int t=i;
            int sum=0;
            while(t!=0){
                sum+=t%10;
                t=t/10;
            }
            m[sum]++;
            sum=0;
        }
        
        //finding the max in map 
        int max=0;
        for(auto i=m.begin();i!=m.end();i++){
            if(max<i->second){
                max=i->second;
            }
        }
        
        //counting those max counts 
        int count=0;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second==max){
                count++;
            }
        }
        return count;
}

int main()
{
    int n=2;
    cout<<countLargestGroup(n);
    return 0;
}