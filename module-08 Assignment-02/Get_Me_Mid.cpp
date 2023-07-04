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

void insert_list(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void mid_value(Node *&head)
{
    int cnt = 0;
    Node *tmp = head;

    if (head == NULL)
    {
        return;
    }
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    Node *mid = head;
    for (int i = 1; i <= (cnt / 2) - 1; i++)
    {
        mid = mid->next;
    }
    if (cnt % 2 == 0)
    {
        cout << mid->value << " ";
        cout << mid->next->value << " ";
    }
    else if (cnt == 1)
    {
        cout << mid->value << " ";
    }
    else
    {
        cout << mid->next->value << " ";
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
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
            insert_list(head, tail, val);
        }
    }
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {

                swap(i->value, j->value);
            }
        }
    }

    mid_value(head);
    return 0;
}