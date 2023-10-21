
https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-a-node-in-bst


bool search(Node* root, int x) {
    
    while(root!=NULL){
        if(root->data==x)
        return true;
        if(root->data>x)
        root=root->left;
        else
        root=root->right;
    }
    return false;
}
