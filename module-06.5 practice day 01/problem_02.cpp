// #include <bits/stdc++.h>

// using namespace std;
// class Node
// {
// public:
//     int value;
//     Node *next_value;
//     Node(int value)
//     {
//         this->value = value;
//         this->next_value = NULL;
//     }
// };
// void insert_tail(Node *&head, int v)
// {
//     Node *newnode = new Node(v);

//     if (head == NULL)

//     {
//         head = newnode;
//         return;
//     }
//     Node *tmp = head;
//     while (tmp->next_value != NULL)
//     {
//         tmp = tmp->next_value;
//     }
//     tmp->next_value = newnode;
// }

// bool pirnt_list(Node *head)
// {

//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         Node *nxt = tmp->next_value;
//         while (nxt != NULL)
//         {
//             if (tmp->value == nxt->value)
//             {
//                return true;
//             }
//             nxt = nxt->next_value;
//         }
//         tmp = tmp->next_value;
//     }
// }
// int main()
// {
//     Node *head = NULL;
//     int v;
//     cout << "Enter your value :";
//     while (true)
//     {

//         cin >> v;
//         if (v == -1)

//             break;
//         insert_tail(head, v);
//     }
//     if (pirnt_list(head))
//     {
//         cout<<"YES";
//     }
//     else
//     {
//         cout<<"NO";
//     }

//     return 0;
// }

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
    Node *tmp = head;
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    while (tmp->next_value != NULL)
    {

        tmp = tmp->next_value;
    }
    tmp->next_value = newnode;
}

bool printing(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *tmpnxt = tmp->next_value;
        while (tmpnxt != NULL)
        {
            if (tmp->value == tmpnxt->value)
            {
                return true;
            }
            tmpnxt = tmpnxt->next_value;
        }

        tmp = tmp->next_value;
    }
    return false;
}
int main()
{
    Node *head = NULL;
    cout << "Enter your values : ";
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        else
        {
            insert_tail(head, v);
        }
    }

    if (printing(head))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}