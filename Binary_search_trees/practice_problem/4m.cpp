

https://practice.geeksforgeeks.org/problems/delete-a-node-from-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=delete-a-node-from-bst



Node * findlastRight(Node * root){
    if(root->right==NULL)
    return root;
    
    return findlastRight(root->right);
}

Node *helper(Node *root){
    if(root->left==NULL)
    return root->right;
    
    else if(root->right==NULL)
    return root->left;
    
    Node * rightchild=root->right;
    Node *lastRight=findlastRight(root->left);
    lastRight->right=rightchild;
    
    return root->left;
    
}

Node *deleteNode(Node *root, int x ) {
    
    
    if(root==NULL)
    return NULL;
    
    Node *dummy=root;
    
    if(root->data==x)
    return helper(root);
    
    while(root!=NULL){
        
    
    if(root->data>x){
        if(root->left!=NULL && root->left->data==x)
        root->left=helper(root->left);
        else
        root=root->left;
    }
    else
    {
        if(root->right!=NULL && root->right->data==x)
        root->right=helper(root->right);
        else
        root=root->right;
    }
    }
    
    return dummy;
    
    
}
