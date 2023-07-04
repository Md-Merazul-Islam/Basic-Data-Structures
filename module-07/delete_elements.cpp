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

void delete_pos(Node *head, int pos)
{
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next_value;
    }
    Node *deletenode = tmp->next_value;
    tmp->next_value = tmp->next_value->next_value;
    delete deletenode;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next_value;
    }

    return cnt;
}

void head_delete(Node *&head)
{
    Node *deletehead = head;
    head = head->next_value;
    delete deletehead;
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next_value = a;
    a->next_value = b;
    b->next_value = c;
    c->next_value = d;
    priting(head);
    int pos;
    cout << "Enter Your Position :";
    cin >> pos;
    if (size(head) == pos || size(head) < pos)
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        head_delete(head);
    }
    else
    {
        delete_pos(head, pos);
    }
    priting(head);

    return 0;
}