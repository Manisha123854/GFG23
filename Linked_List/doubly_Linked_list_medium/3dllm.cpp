
https://practice.geeksforgeeks.org/problems/remove-duplicates-from-a-sorted-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=remove-duplicates-from-a-sorted-doubly-linked-list


class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        
        struct Node* temp=head;
        
        while(temp!=NULL && temp->next!=NULL ){
            
            if(temp->data==temp->next->data){
                temp->next = temp->next->next;
            
                if(temp->next)
                temp->next->prev=temp;
             }
             else
            temp=temp->next;
            
        }
        
        
        return head;
        
      }
};