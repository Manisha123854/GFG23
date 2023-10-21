
https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=finding-middle-element-in-a-linked-list


class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        
        
      /* int c=0;
        Node *t =head;
        while(t!=NULL){
          c++;  
          t=t->next;  
        }
        
        t=head;
        
        for(int i=0;i<c/2;i++)
        {
            t=t->next;
        }
        
        return  t->data;
        
       */ 
       
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow->data;
        
    
    }
};
