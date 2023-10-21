
https://leetcode.com/problems/linked-list-cycle-ii/description/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        /*unordered_set<ListNode*>st;
        ListNode * temp=head;

        while(temp!=NULL){
            if(st.find(temp)!=st.end())
            return temp;

            st.insert(temp);
            temp=temp->next;
        }
        return NULL;
*/

    
        if(head==NULL || head->next==NULL)
        return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* entry=head;

        while(fast!=NULL && fast->next!=NULL){

            slow=slow->next;
            fast=fast->next->next;
             if(slow==fast){
            while(slow!=entry){
                slow=slow->next;
                entry=entry->next;
            }
            return slow;
        }

     }
        return NULL;

        


    }
};