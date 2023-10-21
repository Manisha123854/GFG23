https://leetcode.com/problems/subarray-sum-equals-k/description/

class Solution {
public:
    int subarraySum(vector<int>&a, int k) {
        int c=0;
        int n= a.size();

        /*for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;

                for(int k=i;k<=j;k++){
                    sum+=a[k];
                }

                if(sum==k)
                c++;
            }
        }
        return c;*/

       /* for(int i=0;i<n;i++){
             int sum=0;
            for(int j=i;j<n;j++){
                sum+=a[j];
               if(sum==k)
                c++;
            }
        }
        return c;
        */

    map<int,int>mp;
    mp[0]=1;
    int preSum=0;
    int cnt=0;

    for(int i=0;i<n;i++){
        preSum+=a[i];
        cnt+=mp[preSum-k];
        mp[preSum]+=1;
    }
  
         return cnt;
    }
};