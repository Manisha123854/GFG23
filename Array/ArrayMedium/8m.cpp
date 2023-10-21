
https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>&a) {


        /*
        next_permutation(a.begin(),a.end());
        */


        int idx=-1;
        int n=a.size();
        for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1])
            {
                idx=i;
                 break;
            }
        }
    

    if(idx==-1){
    reverse(a.begin(),a.end());
    return;
    }
    for(int i=n-1;i>idx;i--){
        if(a[i]>a[idx]){
            swap(a[i],a[idx]);
            break;
        }
    }

    reverse(a.begin()+idx+1,a.end());
    }
};