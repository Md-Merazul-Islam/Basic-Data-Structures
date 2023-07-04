#include <bits/stdc++.h>

using namespace std;
int main()
{
    

//---> type : 1
    // int n;
    // cin>>n;
    // vector<string> v;
    // for (int i=0; i<n;i++)
    // {
    //     string s;
    //     cin>>s;
    //     v.push_back(s);

    // }
    // // for(int i=0;i<v.size();i++)
    // // {
    // //     cout<<v[i]<<endl;
    // // }
    // for(string value : v) // shortcut
    // {
    //     cout<<value<<endl;
    // }

// ---> type :2 

    int n;
    cin>>n;
    getchar();
    vector <string> v(n);
    for (int i=0;i<n;i++)
    {
        getline(cin,v[i]);
    }
    for (string value : v)
    {
        cout<< value<<endl;
    }

    return 0;
}