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

void insert_at_head(Node *&head, Node *&tail, int val)
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
void insert_at_tail(Node *&head, Node *&tail, int val)
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

void insert_at_any(Node *&head, Node *&tail, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->next->prevs = newnode;
    newnode->prevs = tmp;
}


void print_left_to_right(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_right_to__left(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prevs;
    }
    cout << endl;
}
int lenght(Node *&head)
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
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int size = lenght(head);
        int x, v; // x= pos, v= val
        cin >> x >> v;
        if (x > size)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (x == 0)
            {
                insert_at_head(head, tail, v);
            }
            else if (x == size)
            {
                insert_at_tail(head, tail, v);
            }
            else
            {
                insert_at_any(head, tail, x, v);
            }
            print_left_to_right(head);
            print_right_to__left(tail);
        }
    }



    return 0;
}









#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void insert_head(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

int size(node *head)
{
    node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_postion(node *&head, int pos, int val)
{
    node *newnode = new node(val);
    node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->next->prev = newnode;
    newnode->prev = tmp;
}

void print_normal(node *head)
{
    node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(node *head)
{
    node *tmp = head;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos > size(head))
        {
            cout << "invalid" << endl;
        }
        else
        {

            if (pos == 0)
            {
                insert_head(head, tail, val);
            }
            else if (pos == 1)
            {
                insert_tail(head, tail, val);
            }
            else
            {
                insert_postion(head, pos, val);
            }
            print_normal(head);
            print_reverse(head);
        }
    }
    return 0;
}