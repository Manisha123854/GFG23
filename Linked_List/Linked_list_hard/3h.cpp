


https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=flattening-a-linked-list


 Node *mergeTwoList(Node*a,Node *b) {
     
     Node *dummy=new Node(0);
     Node *temp=dummy;
     
     while(a!=NULL && b!=NULL){
         
    if(a->data<b->data) {
        temp->bottom=a;
        temp=temp->bottom;
        a=a->bottom;
    }
    else{
        temp->bottom=b;
        temp=temp->bottom;
        b=b->bottom;
    }
     }
    
    if(a)
    temp->bottom=a;
    else
    temp->bottom=b;
    
    return dummy->bottom;
    
 }
    
Node *flatten(Node *root)
{
  
    if(root==NULL || root->next==NULL)
   return root;
   
   root->next= flatten(root->next);
   
   root= mergeTwoList(root,root->next);
   
   return root;
}

