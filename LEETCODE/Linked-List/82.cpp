//Remove Duplicates from Sorted List II

/*
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode* start = new ListNode(-101);
    ListNode* dummy = start;
    ListNode* temp = head;
    int count;
    while (temp != nullptr) {
        ListNode* curr = temp;
        count = 1;
        while (curr->next != nullptr && curr->val == curr->next->val) {
            count++;
            curr = curr->next;
        }
        if (count <= 1) {
            ListNode* newNode = new ListNode(curr->val);
            dummy->next = newNode;
            dummy = newNode;
        }
        temp = curr->next;
    }

    return start->next;
}

};
*/