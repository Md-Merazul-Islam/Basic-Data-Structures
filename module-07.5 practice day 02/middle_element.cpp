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
    }
    tail->next_value = newnode;
    tail = newnode;
}
void midsize(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next_value;
    }
    int mid = (cnt / 2)+1;
    Node *midsz = head;
    for (int i = 1; i <= mid - 1; i++)
    {
        midsz = midsz->next_value;
    }
    if (cnt % 2 == 1)
    {
        cout << midsz->value << " ";
    }
    else if (cnt % 2 == 0)
    {
        cout << midsz->value << " ";
        cout << midsz->next_value->value << " ";
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    cout << "Enter your value: ";
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
    midsize(head);
    return 0;
}