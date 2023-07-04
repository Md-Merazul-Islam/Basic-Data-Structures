#include <bits/stdc++.h>

using namespace std;
int main()
{
    // list<int> mylist = { 1,2,3,4,5,6,2,2};
    list<int>mylist = {10,29,38,67,43,85,23,20,10,40,30};
    // mylist.remove(2);

    mylist.sort();

    // mylist.sort(greater<int>()); // boro theke choto / desending order

    mylist.unique(); //doublicate value remove korbe

    mylist.reverse();
    
    for (int val : mylist)
    {
        cout<<val <<" ";
    }
    return 0;
}