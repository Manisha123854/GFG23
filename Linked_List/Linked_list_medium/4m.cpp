
https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1?page=1&category[]=Linked+List&sortBy=submissions&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-loop-in-linked-list

   class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
     
     /*
      unordered_set<Node*>st;
      
      Node *temp=head;
      
      while(temp!=NULL){
      if(st.find(temp)!=st.end())
      return true;
      st.insert(temp);
      temp=temp->next;
          
      }
      
      return false;
      */
      
        
        
         Node * slow=head;
        Node *fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            return true;
         
        }
        
        
        return false;
        
        
    }
};
