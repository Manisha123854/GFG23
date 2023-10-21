
https://practice.geeksforgeeks.org/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list


class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head, int x) {
        // Write your code here
        
        Node *temp=*head;
        while(temp!=NULL){
            
            if(temp->data==x){
                
                if(temp==*head)
                *head=temp->next;
                
                if(temp->prev!=NULL)
                temp->prev->next=temp->next;
                
                if(temp->next!=NULL)
                temp->next->prev=temp->prev;
                
                temp=temp->next;
                
            }
            else
            temp=temp->next;
        }
        
    }
};


https://www.codingninjas.com/studio/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list_8160461?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

Node *deleteAllOccurrences(Node* head, int k) {
    if (head == NULL)
        return head;

    Node *temp = head;
    while (temp != NULL) {
        if (temp -> data == k) {
          
                if (temp == head)
                head = head -> next;

            if (temp -> prev != NULL)
                temp -> prev -> next = temp -> next;
            if (temp -> next != NULL)
                temp -> next -> prev = temp -> prev;

            
            temp = temp -> next;

        } 
        else
            temp = temp -> next;
    }

    return head;
}