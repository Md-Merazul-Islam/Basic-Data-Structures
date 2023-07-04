#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int value;
    Node *next;
    Node *prevs;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prevs = NULL;
    }
};

void priting(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse_priting(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prevs;
    }
    swap(i->value,j->value);
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    head->next = a;
    a->prevs = head;
    a->next = b;
    b->prevs = a;
    b->next = c;
    c->prevs = b;
    c->next = d;
    d->prevs = c;
    priting(head);
    reverse_priting(head, tail);
    priting(head);
    return 0;
}
