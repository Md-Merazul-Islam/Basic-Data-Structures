#include <bits/stdc++.h>

using namespace std;
class node {
    public:
        int value;
        node* next_value;
};
int main()
{
    node a,b;
    a.value= 10;
    b.value=20;
    a.next_value= &b;
    b.next_value=NULL;
    cout<<a.value<<endl;
    cout<<a.next_value->value<<endl;
    
    return 0;
}