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
        int k=st.top();
        st.pop();
        if(st.empty())
        {
            newst.push(k);
            break;
        }
        newst.push(k);
    }

   st = newst;

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}