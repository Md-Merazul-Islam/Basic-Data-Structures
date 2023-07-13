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
        // 1. ber kore ante hobe
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
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

        p->left = left_val;
        p->right = right_val;

        // 3. children gula ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

void level_order(Node *root)
{
    if(root ==NULL)
    {
      cout<< " nai";
      return;
    }
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

    level_order(root);
    return 0;
}