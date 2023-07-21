#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int, greater<int>> s;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        // vector<int> v;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}