

https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=add-1-to-a-number-represented-as-linked-list



class Solution
{
    
    Node*reverse(Node * head){
        
        Node * prev=NULL;
        Node *curr=head;
        while(curr!=NULL){
            Node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
    
    /*
    Node * addoneUtil(Node* head){
        Node *temp=head;
        Node*prev=NULL;
        int carry=1,sum=0;
        
        while(temp!=NULL){
          
            sum=temp->data+carry;
            carry= (sum>=10)?1:0;
            sum=sum%10;
            
            temp->data=sum;
            prev=temp;
            temp=temp->next;
            
            
        }
        
        if(carry)
        prev->next=new Node(1);
        
        return head;
    }*/
    public:
    Node* addOne(Node *head) 
    {
        //ex;499+1=s=500,999
        head=reverse(head);
        Node *temp=head;
        int carry=1;
        while(carry){
            
            temp->data+=1;
            
            if(temp->data<10)
            return reverse(head);
            else
            temp->data=0;
            
            if(temp->next==NULL)
            break;
            else
            temp=temp->next;
            
            
        }
        
        temp->next=new Node(1);
        return  reverse(head);
        
        
        /*
        head=reverse(head);
        head=addoneUtil(head);
         head=reverse(head);
         return head;*/
        
    }
};