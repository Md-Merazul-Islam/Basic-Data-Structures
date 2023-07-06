#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    stack<char> ss, tt;
    bool backspaceCompare(string s, string t) {
        for(int i=0; i<s.size();i++)
        {
            if(s[i]=='#' && !ss.empty())
            {
                ss.pop();
            }
            else if (s[i]!= '#')
            {
                ss.push(s[i]);
            }
        }

        for(int i=0; i<t.size();i++)
        {
            if(t[i]=='#' && !tt.empty())
            {
                tt.pop();
            }
            else if(s[i]!= '#')
            {
                tt.push(t[i]);
            }
        }

        while(!ss.empty())
        {
            char newss = ss.top();
            ss.pop();

            char newtt = tt.top();
            tt.pop();

            if(newss != newtt) return false;
        }

        return true;


    }
};


int main()
{
    
    return 0;
}