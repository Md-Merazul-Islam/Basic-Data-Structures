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

void pirnt_list(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next_value;
    }

    cout<<cnt<<endl;

    int midval= (cnt +1 )/ 2;
    Node *mid = head;
    
    for (int i = 0; i < midval-1; i++)
    {
        mid = mid->next_value;
    }
    if (cnt % 2 == 0 )
    {
        cout << mid->value << " ";
        cout << mid->next_value->value << endl;
    }
    else if (cnt % 2 == 1 )
    {
        cout << mid->value << endl;
    }
}
int main()
{
    Node *head = NULL;
    int v;
    cout << "Enter your value :";
    while (true)
    {

        cin >> v;
        if (v == -1)

            break;
        insert_tail(head, v);
    }
    pirnt_list(head);

    return 0;
}
