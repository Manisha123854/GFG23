

https://practice.geeksforgeeks.org/problems/inorder-traversal/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=inorder-traversal
class Solution {
    void findinorder(Node *root,vector<int>&v){
        if(root==NULL)
        return ;
        
        findinorder(root->left,v);
        v.push_back(root->data);
        findinorder(root->right,v);
    }
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
    
    /*vector<int>v;
    
    findinorder(root,v);
    return v;
    */
    
    
    
    vector<int>v;
    stack<Node*>st;
    
    while(true){
        
        if(root!=NULL){
            st.push(root);
            root=root->left;
        }
        else
        {
            if(st.empty()==true)
            break;
            
            root=st.top();
            st.pop();
            v.push_back(root->data);
           root=root->right;
            
        }
    }
    return v;
    
    
    }
};
