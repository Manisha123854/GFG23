https://leetcode.com/problems/palindrome-partitioning/description/


class Solution {
    bool isPalindrome(string s,int i,int j){
        
        while(i<=j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }

        return true;
    }
    void findPartition(int ind,string s, vector<string>&v,vector<vector<string>>&ans){

        if(ind==s.size()){
            ans.push_back(v);
            return;
        }

        for(int i=ind;i<s.size();i++){
            if(isPalindrome(s,ind,i)){
                v.push_back(s.substr(ind,i-ind+1));
                findPartition(i+1,s,v,ans);
                v.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;

        findPartition(0,s,v,ans);
        return ans;


    }
};