#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        map<string, int> mp;
        string word;
        int count = 0;
        while (ss >> s)
        {
            mp[s]++;
            if (mp[s] > count)
            {
                word = s;
                count = mp[s];
            }
        }
        cout << word << " " << count << endl;
    }
    return 0;
}