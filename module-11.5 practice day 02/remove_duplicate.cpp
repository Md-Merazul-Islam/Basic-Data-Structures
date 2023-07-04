/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * newnode = new ListNode (val);
        
        while ( head != NULL && head->val ==val )
        {
            ListNode * deleteNode = head;
            head = head->next;
            delete deleteNode;
        }
        
        ListNode * cur = head ;
       
        while ( cur != NULL && cur->next != NULL)
        { 
            if ( cur->next->val == val )
            {
                ListNode * tmp = cur->next;
                cur->next = tmp->next;
                delete tmp;
            }

            else 
            {
                cur = cur->next;
            }
        }
            return head;
    }
};







#include <bits/stdc++.h>

using namespace std;
int main()
{
    
    return 0;
}