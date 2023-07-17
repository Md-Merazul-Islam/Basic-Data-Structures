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
Node *convert(int a[], int n, int l, int r)
{
    if(l>r) return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *rootleft = convert(a, n, l, mid - 1);
    Node *rootright = convert(a, n, mid + 1, r);
    root->left = rootleft;
    root->right = rootright;
    return root;
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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Node *root = convert(a, n, 0, n - 1); // [a= array , n= array size , 0= first index, n-1= last index]
    level_order(root);
    return 0;
}