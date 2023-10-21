
https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=diameter-of-binary-tree


class Solution {
    int  diameterHelp(Node*root,int &diameter) {
        if(root==NULL)
        return 0;
        
        int lh=diameterHelp(root->left,diameter);
        int rh=diameterHelp(root->right,diameter);
        
        
        diameter=max(diameter,1+lh+rh);
        return 1+max(lh,rh);
        
    }
    
       int findHeight(Node * root){
        if(root==NULL)
        return 0;
        
        int lh=findHeight(root->left);
        int rh=findHeight(root->right);
        
        return 1+max(lh,rh);
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
       /*
       //Tc=O(n*2)
        if(root==NULL)
        return 0;
        
        int lh=findHeight(root->left);
        int rh=findHeight(root->right);
        
       
       int ld= diameter(root->left);
       int rd= diameter(root->right);
    
        
    return max(1+lh+rh,max(ld,rd));
      */  
        
      
     
     
     //Tc=O(n)
     
     if(root==NULL)
     return 0;
     int dia=0;
      diameterHelp(root,dia);
      return dia;
      
      
    }
};