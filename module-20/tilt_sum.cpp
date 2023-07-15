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
    int sum=0;
    int findTilt_check(TreeNode* root , int &sum)
    {
        if(root == NULL) return 0;
        int l = findTilt_check(root->left,sum);
        int r = findTilt_check(root->right,sum);
        
        int tilt = abs(l-r);
        sum = sum+ tilt;
        return l+r+root->val;

    }
    int findTilt(TreeNode* root) {
        findTilt_check(root,sum);
        return sum;
    }
};