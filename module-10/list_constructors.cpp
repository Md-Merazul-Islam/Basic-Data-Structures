#include <bits/stdc++.h>

using namespace std;
int main()
{
    // list<int > mylist ;
    // list<int> mylist(10,5);
    // cout<<mylist.front();
    // cout<<mylist.size();

    // list <int> list2 = {1,2,3,4,5};
    // list<int> mylist = list2;

    // int a[5]={1,2,3,4,5};
    // list <int > mylist (a,a+5);

    // for ( auto it = mylist.begin(); it != mylist.end();it++) // for value access
    // {
    //     cout<<*it <<endl;
    // }

    vector<int> v = {100, 200, 300};
    list<int> mylist(v.begin(), v.end());
    for (int val : mylist)
    {
        cout << val << " ";
    }

    return 0;
}