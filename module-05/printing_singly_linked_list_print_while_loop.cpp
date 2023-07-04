#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int value;
    node *next_value;
    node(int value)
    {
        this->value = value;
        this->next_value = NULL;
    }
};
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);
    head->next_value = a;
    a->next_value = b;
    b->next_value = c;
    c->next_value = d;

    // while (head != NULL)
    // {
    //     cout << head->value << endl;
    //     head = head->next_value;
    // }


    node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->value<<endl;
        tmp= tmp->next_value;
    }
    return 0;
}