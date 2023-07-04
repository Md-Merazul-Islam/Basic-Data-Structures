#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int value;
    Node *next_value;
    Node(int value)
    {
        this->value = value;
        this->next_value = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    else
    {
        tail->next_value = newnode;
        tail = newnode;
    }
}
void reverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    reverse(head->next_value);
    cout << head->value << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter your value : ";
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_tail(head, tail, val);
        }
    }

    reverse(head);
    return 0;
}