// #include <bits/stdc++.h>

// using namespace std;

// class Node
// {
// public:
//     int value;
//     Node *next;
//     Node *prevs;

//     Node(int value)
//     {
//         this->value = value;
//         this->next = NULL;
//         this->prevs = NULL;
//     }
// };

// void insert_head(Node *&head, Node *&tail, int val)
// {
//     Node *newnode = new Node(val);

//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }

//     newnode->next = head;
//     head->prevs = newnode;
//     head = newnode;
// }

// void insert_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newnode = new Node(val);

//     if (tail == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }

//     tail->next = newnode;
//     newnode->prevs = tail;
//     tail = newnode;
// }

// void print_left_to_right(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->value << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

// void print_right_to_left(Node *tail)
// {
//     Node *tmp = tail;
//     while (tmp != NULL)
//     {
//         cout << tmp->value << " ";
//         tmp = tmp->prevs;
//     }
//     cout << endl;
// }

// void insert_at_any(Node *&head, Node *&tail, int pos, int val)
// {

//     Node *newnode = new Node(val);

//     Node *tmp = head;
//     for (int i = 1; i < pos-1; i++)
//     {
//         tmp = tmp->next;
//     }

//     newnode->next= tmp->next;
//     tmp->next= newnode;
//     newnode->next->prevs= newnode;
//     newnode->prevs= tmp;

// }

// int lenght(Node *&head)
// {
//     int cnt = 0;
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cnt++;
//         tmp = tmp->next;
//     }
//     return cnt;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int size = lenght(head);
//         int x, v;
//         cin >> x >> v;
//         if (x > size)
//         {
//             cout << "Invalid" << endl;
//         }
//         else
//         {
//             if (x == 0)
//             {
//                 insert_head(head, tail, v);
//             }
//             else if (x == size)
//             {
//                 insert_tail(head, tail, v);
//             }
//             else
//             {
//                 insert_at_any(head, tail, x, v);
//             }
//             print_left_to_right(head);
//             print_right_to_left(tail);
//         }
//     }
//     return 0;
// }

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


void Insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

   if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prevs = newnode;
    head = newnode;
}
void Insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

   if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    
    tail->next = newnode;
    newnode->prevs=tail;
    tail = newnode;
   
}
void left_to_right(Node *head)
{

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value<<" ";
        tmp = tmp->next;
    }
    cout << endl;
}

void right_to_left(Node *tail)
{

    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value<<" ";
        tmp = tmp->prevs;
    }
    cout << endl;
}
void insert_at_any_possition(Node *&head, Node *&tail, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
   newnode->next= tmp->next;
    tmp->next= newnode;
    newnode->next->prevs= newnode;
    newnode->prevs= tmp;

}

int lenght_size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int size = lenght_size(head);
        int pos, val;
        cin >> pos >> val;
        if (pos > size)
        {
            cout << "Invalid" << endl;
        }
        else
        {

            if (pos == 0)
            {
                Insert_at_head(head, tail, val);
            }
            else if (pos == size)
            {
                Insert_at_tail(head, tail, val);
            }
            else
            {
                insert_at_any_possition(head, tail, pos, val);
            }
            left_to_right(head);
            right_to_left(tail);
        }
    }

    return 0;
}