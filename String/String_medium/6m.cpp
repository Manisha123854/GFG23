
https://leetcode.com/problems/longest-palindromic-substring/description/

class Solution {
   
    bool check(string &s,int i,int j){

        while(i<j){

            if(s[i]!=s[j])
            return false;

            i++;
            j--;
        }

        return true;
    }
 public:
    string longestPalindrome(string s) {

       /* int n=s.size();
        int start_index=0;
        int maxLen=0;                                       //--------------->Tc=O(n*n*n),sc=O(1)

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){

                if(check(s,i,j)){
                    if(j-i+1>maxLen){
                        maxLen=j-i+1;
                        start_index=i;
                    }
                }
            }
        }

        return s.substr(start_index, maxLen);
        */
       
       /*   int n = s.size();
            int max_len = 0;
            string ans;

        for(int i=0; i<n; i++){
            for(int j=i;j<n;j++){
                    if(check(s,i,j)){
                        if(j-i+1 > max_len){
                        max_len = j-i+1;
                        ans=s.substr(i, max_len);

                    }
                }
            }
        }
        return ans;
  */


        int n=s.size();
        int maxLen=0;
        int left,right;
        int i=0;
        string ans="";                           //----------------->Tc=O(n*n),sc=O(1)
        while(i<n){

            //odd case
             left=i,right=i;
            while(left>=0&&right<n&& s[left]==s[right]){
                if(right-left+1>maxLen){
                    maxLen=right-left+1;
                    //string t(s.begin()+left,s.begin()+right+1);
                    //ans=t;
                    ans=s.substr(left, maxLen);
                }
                left--;
                right++;
            }

            //right case
             left=i, right=i+1;
            while(left>=0 && right<n && s[left]==s[right]){
                if(right-left+1>maxLen){
                    maxLen=right-left+1;
                    // string t(s.begin()+left,s.begin()+right+1);
                    // ans=t;
                    ans=s.substr(left, maxLen);
                }
                left--;
                right++;
            }
            i++;
        }

    return ans;


    }
};