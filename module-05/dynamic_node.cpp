#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *next_value;
    node(int value)
    {
        this->value = value;
        this->next_value = NULL;
    }
};
int main()
{
    node *head = new node(100);
    node *a = new node(200);
    head->next_value = a;
    cout << head->value << endl;
    cout << a->value << endl;
    cout << head->next_value->value << endl;

    return 0;
}