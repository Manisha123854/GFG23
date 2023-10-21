


https://leetcode.com/problems/sort-list/description/

class Solution {

    ListNode * mergeList(ListNode * l1,ListNode *l2){

        ListNode * dummy=new ListNode(0);
        ListNode *temp=dummy;
        
        while(l1!=NULL && l2!=NULL){
            if(l1->val<=l2->val){
                temp->next=l1;
                l1=l1->next;
            }
            else
            {
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }

        if(l1!=NULL)
        temp->next=l1;
        if(l2!=NULL)
        temp->next=l2;


        return dummy->next;
}

public:
    ListNode* sortList(ListNode* head) {
        
      /*  vector<int>v;
        ListNode *temp=head;
        
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }

    sort(v.begin(),v.end());
    temp=head;
    int i=0;
    while(temp!=NULL){
        temp->val= v[i];
        i++;
        temp=temp->next;
    }
    return head;
    */

if(head==NULL || head->next==NULL)
return head;
    ListNode *prev=NULL;
    ListNode *slow=head;
    ListNode * fast=head;

while(fast!=NULL && fast->next!=NULL){
    prev=slow;
    slow=slow->next;
    fast=fast->next->next;
}
prev->next=NULL;
ListNode * l1=sortList(head);
ListNode *l2=sortList(slow);

ListNode *ans=mergeList(l1,l2);
return ans;


    }
};