#include <bits/stdc++.h>

using namespace std;
int main()
{

    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    queue<int> newqu;// copy queue to queue 
    while (!q.empty())
    {
        int k = q.front();
        q.pop();
        if (q.empty())
        {
            newqu.push(k);
            break;
        }
        newqu.push(k);
    }

    stack<int> st; // copy queue to stack 
    while(!newqu.empty())
    {
        int sr = newqu.front();
        newqu.pop();
        if(newqu.empty())
        {
            st.push(sr);
            break;
        }
        st.push(sr);
    }


    while (!st.empty())

    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}