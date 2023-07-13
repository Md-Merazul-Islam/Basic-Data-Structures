#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    
    //  Write your code here.

    vector<int> v;
    queue<BinaryTreeNode<int>* > q;
    if(root == NULL) return vector<int>();
    q.push(root);
    
    while(!q.empty())
    {
        BinaryTreeNode<int>* newnode = q.front();
        q.pop();

        v.push_back(newnode->val);
        
        if(newnode->left) q.push(newnode->left);
        if(newnode->right) q.push(newnode->right);
    }
    
    return v;
}