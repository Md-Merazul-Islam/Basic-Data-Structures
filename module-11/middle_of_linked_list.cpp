class Solution {
public:
    int size( ListNode * head)
    {
        int cnt =0;
        ListNode * tmp = head;
        while ( tmp != NULL)
        {
            cnt++;
            tmp= tmp->next;
        }
        return cnt;
    }

    ListNode* middleNode(ListNode* head) {
        int sz = size(head);
        ListNode * tmp = head;
        for (int i =1; i<= sz/2; i++)
        {
            tmp=tmp->next;
        }
        return tmp;
    }
};




// --------->type (2) 

class Solution {
public:
   
    ListNode* middleNode(ListNode* head) {
    ListNode * slow = head;
    ListNode * fast = head;
    while ( fast != NULL && fast->next != NULL)
    {
       slow = slow->next;
       fast = fast->next-> next;
       
    }
    cout<<slow->val<<endl;
    return slow;

    }
};

