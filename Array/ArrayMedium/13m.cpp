
https://leetcode.com/problems/spiral-matrix/description/

// solved by my own

//Best
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>&a ) {
        
        int n=a.size();
        int m=a[0].size();
        vector<int>v;

                                                       // ------------> Tc= O(N*M), Sc=O(N);
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=m-1;


        while(top<=bottom && left<=right){

            for(int i=left;i<=right;i++)
            v.push_back(a[top][i]);
            top++;
            
            for(int i=top;i<=bottom;i++)
            v.push_back(a[i][right]);

            right--;


            if(top<=bottom){
                for(int i=right;i>=left;i--)
                v.push_back(a[bottom][i]);

                bottom--;
            }


            if(left<=right){
                for(int i=bottom;i>=top;i--)
                v.push_back(a[i][left]);

                left++;
            }


        }


    return v;

    }
};