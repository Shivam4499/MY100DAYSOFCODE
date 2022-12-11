// ******************************************* NAIVE SOLUTION ****************************************** //

// Time: O(n) Space: O(26)



// #include<bits/stdc++.h>
// using namespace std;

// bool checkPangram(string sentence)
// {
//     unordered_set<int> h(26);
//     for(int i=0;i<sentence.size();i++)
//     {
//         h.insert(sentence[i]);
//     }
//     return (h.size()==26);
       
// }
// int main()
// {
//     string sentence="thequickbrownfoxjumpsoverthelazydog";
//     cout<<checkPangram(sentence);
//     return 0;
// }



//************************************************* SECOND SOLUTION ********************************************* //



// #include<bits/stdc++.h>
// using namespace std;

// bool checkPangram(string sentence)
// {
//     for(int i=0;i<26;i++)
//     {
//         char currchar='a'+i;
//         if(sentence.find(currchar)==string::npos)
//         {
//             return false;
//         }
//     }
//     return true;  
// }
// int main()
// {
//     string sentence="thequickbrownfoxjumpsoverthelazydo";
//     cout<<checkPangram(sentence);
//     return 0;
// }




// ******************************************** THIRD SOLUTION **************************************** //


#include<bits/stdc++.h>
using namespace std;

bool checkPangram(string sentence)
{
    unordered_set<int> h(sentence.begin(),sentence.end());
    return (h.size()==26);
}
int main()
{
    string sentence="thequickbrownfoxjumpsoverthelazydog";
    cout<<checkPangram(sentence);
    return 0;
}

