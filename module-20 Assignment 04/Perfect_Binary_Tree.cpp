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

// bool perfect_binary(Node *root)
// {
//     bool flag = false;
//     if (root == NULL)
//         return false;
//     if (root->left == NULL && root->right == NULL)
//     {
//         return true;
//     }
//     int l = perfect_binary(root->left);
//     int r = perfect_binary(root->right);

//     return (l && r);
// }

bool perfect_binary(Node *root)
{
    if (root == NULL)
        return false;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        if (f != NULL && f->left == NULL && f->right == NULL)
        {
            return true;
        }
        if (f->left == NULL || f->right == NULL)
        {
            return false;
        }
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return true;
}
int main()
{
    Node *root = input_tree();

    if (perfect_binary(root))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
