#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;cin>>n>>q;
    long long int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    long long prefix[n];
    prefix[0]=ar[0];
    
    for(int i=1;i<n;i++)
    {
        prefix[i]= prefix[i-1] + ar[i];
    }
    long long int sum;
    while (q--)
    {
        long long l,r;
        cin>>l>>r;
        l--;
        r--;
        if (l==0) sum=prefix[r];
        else sum=prefix[r]-prefix[l-1];
        cout<<sum<<endl;
    }
    return 0;
}
