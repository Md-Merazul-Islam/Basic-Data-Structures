#include <bits/stdc++.h>

using namespace std;

class myStrack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()

    {
        return v.back();
    }
    int size()

    {
        return v.size();
    }

    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStrack st;

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}