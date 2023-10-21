
https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=check-for-balanced-tree

class Solution{
    int isBalancedHelp(Node*root){
        if(root==NULL)
        return 0;
        
        int lh=isBalancedHelp(root->left);
        if(lh==-1)
        return -1;
        
        int rh=isBalancedHelp(root->right);
        
        if(rh==-1)
        return -1;
        
        if(abs(lh-rh)>1)
        return -1;
        
        return 1+max(lh,rh);
    }
    
   /* int findHeight(Node * root){
        if(root==NULL)
        return 0;
        
        int lh=findHeight(root->left);
        int rh=findHeight(root->right);
        
        return 1+max(lh,rh);
    }*/
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
       /* 
       tc=O(n*2)
        if(root==NULL)
        return true;
        
        int lh=findHeight(root->left);
        int rh=findHeight(root->right);
        
        if(abs(lh-rh)>1)
        return false;
        
        bool ls=isBalanced(root->left);
        bool rs=isBalanced(root->right);
        
        if(ls==NULL || rs==NULL)
        return false;
        
        return true;
        
        */
        
        
        //Tc=O(n)
        
        if(root==NULL)
        return true;
      return  isBalancedHelp(root)!=-1;
      
      
        
    }
};
