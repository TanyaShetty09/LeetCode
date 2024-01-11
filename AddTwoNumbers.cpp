// //You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p=new ListNode(0);
        vector<int> v;
        ListNode *q=p;
        int sum,n=0;
        while(l1!=NULL&&l2!=NULL){    
             sum=l1->val+l2->val+n;
             n=0;
            if(sum<=9)
               v.push_back(sum);
            else{
                n=sum;
                sum%=10;
                v.push_back(sum);
                n=(n-sum)/10;
                
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            sum=n+l1->val;
            n=0;
            if(sum<=9)
               v.push_back(sum);
            else{
                n=sum;
                sum%=10;
                v.push_back(sum);
                n=(n-sum)/10;
                
            }
            l1=l1->next;
            if(n!=0&&l1==NULL){
                v.push_back(n);
                n=0;
            }
        }
        while(l2!=NULL){
            sum=n+l2->val;
            n=0;
            if(sum<=9)
               v.push_back(sum);
            else{
                n=sum;
                sum%=10;
                v.push_back(sum);
                n=(n-sum)/10;
                
            }
            l2=l2->next;
            if(n!=0&&l2==NULL){
                v.push_back(n);
                n=0;
            }
        }
        if(l1==NULL&&l2==NULL&&n!=0)
            v.push_back(n);
        for(int i=0;i<v.size();i++){
            p->next=new ListNode(v[i]);
            p=p->next;
        }
        return q->next;
    }
};