#include <bits/stdc++.h>

using namespace std;
int main()
{
    map<string, int> mp;
    mp["Akib"]=30; //o(logN)
    mp["rakib"]=38;
    mp["sakib"]=94;

    // mp.insert({"Md Merazul Islam", 76});
    // mp.insert({"Md Alamin Hossain", 75});
    // mp.insert({"Md jahidul Islam", 77});
    // mp.insert({"sakib", 79});

    for(auto it =mp.begin(); it!= mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    // cout<<mp["sakib"]<<endl;

    // if (mp.count("sakib"))
    // {
    //     cout << "ase" << endl;
    // }
    // else
    // {
    //     cout << "nai" << endl;
    // }

    return 0;
}