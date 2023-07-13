#include <bits/stdc++.h> 
/*
Following is the structure of Tree Node

class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/
vector<int> v;
void post_order(TreeNode* root)
{
    if(root == NULL) return;
    post_order(root->left);
    post_order(root->right);
    v.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode* root)
{
    // Write your code here
    v.clear();
    post_order(root);
    return v;	
    
}
