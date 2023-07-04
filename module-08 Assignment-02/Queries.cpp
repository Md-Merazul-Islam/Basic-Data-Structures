#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next= head;
   head = newnode;
}
void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    int pos, val;
    for (int i = 0; i < q; i++)
    {
       
        cin >> pos; // pos
        cin >> val; // val
        if (pos == 0)
        {
            insert_head(head, tail, val);
        }
        else if (pos == 1)
        {
            insert_tail(head, tail, val);
        }

        cout << head->value << " " << tail->value << endl;
    }

    return 0;
}