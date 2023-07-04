
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

void insert_linkd_list_value(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)

    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next_value != NULL)
    {
        tmp = tmp->next_value;
    }
    tmp->next_value = newNode;
}
void priting_linked_list_value(Node *head)
{
    cout << endl
         << "Linked list inserted value : " << endl
         << endl;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next_value;
    }
    cout << endl
         << endl;
}
void linked_List_position_insert(Node *&head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next_value;
        
    }
    newnode->next_value = tmp->next_value;
    tmp->next_value = newnode;
    cout << endl
         << "insertend position " << endl;
}

void insert_head_new_value(Node *&head, int v)
{
    Node *newnode = new Node(v);
    newnode->next_value = head;
    head = newnode;
}

void delete_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next_value;
    }
    Node *deletnode = tmp->next_value;
    tmp->next_value = tmp->next_value->next_value;
    delete deletnode;
    cout << endl
         << "Deleted position " << pos << endl
         << endl;
}

void deleted_head(Node *&head)
{
    Node *deletednode = head;
    head= head->next_value;
    delete deletednode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1 : Insert value " << endl;
        cout << "Option 2 : pirnt inserted value " << endl;
        cout << "Option 3 : position insert value " << endl;
        cout << "Option 4 : Insert New head  " << endl;
        cout << "Option 5 : Delete postion  " << endl;
        cout << "Option 6 : Delete head  " << endl;
        cout << "Option 7 : terminate " << endl<<endl<<endl;

        int op;
        cout << "choche option : ";
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << "Enter your Linked list value : ";
            cin >> v;
            insert_linkd_list_value(head, v);
        }
        else if (op == 2)
        {
            priting_linked_list_value(head);
        }
        else if (op == 3)
        {
            int pos;
            cout << "Enter your insert position : ";
            cin >> pos;
            cout << endl
                 << endl;
            int v;
            cout << "Enter your value : ";
            cin >> v;
            cout<<endl<<endl;
            if (pos == 0)
            {

                insert_head_new_value(head, v);
            }
            else
            {

                linked_List_position_insert(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter your value";
            cin >> v;
            insert_head_new_value(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter your delete Position : ";
            cin >> pos;
            if (pos==0)
            {
                deleted_head(head);
            }
            else{

            delete_position(head, pos);
            }
        }
        else if (op == 6)
        {
            deleted_head(head);
        }
        else if (op == 7)
        {
            break;
            cout << "Program finish." << endl;
        }
    }

    return 0;
}