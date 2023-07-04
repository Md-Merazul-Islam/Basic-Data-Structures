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
void insert_at_tail(Node *&head, int v)
{
    Node *newnode = new Node(v);
    if ( head== NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next_value != NULL)
    {
        tmp = tmp->next_value;
    }
    //tmp ekhon last node e 
    tmp->next_value = newnode;
}

void print_linked_list(Node * head)
{
    Node*tmp=head;
    cout<<"Your linked list : ";
    while ( tmp!= NULL)
    {
        cout<<tmp->value<<" ";
        tmp=tmp->next_value;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1 ; Insert tail  " << endl;
        cout << "Option 2 ; Print Linked List  " << endl;
        cout << "Option 3 ; terminate  " << endl;

        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter the value : " <<endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {

            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}