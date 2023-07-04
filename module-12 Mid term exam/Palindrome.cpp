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

void insert_at_tail(Node *&head, Node *&tail, int val)
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

void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

bool check_palindrome(Node *&head)
{
    bool flag = false;
    Node *newHead = NULL;
    Node *newtail = NULL;
    Node *tmp = head;
    while (tmp != NULL)
    {
        insert_at_tail(newHead, newtail, tmp->value);
        tmp = tmp->next;
    }

    reverse(newHead, newHead);

    tmp = head;
    Node *tmp2 = newHead;
    while (tmp != NULL)
    {
        if (tmp->value != tmp2->value)
        {
            flag = true;
            return flag;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return flag;
}

// void pritnig(Node *head)
// {
//     Node * tmp = head;
//     while ( tmp != NULL)
//     {
//         cout <<tmp->value <<" ";
//         tmp = tmp->next;
//     }

// }

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
            insert_at_tail(head, tail, val);
        }
    }
    // pritnig(head);

    bool ans = check_palindrome(head);

    if (ans)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}
