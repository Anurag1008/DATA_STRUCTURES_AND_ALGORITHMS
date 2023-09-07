//92. Reverse Linked List II

/*
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy  = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        for(int i=0;i<left-1;++i) prev = prev->next;

        ListNode* curr  = prev->next;
        for(int i=0;i<right-left;i++){
            ListNode* next_n = curr->next;
            curr->next = next_n->next;
            next_n->next = prev->next;
            prev->next = next_n;
        }
        return dummy->next;
    }
};

*/