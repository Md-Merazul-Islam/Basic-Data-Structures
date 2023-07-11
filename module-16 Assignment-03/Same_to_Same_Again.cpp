#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop()
    {
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        if (tail == NULL)
            head = NULL;
        delete deletenode;
    }

    int top()
    {
        return tail->value;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return (sz == 0);
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next= newnode;
        newnode->prev= tail;
        tail= newnode;
    }

    void pop()
    {
        sz--;
        Node *deletenode = head;
        head = head->next;
        if ( head ==NULL)
        {
            tail=NULL;
            delete deletenode;
            return;
        }
        head->prev=NULL;
        delete deletenode;
    }

    int front()
    {
        return head->value;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return (sz == 0);
    }
};

bool same_check(myStack s, myQueue q)
{
    if(s.size() != q.size())
    {
        return false;
    }
    while(!s.empty())
    {
        if(s.top() != q.front())
        {
            return false;
        }
        s.pop();
        q.pop();
    }
    return true;
}
int main()
{
    int n,m;
    cin >> n>>m;

    myStack s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    myQueue q;
    for(int i=0; i<m;i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }

    bool ans= same_check(s,q);
    if(ans)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}