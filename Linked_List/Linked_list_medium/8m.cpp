
https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=segregate-even-and-odd-nodes-in-a-linked-list

class Solution{
public:
    Node* divide(int N, Node *head){
        
        /*vector<int>ov,ev;
        
        Node * temp=head;
    
        while(temp!=NULL){
            
            if(temp->data%2==0)
            ev.push_back(temp->data);
            else
            ov.push_back(temp->data);
            
            temp=temp->next;
        }
        ov.insert(ov.begin(),ev.begin(),ev.end());
        
        int i=0;
        temp=head;
        while(temp!=NULL){
            
            temp->data=ov[i];
            i++;
            temp=temp->next;
        }
        
        return head;*/
        
      
      
        Node *es=NULL;
        Node *eE=NULL;
        Node *os=NULL;
        Node *oe=NULL;
        Node * temp=head;
        
        while(temp!=NULL){
            
            int x=temp->data;
            
            if(x%2==0){
                
                if(es==0){
                    
                    es=temp;
                    eE=es;
                }
                else
                {
                    eE->next=temp;
                    eE=eE->next;
                }
            }
            else
            {
                if(os==0){
                    os=temp;
                    oe=os;
                }
                else
                {
                    oe->next=temp;
                    oe=oe->next;
                    
                }
            }
           temp=temp->next; 
        }
        
        if(os==NULL || es==NULL)
        return head;
        
        eE->next=os;
        oe->next=NULL;
        
        return es;
        
        
        
    }
};