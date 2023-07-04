#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int l,r;
    l=0;
    r= n-1;
    bool flag= false;
    while(l<=r)
    {
        int mid_idx= (l+r)/2;
        if (a[mid_idx]==x)
        {
            flag= true;
            break;
        }
        if (x>a[mid_idx])
        {
            l= mid_idx+1;
        }
        else
        {
            r= mid_idx-1;
        }
    }
    if (flag==true) cout<<"YES";
    else cout<<"NO";
    return 0;
}

  