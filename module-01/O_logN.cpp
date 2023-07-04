#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;

 //exm:1--->   
    // while (n>0)   //O(logN)
    // {
    //     int digit = n%10;
    //     n/=10;
    //     cout<<digit<<endl;
    // }

 //exm:2--->   
    for (int i=1;i<n;i=i*2) // O(logN) 
    {
        cout<<i<<endl;
    }
    return 0;
}