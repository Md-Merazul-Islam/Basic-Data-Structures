#include <bits/stdc++.h>

using namespace std;
int main()
{
    queue<string> q;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else if (cmd == 1)
            {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }

    return 0;
}