
https://practice.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximum-path-sum-from-any-node


class Solution {
    int findMaxPathSum(Node*root,int & maxsum){
        if(root==NULL)
        return 0;
        
        int ls=max(0,findMaxPathSum(root->left,maxsum));
        int rs=max(0,findMaxPathSum(root->right,maxsum));
        
        maxsum=max(maxsum,root->data+ls+rs);
        return root->data+max(ls,rs);
        
    }
  public:
    //Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node* root)
    {
        if(root==NULL)
        return 0;
        int maxSum=INT_MIN;
        findMaxPathSum(root,maxSum);
        return maxSum;
        
    }
};
