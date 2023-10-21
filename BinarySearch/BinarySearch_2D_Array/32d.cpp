class Solution {
public:
bool binarySearch(vector<int>&a,int target){
    int n=a.size();

    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==target)
        return true;
        else if(a[mid]<target)
        low=mid+1;
        else
        high=mid-1;
    }
    return false;
}
bool searchMatrix(vector<vector<int>>& mat, int target) {

    
int n= mat.size();
int m= mat[0].size();


/*
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++){
        if(mat[i][j]==target)
        return true;
    }
}
return false;
*/

/*
bool  f=false;
for(int i=0;i<n;i++)
{
    

    bool  f=binarySearch(mat[i],target);
    if(f)
    return true;
}

return false;
*/

int row=0;
int col=m-1;
while(row<n && col>=0){
    if(mat[row][col]==target)
    return true;
    else if(mat[row][col]<target)
    row++;
    else
    col--;
}
return false;
 }
};