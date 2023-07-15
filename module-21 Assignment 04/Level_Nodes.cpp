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
    Node *root;
    int val;
    cin >> val;
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

        Node *left_val;
        Node *right_val;

        int l, r;
        cin >> l >> r;

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
void level_node(Node *root, int x)
{
    bool flag = false;
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();
        Node *node = pr.first;
        int level = pr.second;
        if(level==x)
        {
            cout<<node->val<<" ";
            flag = true;
        } 

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    if(!flag) cout<<"Invalid";
}   

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    level_node(root, x);
    return 0;
}
