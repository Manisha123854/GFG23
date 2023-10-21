
https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>&a , int target) {

       /* int n=a.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }

        return {-1,-1};
        */

//Better
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(target-a[i])!=mp.end()){
            v.push_back(i);
            v.push_back(mp[target-a[i]]);
            }

            mp[a[i]]=i;
        }
        return v;

        

       /* int left=0;
        int right=n-1;

        vector<int>v;
        sort(a.begin(),a.end());
        while(left<right){

            int sum= a[left]+a[right];
            if(sum==target){
               return true;
            }
            else if(sum<target)
            left++;
            else 
            right--;

        }

            return false;


        */
    }
};