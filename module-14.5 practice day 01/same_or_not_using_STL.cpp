#include <bits/stdc++.h>

using namespace std;
bool check(stack<int> &st, queue<int> &q)
{
    if (st.size() != q.size())
    {
        return false;
    }

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            return false;
        }
        st.pop();
        q.pop();
    }

    return true;
}

int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    queue<int> q;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }
    bool ans = check(st, q);

    if (ans)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}