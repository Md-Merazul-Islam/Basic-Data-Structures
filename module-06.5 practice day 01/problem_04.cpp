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
void insert_tail(Node *&head, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next_value != NULL)
    {
        tmp = tmp->next_value;
    }
    tmp->next_value = newnode;
}
void printing_list(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next_value;
    }
    cout << endl;
}

void insert_new_elements(Node *&head, int pos, int val)
{
    if (pos < 0)
    {
        cout << "Invalid" << endl;
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
        tmp = tmp->next_value;
    }
    if (tmp == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }
    Node *newnode = new Node(val);
    newnode->next_value = tmp->next_value;
    tmp->next_value = newnode;
    printing_list(head);
}

int main()
{
    Node *head = NULL;
    // cout << "Enter your value :";

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_tail(head, v);
    }
    //  printing_list(head);
    int test;
    cin >> test;
    while (test--)
    {
        int pos, val;
        cin >> pos >> val;

        insert_new_elements(head, pos, val);
    }
    printing_list(head);
    return 0;
}
