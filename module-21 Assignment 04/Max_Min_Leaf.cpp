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

// int maximum(Node *root)
// {
//     if (root == NULL)
//         return 0;
//     int l = maximum(root->left);
//     int r = maximum(root->right);
//     if (root->left == NULL && root->right == NULL)
//     {
//         return root->val;
//     // return max(root->val, max(l, r));
//     }
//    
// }

void maximum_minimum(Node *root, int &max, int& min)
{

    // int root_val = root->val;
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        if (root->val > max)
            max = root->val;
        if (root->val < min)
            min = root->val;
    }
    maximum_minimum(root->left, max, min);
    maximum_minimum(root->right, max, min);
}

int main()
{
    Node *root = input_tree();
    int max, min;
    max = INT_MIN;
    min = INT_MAX;
    maximum_minimum(root, max, min);

    cout << max << " " << min << " ";
    return 0;
}