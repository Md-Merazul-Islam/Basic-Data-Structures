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
    newnode->prevs = tail;
    tail = newnode;
}

int check_palindrome(Node *&head, Node *&tail)
{
    int flag = 0;
    Node *tmp1 = head;
    Node *tmp2 = tail;
    while (tmp1 != NULL && tmp2 != NULL)
    {

        if (tmp1->value != tmp2->value)
        {
            flag = 1;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->prevs;

    }
    if (tmp1->value != tmp2->value)
    {
        flag =1;
    
    }
    return flag;
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

    int ans = check_palindrome(head, tail);

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