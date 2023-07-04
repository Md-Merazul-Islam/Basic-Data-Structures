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

void insert_list(Node *&head, Node *&tail, int val)
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

int size_list(Node *&head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int check_list(Node *&head1, Node *&head2)
{
    int flag = 0;
    int size1 = size_list(head1);
    int size2 = size_list(head2);
    Node *tmp1 = head1;
    Node *tmp2 = head2;

    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (size1 == size2)
        {
            if (tmp1->value != tmp2->value)
            {
                flag = 1;
                break;
            }
        }
        else if (size1 > size2)
        {
            flag = 1;
            break;
        }
        else if (size1 < size2)
        {
            flag = 2;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    return flag;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        else
        {

            insert_list(head1, tail1, val1);
        }
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        else
        {
            insert_list(head2, tail2, val2);
        }
    }

    int ans = check_list(head1, head2);
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