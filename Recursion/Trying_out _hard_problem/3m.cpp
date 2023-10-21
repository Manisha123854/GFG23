


https://leetcode.com/problems/n-queens/description/


class Solution {

    bool isSafe(int row, int col,vector<string>&a,int n)
{
    int duprow=row;
    int dupcol=col;

    while(row>=0 && col>=0){
        if(a[row][col]=='Q')
        return false;
        row--;
        col--;
    }

    row=duprow;
    col=dupcol;

    
    


    while(col>=0){

        if(a[row][col]=='Q')
        return false;
        col--;
    }

    row=duprow;
    col=dupcol;

    while(row<n && col>=0){

       if(a[row][col]=='Q')
       return false;

       row++;
       col--;


    }

    return true;
}
/*
    void solve(int col,vector<string>&a,vector<vector<string>>&ans,int n){

    if(col==n)
    {
        ans.push_back(a);
        return;
    }
    
    for(int row=0;row<n;row++){
        if(isSafe(row,col,a,n)){
            a[row][col]='Q';
            solve(col+1,a,ans,n);
            a[row][col]='.';
        }
    }
    }

*/


 void solve(int col,vector<string>&a,vector<vector<string>>&ans,vector<int>&leftrow,vector<int>&upperDiagonal,vector<int>&lowerDiagonal,int n)
 {
        if(col==n){
            ans.push_back(a);
            return;
        }

for(int row=0;row<n;row++){
    if(leftrow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0){

        a[row][col]='Q';
       
        leftrow[row]=1;
        lowerDiagonal[row+col]=1;
        upperDiagonal[n-1+col-row]=1;
        solve(col+1,a,ans,leftrow,upperDiagonal,lowerDiagonal,n);
        a[row][col]='.';
        leftrow[row]=0;
        lowerDiagonal[col+row]=0;
        upperDiagonal[n-1+col-row]=0;
    }
}

 }
public:
vector<vector<string>> solveNQueens(int n) {
        
/* vector<vector<string>>ans;
 vector<string>a(n);

string s(n,'.');

 for(int i=0;i<n;i++)
 a[i]=s;

 solve(0,a,ans,n);
 return ans;

 */

vector<vector<string>>ans;
 vector<string>a(n);

string s(n,'.');

 for(int i=0;i<n;i++)
 a[i]=s;

 vector<int>leftrow(n,0);
 vector<int>upperDiagonal(2*n-1,0);
 vector<int>lowerDiagonal(2*n-1,0);
 

 solve(0,a,ans,leftrow,upperDiagonal,lowerDiagonal,n);
 return ans;

}
};