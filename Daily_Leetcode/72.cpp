//139. copy list with random pointer

/*
class Solution {
public:

    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return head;
        Node*curr=head;
        //creating nodes
        while(curr!=NULL)
        {
            Node* temp=curr->next;
            curr->next=new Node(curr->val);
            curr->next->next=temp;
            curr=temp;
        }
        curr=head;
        
        //setting random pointer
        
        while(curr!=NULL)
        {
            if(curr->random!=NULL)
            {
                curr->next->random=curr->random->next;
            }
            curr=curr->next->next;
        }
        curr=head;
        
        //seperating both linkedlist;
        Node* org=head;
        Node*copy=head->next;
        Node*temp=copy;
        
        while(org!=NULL && copy->next!=NULL)
        {
            org->next=org->next->next;
            copy->next=copy->next->next;
            org=org->next;
            copy=copy->next;
        }
        copy->next=NULL;
        org->next=NULL;
        
        return temp;
    }
};
*/