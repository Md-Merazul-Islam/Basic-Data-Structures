#include <bits/stdc++.h>

using namespace std;
int main()
{
//    int a[4] = {12,13,14,15};
//     vector<int> v(a, a + 4);

// vector<int> v={1,2,3,4};
//     v.resize(2);
//     v.resize(4);
   
// for (int value : v)
// {
//     cout<<value<<" ";
// }


    int k;cin>>k;
    vector<int> v={1,2,3,4,5};
    // v.erase(v.begin()+k); // single

    v.erase(v.begin()+k,v.end()-1);//multipule 
    for (int x: v) //sortcut loop
    {
        cout<<x<<" ";
    }
    return 0;
}