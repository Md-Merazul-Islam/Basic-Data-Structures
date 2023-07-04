#include <bits/stdc++.h>

using namespace std;
int main()
{
//---> v.insert()

    // vector<int> v={1,2,3,4,5};
    // vector<int> v2={10,20,30};
    // v.insert(v.begin()+2,v2.begin(),v2.end());
    
    // for (int x: v) //sortcut loop
    // {
    //     cout<<x<<" ";
    // }
    // // for(int i=0;i<v.size();i++)
    // // {
    // //     cout<<v[i]<<" ";
    // // }

//--->>v.erase()

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