// ****************************************** Unordered_set Solution *************************************************//

// #include<bits/stdc++.h>
// using namespace std;

// int uniqueMorseRepresentations(vector<string> &words)
// {
//     vector<string> morseCode={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

//     unordered_set<string> h;
//     for(int i=0;i<words.size();i++)
//     {
//         string code="";
//         for(int j=0;j<words[i].size();j++)
//         {
//             code+=morseCode[words[i][j]-'a'];
//         }
//         h.insert(code);
//     }
//     return h.size();
// }

// int main()
// {
//     vector<string> words={"gin","zen","gig","msg"};
//     cout<<uniqueMorseRepresentations(words)<<endl;
//     return 0;
// }






// ************************************************* Map SOLUTION *********************************************** //






#include<bits/stdc++.h>
using namespace std;

int uniqueMorseRepresentations(vector<string> &words)
{
    vector<string> morseCode={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    unordered_map<string,int> mp;
    for(int i=0;i<words.size();i++)
    {
        string code="";
        for(int j=0;j<words[i].size();j++)
        {
            code+=morseCode[words[i][j]-'a'];
        }
        mp[code]=1;
    }
    return mp.size();
}

int main()
{
    vector<string> words={"gin","zen","gig","msg","bag"};
    cout<<uniqueMorseRepresentations(words)<<endl;
    return 0;
}
