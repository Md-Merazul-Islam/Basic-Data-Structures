#include <bits/stdc++.h>

using namespace std;
int main()
{
    // list<int> mylist = {1, 2, 3, 4, 5,30,30,30,30,1000};
    // list <int> newlist ;
    // newlist = mylist;
    // newlist.assign(mylist.begin(),mylist.end());

    // mylist.push_front(0);
    // mylist.push_back(6);

    // int n;
    // cin>>n;
    // for (int i=0; i<n; i++)
    // {
    //     mylist.pop_back(); // for last index delete
    //     mylist.pop_front();// for first index delete
    // }

    // for (int val : mylist)
    // {
    //     cout << val << " ";
    // }

    // mylist.insert(next(mylist.begin(),4),100); //4 = position
    // mylist.erase(next(mylist.begin(),2));
    // list<int> newlist = {100, 200, 300};

    // mylist.insert(next(mylist.begin(), 3), newlist.begin(), newlist.end());

    // mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5)); // eikhane pothom next e surur index dite hobe & porer next e amader konjayga porjonto amra erase korte chacchi ta .

    // replace(mylist.begin(),mylist.end(),30,1000);// pothom dite hobe kon value ke replace korte hobe tarpor dite hobe ki replace er poriborte ki bosbe


    list<int> mylist = {10,20,30,40,30,50,60,70};
    auto it = find(mylist.begin(),mylist.end(),20);
    if (it == mylist.end())
    {
        cout<<"NOT FOUND";
    }
    else 
    {
        cout<<"FOUND";
    }

    // for (int val : mylist)
    // {
    //     cout << val << " ";
    // }

    return 0;
}