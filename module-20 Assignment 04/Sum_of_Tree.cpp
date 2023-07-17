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

Node *input_tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left_val;
        Node *right_val;

        if (l == -1)
            left_val = NULL;
        else
            left_val = new Node(l);

        if (r == -1)
            right_val = NULL;
        else
            right_val = new Node(r);

        parent->left = left_val;
        parent->right = right_val;

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    return root;
}

int summation(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
 
    int l = summation(root->left);
    int r = summation(root->right);

    return l+r+root->val;

}

int main()
{
    Node *root = input_tree();
 
    int ans = summation(root);
    cout<<ans<<endl;
    
    return 0;
}
