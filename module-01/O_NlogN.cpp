#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)//o(n) ---> O(N) + O(long(N))= O(Nlong(N))
    {
        int x=i;
        while (x>0) //o(long(n))
        {
            int digit= x%10;
            cout<<digit<<" ";
            x=x/10;
        }
        cout<<endl;
    }
    return 0;
}