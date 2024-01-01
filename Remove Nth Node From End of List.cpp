//Given the head of a linked list, remove the nth node from the end of the list and return its head.

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p=head;
        int c=0;
        while(p!=NULL){
            p=p->next;
            c++;
        }
        c=c-n;
        if(c==0)  
            return head->next;
        p=head;
        for(int i=0;i<c-1;i++){
            p=p->next;
        }
        p->next=p->next->next;
        return head;
    }
};