#include <bits/stdc++.h>

using namespace std;
string check(string &colors)
{
    stack<char> s;

    for (char c : colors)
    {
        if (s.empty())
        {
            s.push(c);
        }
        else
        {
            char top = s.top();

            if (c == top)
            {
                s.pop();
            }
            else if ((c == 'R' && top == 'B') || (c == 'B' && top == 'R'))
            {
                s.pop();
                s.push('P');
            }
            else if ((c == 'R' && top == 'G') || (c == 'G' && top == 'R'))
            {
                s.pop();
                s.push('Y');
            }
            else if ((c == 'B' && top == 'G') || (c == 'G' && top == 'B'))
            {
                s.pop();
                s.push('C');
            }
            else
            {
                s.push(c);
            }
        }
    }

    string ans;
    while (!s.empty())
    {
        ans = s.top() + ans;
        s.pop();
    }

    return ans;
}

string remove_duplicate(string &colors)
{
    stack<char> st;
    for (char c : colors)
    {
        if (!st.empty() && c == st.top())
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    string result;
    while(!st.empty())
    {
        result = st.top() +result;
        st.pop();
    }

    return result;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string colors;
        cin >> colors;

        string meraz = check(colors);
        string m = remove_duplicate(meraz);

        if(m.empty())
        {
            cout<<""<<endl;
        }
        else
        {
            char first = 0;
            // stack<char> ans;
             vector<char> ans;
            for (char c : m)
            {
                if(c!= first)
                {
                    ans.push_back(c);
                    first= c;
                }
            }

            for (char c: ans)
            {
                cout<<c;
            }
            // while(!ans.empty())
            // {
            //     cout<<ans.front();
            //     ans.pop();
            // }
            cout<<endl;
        }

    }

    return 0;
}
