
https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=check-if-linked-list-is-pallindrome


class Solution{
    
    Node* reverseList(Node * head){
        Node*prev=NULL;
        Node *curr=head;
        while(curr!=NULL){
           Node* next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
        }
        return prev;
    }
    
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
       /*vector<int>v;
       
       Node*temp=head;
       while(temp!=NULL)
        {
            v.push_back(temp->data);
            temp=temp->next;
        }
        
        int n=v.size();
        
        for(int i=0;i<n/2;i++){
            if(v[i]!=v[n-1-i])
            return false;
        }
        return true;
        */
        
        if(head==NULL || head->next==NULL)
        return true;
        
        
        Node*slow=head;
        Node *fast=head;
        
        while( fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next= reverseList(slow->next);
        slow=slow->next;
        
        Node * temp=head;
        
        while(slow!=NULL){
            if(temp->data!=slow->data)
            return false;
            
            slow=slow->next;
            temp=temp->next;
        }
        
        return true;
        
    }
};

