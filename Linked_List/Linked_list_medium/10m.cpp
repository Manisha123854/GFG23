


https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=delete-middle-of-linked-list



// Deletes middle of linked list and returns head of the modified list

Node* deleteMid(Node* head)
{
    // Your Code Here
    /*if(head==NULL || head->next==NULL)
    return NULL;
    
    int c=0;
    Node *temp=head;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    
    temp=head;
    for(int i=1;i<c/2;i++)
    temp=temp->next;
    
    temp->next=temp->next->next;
    
    return head;
    */
    
    
    if(head==NULL || head->next==NULL)
    return NULL;
    
    Node *prev=NULL;
    Node *slow=head;
    Node *fast=head;
    
    while( fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
       fast= fast->next->next;
    }
    
    prev->next=slow->next;
    
    return head;
    
    
}


