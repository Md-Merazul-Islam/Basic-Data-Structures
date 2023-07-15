/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool check(TreeNode* root , int val)
    {
        if(root == NULL) return true;
    
        bool l = check(root->left,val);
        bool r = check(root->right,val);

        if(val==root->val && r &&  l ) return true;
        return false;
        
    }

    bool isUnivalTree(TreeNode* root) {
         
        return check(root, root->val);
    }
};