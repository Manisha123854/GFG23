
//https://leetcode.com/problems/single-number/

//own
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {        
        int maxi=0;
        int c=0;

    for(int i=0;i<a.size();i++){   

    if(a[i]==1){
        c++;                                         //--------------> Tc= O(n) , Sc=O(1)
    }                                                                   
    else
    c=0;

    maxi= max(maxi,c);
}

    return maxi;

    }
};