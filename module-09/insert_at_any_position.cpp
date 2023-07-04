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

void insert_pos_value(Node *head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for ( int i =1; i<= pos-1;i++)
    {
        tmp = tmp->next;
    }
    // newnode->next = tmp->next; // 100 cnt hoice 30 er sate 
    // tmp->next =  newnode; // 20 cnt hoiche 100 er sate
    // newnode->next->prevs = newnode; // 30 er prvs e 100 cnt hoiche
    // newnode->prevs = tmp; //100 er prvs e 20 cnt  
    tmp->next = newnode->next;
    tmp->next = newnode;
    newnode->next->prevs = newnode;
    newnode->prevs = tmp;
}
int size(Node* head)
{
    int cnt =0;
    Node* tmp = head;
    while ( tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
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
    int pos,val;
    cin>>pos>>val;
    if (pos >= size(head))
    {
        cout<<"Invalid"<<endl ;
    }
    else 
    {

    insert_pos_value(head,pos,val);
    }

       priting_normal(head);
       priting_revese(tail);

    return 0;
}