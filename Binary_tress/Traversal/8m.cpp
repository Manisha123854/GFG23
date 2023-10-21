
https://leetcode.com/problems/binary-tree-level-order-traversal/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>ans;
        vector<int>v;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int n=q.size();

            for(int i=0;i<n;i++){

                Node *temp=q.front();
                q.pop();
                v.push_back(temp->data);
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);


            }
            ans.push_back(v);
        }

    return ans;

    }
};