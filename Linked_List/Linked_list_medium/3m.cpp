

https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reverse-a-linked-list

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        /*Node*prev=NULL;
        Node *curr=head;
        while(curr!=NULL){
            Node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        */
        
        if(head==NULL || head->next==NULL)
        return head;
        
        Node * newHead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        
      return newHead;  
        
    }
    
};
    
