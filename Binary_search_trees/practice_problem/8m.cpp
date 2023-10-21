

https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/

class Solution {

 TreeNode * build(vector<int>&a, int &i, int bound){
    if(i==a.size() || a[i]>bound)
    return NULL;
    TreeNode * root=new TreeNode(a[i++]);
    root->left=build(a,i,root->val);
    root->right=build(a,i,bound);
    return root;
    
}

public:
    TreeNode* bstFromPreorder(vector<int>&a) {
        int i=0;
        return build(a,i,INT_MAX);
    }
};