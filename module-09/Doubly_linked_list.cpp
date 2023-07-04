#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
        int value;
        Node* next;
        Node* prevs;
        Node(int value){
            this->value=value;
            this->next=NULL;  
            this->prevs=NULL;  
        }
};

void priting_normal(Node* head)
{
    Node* tmp = head;
    while ( tmp !=  NULL)
    {
        cout<<tmp->value<<" ";
        tmp= tmp->next;
    }
    cout<<endl;
}

void priting_revese(Node* tail)
{
    Node * tmp = tail;
    while ( tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp ->prevs;
    }
    cout<<endl;

}
int main()
{
    Node* head = new Node (10);
    Node* a = new Node (20);
    Node* b = new Node (30);
    Node * tail = b;
    head->next = a;
    a->prevs = head;
    a->next= b;
    b->prevs= a;

   priting_normal(head);
   priting_revese(tail);
    
    return 0;
}