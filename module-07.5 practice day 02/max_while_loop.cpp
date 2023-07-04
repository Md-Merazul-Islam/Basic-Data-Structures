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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}

int max_number(Node *head)
{
    if (head == NULL)
    {
        return INT_MIN;
    }
    int maxval = head->value; // header value ke max dore niye
    Node *tmp = head->next;
    while (tmp != NULL)
    {
        if (tmp->value > maxval)
        {
            maxval = tmp->value;
        }
        tmp = tmp->next;
    }
    return maxval;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    cout << "Enter your value : ";
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

    int ans=max_number(head);
    cout<<ans;

    return 0;
}