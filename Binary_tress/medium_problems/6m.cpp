
https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>>ans;
        if(root==NULL)
        return ans;
       queue<TreeNode*>q;
        q.push(root);
        bool leftToRight=true;
        while(!q.empty()){

        int n=q.size();
        vector<int>v(n);
        for(int i=0;i<n;i++){
        TreeNode*node=q.front();
        q.pop();

        int index=leftToRight?i:n-1-i;
        v[index]=node->val;
        if(node->left!=NULL)
        q.push(node->left);
        if(node->right!=NULL)
        q.push(node->right);
         }
         leftToRight=!leftToRight;
        ans.push_back(v);

    }


    return ans;

 }
};