#include <bits/stdc++.h>

using namespace std;
int main()
{

//----->v= or assign();


    // vector <int> x={1,2,3,4,5};
    // vector<int> v={10,20,30};
    // v=x; // v= or assign();
   
    // for (int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" "; // output x er value
    // }

// -------> v.pop_back();

    vector <int> v={1,2,3,4,5};
    v.pop_back(); // dan dik theke elements delete korar jonno 
    v.pop_back(); 
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "; // output {1,2,3} hobe karon 2 bar pop_back korar kaorne 2 ta value ba elements delete hoye geche.
    }

    return 0;
}