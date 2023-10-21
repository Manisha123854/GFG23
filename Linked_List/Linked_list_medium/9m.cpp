

https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?page=1&category[]=Linked+List&sortBy=submissions&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=nth-node-from-end-of-linked-list


class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        
        /* int c=0;
         Node * temp=head;
         while(temp!=NULL){
             c++;
             temp=temp->next;
         }
         if(c<n)
         return -1;
         int l=c-n;
         temp=head;
         for(int i=1;i<=l;i++){
             temp=temp->next;
         }
         return temp->data;
         */
         
         
         
        
        
         
         int c=0;
         Node * temp=head;
         while(temp!=NULL){
             c++;
             temp=temp->next;
         }
         if(c<n)
         return -1;
         
         Node * slow=head;
         Node *fast=head;
         for(int i=1;i<=n;i++)
         fast=fast->next;
         
         while(fast!=NULL)
         {
             fast=fast->next;
             slow=slow->next;
         }
         
         return slow->data;
         
    }
};

//2nd question



https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       /* 
        int c=0;
        ListNode * temp=head;
         while(temp!=NULL){
             c++;
             temp=temp->next;
         }
       
        int l=c-n;
        temp=head;

         for(int i=1;i<l;i++)
             temp=temp->next;

        if(l!=0)
        
       temp->next=temp->next->next;
       else{
        head=head->next;
       }
      return head;*/

        
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
       ListNode *slow=dummy;
       ListNode *fast=dummy;

for(int i=1;i<=n;i++)
fast=fast->next;

while(fast->next!=NULL){
    fast=fast->next;
    slow=slow->next;

}
slow->next=slow->next->next;
return dummy->next;
 }
};