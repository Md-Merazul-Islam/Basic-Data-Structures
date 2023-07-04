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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    else
    {
        tail->next_value = newnode;
        tail = newnode;
    }
}
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter your value : ";
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_tail(head, tail, val);
        }
    }
    for (Node *i = head; i != NULL; i = i->next_value)
    {
        for (Node *j = i->next_value; j != NULL; j = j->next_value)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
       
    }
    priting(head);
    return 0;
}