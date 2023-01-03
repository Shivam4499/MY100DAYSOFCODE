// ******************************************** SOLUTION ************************************************ //



#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
    TreeNode *right;     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
       };

TreeNode* createBinaryTree(vector<vector<int>>& descriptions)
{
    unordered_map<int,TreeNode*> m;
    unordered_map<int,int> parent,child;
    for(int i=0;i<descriptions.size();i++)
    {
        if(m.find(descriptions[i][0])==m.end())
        {
            TreeNode* create=new TreeNode(descriptions[i][0]);
            m[descriptions[i][0]]=create;
        }
        if(m.find(descriptions[i][1])==m.end())
        {
            TreeNode* create=new TreeNode(descriptions[i][1]);
            m[descriptions[i][1]]=create;
        }
        if(descriptions[i][2])
        {
            m[descriptions[i][0]]->left=m[descriptions[i][1]];
        }
        else
        {
            m[descriptions[i][0]]->right=m[descriptions[i][1]];
        }
        parent[descriptions[i][0]]++;
        child[descriptions[i][1]]++;
    }
    TreeNode* ans;
        for(auto it:m)
        {
            if(parent.find(it.first)!=parent.end() && child.find(it.first)==child.end())
            {
                ans=it.second;
                break;
            }
        }
        return ans;
}