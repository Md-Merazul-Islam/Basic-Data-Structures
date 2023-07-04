#include <bits/stdc++.h>

using namespace std;
int main()
{
    
//----->repalce


    // vector<int> v={1,2,2,3,4,5,2,3,2,4,5,2};
    // replace(v.begin(),v.end(),2,100); // eikhane 2 ke repalace korbo 100 dara.
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }


//----->find
    vector<int> v={1,2,2,3,4,5,2,3,2,4,5,1};
   
    // vector<int> :: iterator it;
    // it = find (v.begin(),v.end(),2);
    
    auto it = find(v.begin(),v.end(),2);
    if (it == v.end()) cout<<"NOT FOUND";
    else cout<<"FOUND";

    return 0;
}