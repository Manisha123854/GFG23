
https://leetcode.com/problems/binary-search-tree-iterator/description/

class BSTIterator {

stack<TreeNode*>st;

public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode * temp=st.top();
        st.pop();
        
        
        pushAll(temp->right);

        return temp->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }

    void pushAll(TreeNode *root){
     

        while(root!=NULL){
            st.push(root);
            root=root->left;
        }
    }
};

