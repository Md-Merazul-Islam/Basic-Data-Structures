#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int maximum(TreeNode<int>* root)
{
    if(root == NULL) return 0;
    
    int l= maximum(root->left);
    int r= maximum(root->right);
    
    return  max(l,r)+1 ;
}
int maxDepth(TreeNode<int> *root) {
    // Write your code here.
    return maximum(root)-1;
}