#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
       
    }
    for (int i = 0; i < n; i++)
    {
        
        cin >> b[i];
    }
    vector<int> ans(2 * n);
    ans=b;
   ans.insert(ans.begin()+n,a.begin(),a.end());

   for(int value: ans)
   {
    cout<<value<<" ";
   }

    return 0;
}
