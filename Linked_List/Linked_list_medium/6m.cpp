

https://practice.geeksforgeeks.org/problems/find-length-of-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-length-of-loop

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
   /* unordered_set<Node*>st;
    
    Node * curr=head;
    while(curr!=NULL){
      if(st.find(curr)!=st.end()) {
          
        Node *temp=curr->next;
        int c=1;
        while(temp!=curr){
            
            c++;
            temp=temp->next;
        }
        
        return c;
        
    }
    st.insert(curr);
    curr=curr->next;
    }
    
    return 0;
    */
    
    if(head==NULL || head->next==NULL)
    return 0;
    
    Node *slow=head;
    Node *fast=head->next;
    
    while(slow!=fast){
        
        if(fast==NULL || fast->next==NULL)
        return 0;
        slow=slow->next;
        fast=fast->next->next;
       
    }
    int c=1;
    fast=fast->next;
   
    while(fast!=slow){
        
        c++;
        fast=fast->next;
    }
    
    return c;
    
    
}