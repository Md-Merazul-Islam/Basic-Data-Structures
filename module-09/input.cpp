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

void priting_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void priting_revese(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prevs;
    }
    cout << endl;
}

void insert_tail(Node *&head,Node*&tail, int val)
{
    Node* newnode = new Node (val);
    if ( tail== NULL)
    {
        head = newnode;
        tail= newnode;
        return;
    }
    tail->next = newnode;
    newnode->prevs = tail;
    tail= newnode;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int  val;
    while (true)
    {
        cin>>val;
        if (val ==-1)
        {
            break;
        }
        else 
        {
            insert_tail(head,tail,val);
        }
    }

    priting_normal(head);
    priting_revese(tail);

    return 0;
}