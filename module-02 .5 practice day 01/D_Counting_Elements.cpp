#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin(), v.end(), v[i] + 1);
        if (it != v.end())
        {
            cnt++;
        }
        
    }
    cout<<cnt;
    return 0;
}

// vector<int> v = {1, 2, 2, 3, 4, 5, 2, 3, 2, 4, 5, 1};

// // vector<int> :: iterator it;
// // it = find (v.begin(),v.end(),2);

// auto it = find(v.begin(), v.end(), 2);
// if (it == v.end())
//     cout << "NOT FOUND";
// else
//     cout << "FOUND";
