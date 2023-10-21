

https://leetcode.com/problems/rotate-image/description/
//own
//Best

class Solution {
public:
    void rotate(vector<vector<int>>& a) {                 //Tc=O(N*N) , Sc=O(!)
        
        int n=a.size();

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(a[i][j],a[j][i]);
            }
        }


        for(int i=0;i<n;i++){
            reverse(a[i].begin(),a[i].end());
        }



    }
};