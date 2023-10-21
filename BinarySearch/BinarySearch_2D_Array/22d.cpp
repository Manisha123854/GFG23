
https://leetcode.com/problems/search-a-2d-matrix/description/

class Solution {
public:
bool binarySearch(vector<int>&a, int target){
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
for(int i=0;i<n;i++)
{
    if(target>=mat[i][0] && target<=mat[i][m-1])

    return binarySearch(mat[i],target);
}

return false;

*/

int low=0;
int high=n*m-1;

while(low<=high){
    int mid=(low+high)/2;

int row= mid/m;
int col=mid%m;
if(mat[row][col]==target)
return true;
else if(mat[row][col]<target)
low=mid+1;
else
high=mid-1;
}

return false;
    };
};