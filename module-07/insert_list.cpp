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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next_value = a;
    a->next_value = b;
    b->next_value = c;
    c->next_value = d;
    priting(head);
    int pos, val;
    cin >> pos >> val;
    if (size(head) < pos)
    {
        cout << "Invalid Position !"<<endl;
        
    }
    else
    {

        insert_list(head,pos,val);
    }

    priting(head);
    return 0;
}