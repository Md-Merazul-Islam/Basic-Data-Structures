#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int a;
    int b;

    for (int i = 0; i < q; i++)
    {
        cin >> a;
        cin >> b;

        long long sum = 0;

        for (int j = a-1; j < b; j++)
        {
            sum += v[j];
        }
        cout << sum << endl;
    }

    return 0;
}