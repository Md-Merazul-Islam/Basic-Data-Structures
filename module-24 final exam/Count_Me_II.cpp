#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        int max_count = 0;
        int val;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            max_count = max(max_count, mp[a[i]]);
        }
        for (auto pair : mp)
        {
            if (pair.second == max_count)
            {
                max_count = pair.second;
                val = pair.first;
            }
        }
        cout << val << " " << max_count << endl;
    }
    return 0;
}