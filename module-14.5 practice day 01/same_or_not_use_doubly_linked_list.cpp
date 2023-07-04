// https://docs.google.com/document/d/1Trg4M7G7TM-Lak4NxbCrHb61dWF-oMnwZ7AT9lx4rlQ/edit

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
        tail = tail->next;
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
        if (sz == 0)
            return true;
        else
            return false;
    }
};

bool check(myStack &st1, myStack &st2)
{
    

    if (st1.size() != st2.size())
    {
        return false;
    }

    while (!st1.empty())
    {
        if (st1.top() != st2.top())
        {
            return false;
        }
            st1.pop();
            st2.pop();
    }

    return true;
}

int main()

{
    myStack st1;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    /// 2nd stack --------------->
    myStack st2;
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        st2.push(y);
    }

    if (check(st1, st2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
