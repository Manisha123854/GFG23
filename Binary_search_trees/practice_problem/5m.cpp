
https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-k-th-smallest-element-in-bst

class Solution {
    Node * help(Node * root,int &k){
         
       if(root==NULL)
       return NULL;
       
       
    Node *left=help(root->left,k);
    
    if(left!=0)
    return left;
    k--;
    if(k==0)
    return root;
   
    return help(root->right,k);
      
    }
  public:
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int k) {
        
       Node * ans= help(root,k);
       if(ans!=NULL)
       return ans->data;
       return -1;
       
       
      
    }
};
