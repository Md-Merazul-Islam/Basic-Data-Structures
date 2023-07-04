#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) //----> step= 1 . [ O(n)]
    {
        cin >> a[i];
    }
    int s = 0;

    for (int i = 0; i < n; i+=2)//----> step= 2 ( eikhane n/2 kore value count hocche kinto step  er khetre [O(n)] korei count hobe)
    {
        s += a[i];
    }
    cout << s << endl;
    return 0;
}