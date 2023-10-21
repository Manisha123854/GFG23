

https://leetcode.com/problems/rotate-list/submissions/
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

    if(head==NULL || head->next==NULL || k==0) 
      return head;
        
       int c=1;
      ListNode *temp=head;
       while(temp->next!=NULL){
           c++;
           temp=temp->next;
       }
       
       temp->next=head;
       k=k%c;
       int end=c-k;
       while(end--){
           temp=temp->next;
       }
       
       head=temp->next;
       temp->next=NULL;
       
        return head;

        
    }
};