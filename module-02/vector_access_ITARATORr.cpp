#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector <int> v= {1,2,3,4,5};
    // cout<<v.back()<<endl; // last index 
    // cout<<v[0]<<endl; // first index
    // cout<<v.front()<<endl; // first index

    
    // vector<int> :: iterator it; //iterator 
    // for (auto it =v.begin(); it<v.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    for(int value : v)
    {
        cout<<value<<" ";
    }
    return 0;
}