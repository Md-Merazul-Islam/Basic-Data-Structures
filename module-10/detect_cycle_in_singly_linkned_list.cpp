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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = b;
    c->next = a;

    Node * slow = head;
    Node* fast = head;
    bool flag = false;
    while (fast != NULL && fast->next != NULL )
    {
        slow= slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }

    if (flag )

    {
        cout<<"Cycle Detected ";
    }
    else{
        cout<<"No cycle";
    }
    return 0;
}