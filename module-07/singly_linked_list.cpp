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
void priting(Node * head)
{
    Node * tmp = head;
    while ( tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next_value;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next_value=a;
    a->next_value=b;
    b->next_value=c;
    c->next_value=d;
    priting(head);
    return 0;
}