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

void insert_at_tail(Node *&head, Node *&tail, int val)
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

void sort_at_list(Node *&head)
{
    Node *tmp1 = head;
    while (tmp1 != NULL)
    {
        Node *tmp2 = tmp1->next;
        while (tmp2 != NULL)
        {
            if (tmp1->value > tmp2->value)
            {
                swap(tmp1->value, tmp2->value);
            }
            tmp2 = tmp2->next;
        }
        tmp1 = tmp1->next;
    }
    
}

void delete_duplicate(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        while (tmp->next != NULL && tmp->value == tmp->next->value)
        {
            tmp->next = tmp->next->next;
        }
        tmp = tmp->next;
    }
}
void printi(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
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
            insert_at_tail(head, tail, val);
        }
    }

    sort_at_list(head);
    delete_duplicate(head);
    printi(head);
    return 0;
}