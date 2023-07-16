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
void  insert_root(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }

    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else{
            insert_root(root->left,x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else{
            insert_root(root->right,x);
        }
    }
}
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {

        // 1 . ber kore niya aste hobe
        Node *f = q.front();
        q.pop();

        // 2 . jabotiyo kaj sesh korte hobe eikhane
        cout << f->val << " ";

        // 3. children gula ke line ante hobe
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    level_order(root);
    cout << endl;
    insert_root(root,x);
    cout << "After insert new node : \n";
    level_order(root);

    return 0;
}