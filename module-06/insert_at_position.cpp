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

void insert_at_position(Node *&head, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        cout<<endl<<"Inserted at head"<<endl<<endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next_value != NULL)
    {
        tmp = tmp->next_value;
    }
    tmp->next_value = newnode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;


}

void priting_linked_list(Node *head){
    Node* tmp = head;
     cout<<" Your linked list :"<<endl;
     while (tmp != NULL)
     {
        cout<<tmp->value<<" ";
        tmp=tmp->next_value;
     }
     cout<<endl;
}

void  insert_pos_value(Node*head,int pos,int v)
{
    Node * newNode = new Node(v);
    Node*tmp = head ;

    for (int i=1;i<=pos-1;i++)
    {
        tmp = tmp->next_value;

    }
    newNode->next_value = tmp->next_value;
    tmp->next_value = newNode;
    cout<< endl<<endl << "Inserted at position "<<pos<<endl<<endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1 : Insert at tail " << endl;
        cout << "Option 2 : Print Linked list " << endl;
        cout << "Option 3 : Insert any position " << endl;
        cout << "Option 4 : terminate " << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter the value :"<<endl;
            int v;
            cin >> v;
            insert_at_position(head, v);
        }

        else if (op==2)
        {

            priting_linked_list(head);
        }
        else if (op==3)
        {
            
            int pos,v;
            cout<<"Enter the position: "<<endl;
            cin>>pos;
            cout<<"Enter the value : "<<endl;
            cin>>v;
            insert_pos_value(head,pos,v);
        }
        else if (op==4)
        {
            break;
        }
    }
    return 0;
}