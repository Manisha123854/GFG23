

https://practice.geeksforgeeks.org/problems/fixed-two-nodes-of-a-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=fixed-two-nodes-of-a-bst

class Solution {
    
    Node*prev;
    Node *first;
    Node*last;
    Node *middle;
    
    void inorder(Node * root){
        if(root==NULL)
        return;
        
        inorder(root->left);
        
        if(prev!=NULL && root->data<prev->data){
            if(first==NULL){
                first=prev;
                middle=root;
            }
            else
            last=root;
        }
        
        prev=root;
        inorder(root->right);
    }
    
  public:
    void correctBST( struct Node* root )
    {
       first=last=middle=NULL;
       
       prev=new Node(INT_MIN);
       inorder(root);
       if(first && last)
       swap(first->data,last->data);
       else if(first && middle)
       swap(first->data,middle->data);
    }
};
