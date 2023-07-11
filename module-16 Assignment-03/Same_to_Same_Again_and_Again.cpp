#include <bits/stdc++.h>

using namespace std;

bool same_check(stack<int>&s, queue<int> &q)
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
    stack<int>s;
    queue<int>q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    for(int i=0;i<m;i++)
    {
        int y; 
        cin>>y;
        q.push(y);
    }

    if(same_check(s,q))
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    return 0;
}