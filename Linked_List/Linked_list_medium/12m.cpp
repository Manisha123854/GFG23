


https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=given-a-linked-list-of-0s-1s-and-2s-sort-it


class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
      /*
      
      // changing links
     if(head==NULL || head->next==NULL)   
     return head;
        
    Node *zeroD=new Node(0);
    Node *zero=zeroD;
                                         
    
    Node *oneD=new Node(0);
    Node *one=oneD;
    
    Node *twoD=new Node(0);
    Node *two=twoD;
    
    
    Node *temp=head;
    
    while(temp!=NULL){
        
        if(temp->data==0){
            zero->next=temp;
            temp=temp->next;
            zero=zero->next;
        }
        else if(temp->data==1){
            
            one->next=temp;
            temp=temp->next;
            one=one->next;
        }
        else{
            two->next=temp;
            temp=temp->next;
            two=two->next;
        }
    }
    
    
zero->next= oneD->next?oneD->next:twoD->next;
one->next=twoD->next;
two->next=NULL;

   head=zeroD->next;
   
   delete zeroD;
   delete oneD;
delete twoD;
    
   return head;
   
   */

  //changing data
   
    if(head==NULL || head->next==NULL)   
     return head;
        
int count[3]={0,0,0};


Node *temp=head;

while(temp!=NULL){
    
   count[temp->data] +=1;
   temp=temp->next;
}


int i=0;
temp=head;

while(temp!=NULL){
    
    if(count[i]==0)
    i++;
    else{
        temp->data=i;
        count[i]--;
        temp=temp->next;
    }
}
        
    
   return head;     
    }
};
