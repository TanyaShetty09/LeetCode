// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
// Return the head of the merged linked list.

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *h1=list1, *h2=list2;
        ListNode *l=new ListNode(0);
        ListNode *head=l;
        while(h1!=NULL&&h2!=NULL){
            if(h1->val<=h2->val){
                l->next=new ListNode(h1->val);
                h1=h1->next;
            }
            else{
                l->next=new ListNode(h2->val);
                h2=h2->next;
            }
            l=l->next;
        }
        while(h1!=NULL){
            l->next=new ListNode(h1->val);
            h1=h1->next;
            l=l->next;
        }
        while(h2!=NULL){
            l->next=new ListNode(h2->val);
            h2=h2->next;
            l=l->next;
        }
        return head->next;
    }
};