// *************************************** NAIVE SOLUTION **************************************************** //

// Time:O(J+S) Space:O(J)

// #include<bits/stdc++.h>
// using namespace std;

// int numJewelsInStone(string jewels,string stones)
// {
//     unordered_set<char> h;
//     for(int i=0;i<jewels.size();i++)
//     {
//         h.insert(jewels[i]);
//     }
//     int count=0;
//     for(int i=0;i<stones.size();i++)
//     {
//         if(h.find(stones[i])!=h.end())
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main()
// {
//     string jewels="aA";
//     string stones="aAAbbbb";
//     cout<<numJewelsInStone(jewels,stones);
//     return 0;
// }


// ******************************************** EFFIENT SOLUTION *****************************************//

// Time:O(J+S)  Space:O(1)


#include<bits/stdc++.h>
using namespace std;

bool aToZlist[58];
int numJewelsInStone(string jewels,string stones)
{
    for(int i=0;i<jewels.size();i++)
    {
        aToZlist[jewels[i]-65]=true;
    }
    int count=0;
    for(int i=0;i<stones.size();i++)
    {
        if(aToZlist[stones[i]-65])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string jewels="aA";
    string stones="aAAbbbb";
    cout<<numJewelsInStone(jewels,stones);
    return 0;
}
