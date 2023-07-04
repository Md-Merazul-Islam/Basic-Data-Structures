#include <bits/stdc++.h>

using namespace std;
int main()
{
    list<int> mylist = {10, 20, 30, 40, 50, 60};
    cout << mylist.back() << endl; // tail value
    cout << mylist.front()<<endl;        // head er value

    cout << *next(mylist.begin(), 3) << endl; //elemnt value // here must be need (*) 

    return 0;
}