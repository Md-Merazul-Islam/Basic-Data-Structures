#include <bits/stdc++.h>

using namespace std;
int main()
{
    // vector<int> v; // -- > type 1  = O(1)

    // vector <int> v(5); // ---> type 2 = O(N)

    // vector <int > v(5,4); // --> type 3 = O(N)

    // vector <int> v2(5,200);//---> type 4 = O(N) 
    // vector <int > v(v2);//---> type 4 = O(N) 

    // int a[6]={1,2,3,4,5,6};
    // vector<int> v(a,a+6);
    vector <int> v={1,2,3};  //---> type 5 = O(N)


    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout << v.size() << endl;

    return 0;
}