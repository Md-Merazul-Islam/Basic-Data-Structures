#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
        int value;
        Node* next;
        Node(int value){
            this->value=value;
            this->next=NULL;  
        }
};

void insert_list(Node * &head, Node *& tail,int val)
{
    Node* newnode = new Node (val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail= newnode;

}

int max ( Node *& head)
{
    int maxval = INT_MIN;
    Node* tmp = head;
    while ( tmp != NULL)
    {
        if (tmp->value >maxval)
        {
            maxval= tmp->value;
        }
        tmp= tmp->next;
    }
    return maxval;
    
}

int min( Node *& head)
{
    int minval = INT_MAX;
    Node* tmp = head;
    while ( tmp != NULL)
    {
        if (tmp->value < minval)
        {
            minval= tmp->value;
        }
        tmp= tmp->next;
    }
    return minval;
    
}


int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while ( true)
    {
        cin>>val;
        if ( val == -1 )
        {
            break;
        }
        else{
            insert_list(head,tail,val);
        }
    }

    int ans1 =  max(head);
    int ans2 =  min(head);
    cout<<ans1 <<" "<<ans2;
    return 0;
}