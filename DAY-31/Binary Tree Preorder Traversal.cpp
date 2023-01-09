// ************************************************** SOLUTION **************************************************** //


#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> ans;
vector<int> preorderTraversal(TreeNode* root)
{
    while(root)
    {
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
    return ans;
}

int main()
{
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    return 0;
}