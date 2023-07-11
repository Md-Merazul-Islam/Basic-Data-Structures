#include <bits/stdc++.h>

using namespace std;
bool check_vaild(string st)
{
    stack<char> s;
    for (char c : st)
    {
        if (c=='A')
        {
            if(!s.empty() && s.top()=='B')
            {
                s.pop();
            }
            else
            {
                s.push(c);
            }
        }

        else if(c=='B')
        {
            if(!s.empty() && s.top()=='A')
            {
                s.pop();
            }
            else
            {
                s.push(c);
            }
        }
    }
    return s.empty();
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin>>st;
        
        if(check_vaild(st))
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}