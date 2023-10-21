
https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insert-a-node-in-a-bst


class Solution
{
    public:
        Node* insert(Node*root, int val) {
        
        if(root==NULL){
            return new Node(val);
        }
        Node * curr_root=root;
        while(true){
            
         if(root->data==val)
         break;
            
        if(root->data<val){
            
        if(root->right!=NULL){
        root=root->right;
        }
        else{
        root->right=new Node(val);
        break;
        }
        }
        else{
         
         if(root->left!=NULL)  { 
            root=root->left;
         }
        else
        {
            root->left=new Node(val);
            break;
        }
        
        }
        }
        
        return curr_root;
            
    
}
};
