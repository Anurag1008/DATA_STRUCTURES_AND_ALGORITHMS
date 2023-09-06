//725. Split LinkedList in Parts

/*
lass Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;
        ListNode* temp = head;
        int size = 0;
        while(temp!=NULL){
            temp = temp->next;
            size++;
        }
        temp = head;
        int partSize = size / k ; //size of each part
        int extraNode = size % k ;
        while(k--){
            
            int currentPartSize = partSize + (extraNode-- > 0 ? 1 : 0);
            ListNode* newNode = new ListNode(0);
            ListNode* iterator = newNode;
            while(currentPartSize--){
                iterator->next=new ListNode(temp->val);
                iterator=iterator->next;
                temp=temp->next;
            }
            ans.push_back(newNode->next);
        }
        return ans;
    }
};
*/