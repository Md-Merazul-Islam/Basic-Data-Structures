#include <bits/stdc++.h>

using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val); // last elements add o(1)
    }
    void pop()
    {
        v.pop_back(); // last value remove o(1)
    }
    int top()
    {
        return v.back(); // return top/last value see  o(1)
    }
    int size()
    {
        return v.size(); // size return o(1)
    }
    bool empty()
    {
        if (v.size() == 0)
            return true; // size ber kora o(1)
        else
            return false;
    }
};
int main()
{
    myStack strk;
    strk.push(10);
    strk.push(20);
   
    // cout << strk.top() << endl; // output last value
    // strk.pop();// remove value = pop 
    // cout<<strk.top()<<endl;
    // strk.pop();
    // cout<< strk.top()<<endl;
    
    if (strk.empty ()== false)  // false mane khali na
    {
        cout<<strk.top()<<endl;
        strk.pop();
        cout<<strk.top()<<endl;
    }


    return 0;
}



