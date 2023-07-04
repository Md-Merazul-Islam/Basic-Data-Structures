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
void recoursion(Node * n)
{

    if ( n == NULL)
    {
        return;
    }
    cout<<n->value<<" ";
    recoursion(n->next_value);

}
void recursion_reverce(Node * n) // reverce 
{

    if ( n == NULL)
    {
        return;
    }
    recoursion(n->next_value);
    cout<<n->value<<" ";

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
    recoursion( head);
    cout<<endl;
    recursion_reverce( head);



    return 0;
}