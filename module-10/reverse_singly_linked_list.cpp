#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

void priting(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse_priting(Node* h) {
    if (h == NULL) {
        return;
    }
    reverse_priting(h->next);
    cout << h->value << " ";
}

void reverse(Node * &head, Node *Current)
{
    if (Current->next == NULL)
    {
        head = Current;
        return;
    }
    reverse(head, Current->next);
    Current->next->next = Current;
    Current->next = NULL;
}
int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next = a;
    a->next = b;

    priting(head);
    // reverse_priting(head);
    reverse(head, head); // Corrected function name
    priting(head);
    return 0;
}
