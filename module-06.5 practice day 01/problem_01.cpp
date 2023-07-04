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
   cout<<"Output value is :";cout<<cnt<<endl;
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




