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
void priting(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next_value;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next_value;
    }

    return cnt;
}
void insert_list(Node *head, int pos, int val)
{

    Node *tmp = head;
    Node *newnode = new Node(val);
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next_value;
    }
    newnode->next_value = tmp->next_value;
    tmp->next_value = newnode;
}

void insert_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next_value = head;
    head = newnode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node* newnode = new Node (val);
    if ( head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    else 
    {
        tail->next_value= newnode;
        tail = newnode;
    }
    
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    head->next_value = a;
    a->next_value = b;
    b->next_value = c;
    c->next_value = d;
    priting(head);

    int pos, val;
    cout << "Enter your position :";
    cin >> pos;
    cout << "Enter your value : ";
    cin >> val;
    if (size(head) < pos)
    {
        cout << "Invalid Position !" << endl;
    }
    else if (pos == 0)
    {
        insert_head(head, val);
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    else
    {

        insert_list(head, pos, val);
    }

    priting(head);
    return 0;
}