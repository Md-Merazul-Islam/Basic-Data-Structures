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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next_value != NULL)
    {
        tmp = tmp->next_value;
    }
    tmp->next_value = newNode;
}

void priting_linked_list_value(Node *head)
{
    cout << endl
         << "Linked list inserted value : " << endl
         << endl;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next_value;
    }
    cout << endl
         << endl;
}

int main()
{
    cout << "Enter your value : ";
    int val;
    Node *head = NULL;
    while (true)
    {

        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    priting_linked_list_value(head);
    return 0;
}