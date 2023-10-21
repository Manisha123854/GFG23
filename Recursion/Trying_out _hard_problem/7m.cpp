

https://leetcode.com/problems/sudoku-solver/description/

class Solution {
bool isValid(vector<vector<char>>&a,int row,int col,char c){
    for(int i=0;i<9;i++){
        if(a[row][i]==c)
        return false;
        if(a[i][col]==c)
        return false;

        if(a[3*(row/3)+i/3][3*(col/3)+i%3]==c)
        return false;
    }
        return true;
    }



    bool solve(vector<vector<char>>&a){
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                
                if(a[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isValid(a,i,j,c))
                        {
                            a[i][j]=c;
                            if(solve(a)==true)
                            return true;
                            else
                            a[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }

        return true;
    }

public:
    void solveSudoku(vector<vector<char>>&a) {
        


        solve(a);


    }
};