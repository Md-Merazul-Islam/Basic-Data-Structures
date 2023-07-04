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
    long long x;

    for (int i = 0; i < q; i++)
    {
        cin >> x;
        bool found = false;
        for (int j = 0; j < n; j++)
        {

            if (v[j] == x)
            {
                found = true;
                break;
            }
        }

        if (found){

            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;

        }
    }

    return 0;
}