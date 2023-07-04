#include <bits/stdc++.h>

using namespace std;
int main()
{
    char c;
    vector<int> f(26, 0);
    while (cin >> c)
    {
        f[c - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (f[i - 'a'])
        {
            cout << i << " : " << f[i - 'a'] << endl;
        }
    }
    return 0;
}