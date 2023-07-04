
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

void priting_node(Node *head)
{
    Node *tmp = head;
    cout << endl
         << "Printing value : " << endl
         << endl;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next_value;
    }
    cout << endl
         << endl;
}

void Insert_any_position(Node *&head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next_value;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid poition" << endl
                 << endl;
            return;
        }
    }
    newnode->next_value = tmp->next_value;
    tmp->next_value = newnode;
}

void insert_head(Node *&head, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    newnode->next_value = tmp;
    head = newnode;
}

void delete_position(Node *head, int pos)
{
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next_value;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid poition" << endl
                 << endl;
            return;
        }
    }
    if (tmp->next_value == NULL)
    {
        cout << endl
             << "Invalid poition" << endl
             << endl;
        return;
    }
    Node *deletenode = tmp->next_value;
    tmp->next_value = tmp->next_value->next_value;
    delete deletenode;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Invalid poition" << endl
             << endl;
        return;
    }
    Node *deletenode = head;
    head = head->next_value;
    delete deletenode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1 : Insert tail " << endl;
        cout << "Option 2 : priting  " << endl;
        cout << "Option 3 : Insert any position  " << endl;
        cout << "Option 4 : Insert head  " << endl;
        cout << "Option 5 : Delete position  " << endl;
        cout << "Option 6 : Delete head  " << endl;
        cout << "Option 7 : Programm finished  " << endl;

        cout << endl
             << endl;
        int op;
        cout << "Choche Option : ";
        cin >> op;
        cout << endl
             << endl;
        if (op == 1) // insert tail
        {
            int v;
            cout << "tail insert : ";
            cin >> v;
            insert_tail(head, v);
        }

        else if (op == 2)
        {
            priting_node(head);
        }
        else if (op == 3)
        {
            int pos;
            cout << "Enter your position : ";
            cin >> pos;
            int v;
            cout << "Enter your position value :";
            cin >> v;
            if (pos == 0)
            {
                insert_head(head, v);
            }
            else
            {
                Insert_any_position(head, pos, v);
            }
        }

        else if (op == 4)
        {
            int v;
            cout << "Enter your head value : ";
            cin >> v;
            insert_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Which position do you want to delete? : ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {

                delete_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }

        else if (op == 7)
        {
            cout << endl
                 << endl;
            cout << "Program finished";
            break;
        }
        else{
            cout<<" coiche is Right opsiton"<<endl;
        }
    }
    return 0;
}