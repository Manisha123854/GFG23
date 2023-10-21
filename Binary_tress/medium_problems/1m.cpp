

https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=height-of-binary-tree



class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* root){
      
      if(root==NULL)
      return 0;
      
      int lh=height(root->left);
      int rh=height(root->right);
      
      return 1+max(lh,rh);
      
    }
};
