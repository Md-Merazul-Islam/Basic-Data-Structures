#include <bits/stdc++.h>

using namespace std;
void reverseStack(stack<int> &st) {
    if (st.empty()) return ;
    int x = st.top();
    st.pop();
    stack<int> n;
    reverseStack(st);
    while(!st.empty())
    {
        n.push(st.top());
        st.pop();
    }
    n.push(x);
    while(!n.empty())
    {
        st.push(n.top());
        n.pop();
    }
    
}
int main()
{
    
    return 0;
}