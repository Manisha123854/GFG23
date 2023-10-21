https://practice.geeksforgeeks.org/problems/largest-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-bst

class NodeValue{
    public:
    int maxvalue, minvalue, maxsize;
    
    NodeValue(int minvalue,int maxvalue,int maxsize)
    {
        this->minvalue=minvalue;
        this->maxvalue=maxvalue;
        this->maxsize=maxsize;
        
    }
};




class Solution{
    
NodeValue largestBSTHelper(Node *root) {
    
    
    if(root==NULL)
    return NodeValue(INT_MAX,INT_MIN,0);
    
    auto left=largestBSTHelper(root->left);
    auto right=largestBSTHelper(root->right);
    
    
    if(left.maxvalue<root->data && root->data<right.minvalue)
   
    return NodeValue(min(root->data,left.minvalue),max(root->data,right.maxvalue),left.maxsize+right.maxsize+1);

    
    return NodeValue(INT_MIN,INT_MAX,max(left.maxsize,right.maxsize));
} 
    
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int largestBst(Node *root)
    {
    	return largestBSTHelper(root).maxsize;
    	
    }
};
