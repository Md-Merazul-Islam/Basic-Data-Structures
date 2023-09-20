#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void insert(Node *& root ,int val)
{
    
    if(root == NULL) 
    {
        root = new Node(val);
        return;
    }
    Node * cur = root;
    Node * par = NULL;
    while(cur != NULL)
    {
        if ( newnode->val < cur->val)
        {
            par = cur ;
            cur= cur->left;
        }
        else 
        {
            par = cur ;
            cur = cur->right;
        }
    }
    if (newnode->val < par->val)
    {
        par->left= newnode;
    }
    else 
    {
        par->right = newnode;
    }
}
void level_order(Node * root )
{
    if (root == NULL) return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node * f = q.front();
        q.pop();
        cout<<f->val<<" ";
        if (f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
int main()
{
    Node *root = NULL;
    insert(root, 50);
    insert(root, 40);
    insert(root, 60);
    insert(root, 30);
    insert(root, 35);
    level_order(root);
    return 0;
}
