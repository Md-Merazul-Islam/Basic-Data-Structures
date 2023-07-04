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
void delet_at_pos(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prevs = tmp;
    delete deletenode;
}

void delete_tail(Node *&tail)
{
    Node *deletenode = tail;
    tail = tail->prevs;
    delete deletenode;
    tail->next = NULL;
}
void delete_head(Node *&head)
{
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
    head->prevs = NULL;
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

    int pos;
    cin >> pos;
    print_normal(head);
    print_reverse(tail);
    if (pos > size(head))
    {
        cout << "Invaid" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(tail);
    }
    else
    {
        delet_at_pos(head, pos);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}