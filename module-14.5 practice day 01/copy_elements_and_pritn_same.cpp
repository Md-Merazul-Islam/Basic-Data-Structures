#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin>>n;
    for (int i=0; i< n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    stack<int> newst;
   
    while(!st.empty())
    {
        newst.push(st.top());
        st.pop();
    }

   st = newst;

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
