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
        this->prev;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz =0;
    void push(int val) // tail insert
    {
        sz++;
        Node *newenod = new Node(val);
        if (head == NULL)
        {
            head = newenod;
            tail = newenod;
            return;
        }
        tail->next = newenod;
        newenod->prev= tail;
        tail = tail->next;
        
    }

    void pop() // tail delete
    {
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        if (tail==NULL) head == NULL; // ekhane jodi tail null e chole ase tahole head keo Null kore dite hobe .
        delete deletenode;
    }

    int top() // tail er value output
    {
        return tail->value;
    }

    int size()
    {
        
        return sz;

    }

    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty()) // empty na hoy
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}