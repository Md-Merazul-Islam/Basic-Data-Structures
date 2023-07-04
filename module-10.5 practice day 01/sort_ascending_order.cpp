#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int value;
    Node *next;
 
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        
    }
};
void insert(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void reverse(Node *&head)
{
    Node *tmp1 = head;

    while (tmp1 != NULL)
    {
        Node *tmp2 = tmp1->next;
        while (tmp2 != NULL)
        {
            if (tmp1->value > tmp2->value)
            {
               swap(tmp1->value, tmp2->value);
            }
            tmp2 = tmp2->next;
        }
        tmp1 = tmp1->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
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
            insert(head, tail, val);
        }
    }

    reverse(head);
    normal(head);
    return 0;
}