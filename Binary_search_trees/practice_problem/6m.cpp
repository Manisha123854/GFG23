
https://practice.geeksforgeeks.org/problems/check-for-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=check-for-bst

class Solution
{
    bool isvalidateBST(Node *root,int minval,int maxval){
        
        if(root==NULL)
        return true;
        
        if(root->data<=minval || root->data>=maxval)
        return false;
        
        return isvalidateBST(root->left,minval,root->data)&& isvalidateBST(root->right,root->data,maxval);
        
        
        
 }
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        
        
        return isvalidateBST(root,INT_MIN,INT_MAX);
    }
};