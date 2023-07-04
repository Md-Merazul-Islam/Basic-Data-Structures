#include <bits/stdc++.h>

using namespace std;
int main()
{
    list<int> mylist = {100, 200, 300};
    // cout<<mylist.max_size();
    // cout<<mylist.size();

    // mylist.clear();

     for (int val : mylist)
    {
        cout << val << " ";
    }

    mylist.resize(2);
    cout<<endl;
    for (int val : mylist)
    {
        cout << val << " ";
    }

    cout<<mylist.size();
    return 0;
}