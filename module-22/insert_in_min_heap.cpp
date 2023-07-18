#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_index = v.size() - 1;
        while (cur_index != 0)
        {
            int parent_index = (cur_index - 1)/2;
            if (v[parent_index] > v[cur_index])
            {
                swap(v[parent_index], v[cur_index]);
                cur_index = parent_index;
            }
            else
            {
                break;
            }
        }
    }
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}