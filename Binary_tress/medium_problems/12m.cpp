
https://practice.geeksforgeeks.org/problems/symmetric-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=symmetric-tree
class Solution{
    
    bool findisSymmetric(Node *left,Node*right){
        if(left==NULL || right==NULL)
        return left==right;
        
        if(left->data!=right->data)
        return false;
        
        return findisSymmetric(left->left,right->right)&&
        findisSymmetric(left->right,right->left);
    }
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    if(root==NULL)
	    return true;
	    
	    return findisSymmetric(root->left,root->right);
    }
};