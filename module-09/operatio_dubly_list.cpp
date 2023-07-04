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
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prevs = newnode;
    head = newnode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prevs = tail;
    tail = newnode;
}

void insert_any_position(Node *&head, Node *&tail, int pos, int val)
{
    Node *tmp = head;
    Node *newnode = new Node(val);
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->next->prevs = newnode;
    newnode->prevs = tmp;
}

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prevs;
    }
    cout << endl;
}

int size(Node *&head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    // Node* head = NULL;
    // Node* tail = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prevs = head;
    a->next = b;
    b->prevs = a;
    b->next = c;
    c->prevs = b;

    int val, pos;
    cin >> pos >> val;

    if (pos == 0)
    {
        insert_head(head, tail, val);
    }

    else if (pos == size(head))
    {

        insert_tail(head, tail, val);
    }
    else if (pos > size(head))
    {
        cout << "Invaild" << endl;
    }
    else
    {
        insert_any_position(head, tail, pos, val);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}