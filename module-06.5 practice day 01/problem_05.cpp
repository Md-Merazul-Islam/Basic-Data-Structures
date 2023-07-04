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
bool printing_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *tmpnxt = tmp->next_value;
        while (tmpnxt != NULL)
        {
            if (tmp->value > tmpnxt->value)
            {
                return false;
                break;
            }
            tmpnxt = tmpnxt->next_value;
        }
        tmp = tmp->next_value;
    }
    cout << endl;
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

    if (printing_list(head))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
