#include <bits/stdc++.h>

using namespace std;
class node{
    public:
        int value;
        node* next_value;
        node(int value){
            this->value=value;
            this->next_value=NULL;  
        }
};
int main()
{
    node a(10);
    node b(20);

    a.next_value=&b;
    cout<<a.value<<endl;
    cout<<b.value<<endl;
    cout<<a.next_value->value<<endl; //[deraferance kore b er value ]
    return 0;
}