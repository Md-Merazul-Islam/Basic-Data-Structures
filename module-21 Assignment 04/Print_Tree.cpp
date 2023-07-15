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

void reverse(Node *root)
{
    if (root == NULL)
        return;
    vector<int> v;
    queue<Node *> q;

    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        v.push_back(f->val);
        if (f->right)
            q.push(f->right);
        if (f->left)
            q.push(f->left);
    }
    reverse(v.begin(), v.end());
    for (int c : v)
    {
        cout << c << " ";
    }
}

int main()
{
    Node *root = input_tree();
    reverse(root);
    return 0;
}
