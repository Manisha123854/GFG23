

https://practice.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-k-sorted-linked-lists


class Solution{
   
  public:
  
    class compare {
    public:
    bool operator() (Node*a , Node* b){
        return a->data > b->data;
    }
  };
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *a[], int k)
    {
        
        /*
        vector<int>v;
        
        for(int i=0;i<k;i++)
        {
            Node * head=a[i];
            
            while(head!=NULL){
                v.push_back(head->data);
                head=head->next;
            }
        }
        
        sort(v.begin(),v.end());
        Node * dummy=new Node(-1);
        Node *temp=dummy;
        
       for(auto i:v ){
           temp->next=new Node(i);
           temp=temp->next;
       }
       
       return dummy->next;
        */
        
        
        
        
        
        
        Node * dummy=new Node(-1);
        Node *tail=dummy;

    priority_queue<Node*,vector<Node*>, compare>pq;
    
    for(int i=0;i<k;i++){
        
        if(a[i]!=NULL)
        pq.push(a[i]);
    }
    
    while(pq.size()>0){
        Node* temp=pq.top();
            pq.pop();
         tail->next=temp;
            tail=temp;
          
        if(temp->next!=NULL)
        pq.push(temp->next);
        
    }
    
    return dummy->next;


    }
};

