

https://practice.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-a-pair-with-given-target-in-bst



class BSTIterator{
    stack<Node*>st;
    bool reverse=true;
    public:
    BSTIterator(Node *root,bool isReverse)
    {
        reverse=isReverse;
        pushAll(root);
    }
    
    bool hasNext(){
        return !st.empty();
    }
    
    int next(){
        Node*temp= st.top();
        st.pop();
        if(!reverse)
        pushAll(temp->right);
        else
        pushAll(temp->left);
        
        return temp->data;
                
    }
    
    void pushAll(Node *root){
        
        while(root!=NULL){
            st.push(root);
            if(!reverse)
            root=root->left;
            else
            root=root->right;
        }
    }
    
};


class Solution{
    
    
  public:
    // root : the root Node of the given BST
    // target : the target sum
    int isPairPresent(struct Node *root, int target)
    {
        if(root==NULL)
        return true;
        
        BSTIterator l(root,false);
        BSTIterator r(root,true);
        
        int i=l.next();
        int j=r.next();
        while(i<j) {
        if(i+j==target)
        return 1;
        
        if(i+j<target)
        i=l.next();
        else
        j=r.next();
    }
   return false;
    }
};

