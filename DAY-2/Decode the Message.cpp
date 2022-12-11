// ******************************************** NAIVE SOLUTION *********************************************** //


// Time: O(key+Message) Space: O(26)



// #include<bits/stdc++.h>
//     using namespace std;

//     string decodeMessage(string key, string message)
//     {
//         unordered_map<char,char> keymap(26);
//         char ch='a';
//         for(int i=0;i<key.size();i++)
//         {
//             if(key[i]>=97 && key[i]<=122)
//             {
//                 if(keymap.find(key[i])==keymap.end())
//                 {
//                     keymap[key[i]]=ch;
//                     ch++;
//                 }
//             }
//         }
//         string ans="";
//         for(int i=0;i<message.size();i++)
//         {
//             if(message[i]>=97 && message[i]<=122)
//             {
//                 ans.push_back(keymap[message[i]]);
//             }
//             else{
//                 ans.push_back(message[i]);
//             }
//         }
//         return ans; 
//     }
//     int main()
//     {
//         string key="the quick brown fox jumps over the lazy dog";
//         string message="vkbs bs t suepuv";
//         cout<<decodeMessage(key,message);
//     }    



// ****************************************** EFFICIENT SOLUTION ************************************************* //







#include<bits/stdc++.h>
    using namespace std;

    string decodeMessage(string key, string message)
    {
        
        unordered_map<char, char> keyMap;
        string alphabets = "abcdefghijklmnopqrstuvwxyz";
        keyMap[' '] = ' ';
        int index = 0;
        for(int i = 0; i < key.size(); i++){
            if(keyMap[key[i]] == 0){
                keyMap[key[i]] = alphabets[index];
                index++;
            }
        }
        
        for(int i = 0; i<message.size();i++){
            message[i] = keyMap[message[i]];
        }
        
        return message;
    }
    int main()
    {
        string key="the quick brown fox jumps over the lazy dog";
        string message="vkbs bs t suepuv";
        cout<<decodeMessage(key,message);
    }   