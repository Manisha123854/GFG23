
https://practice.geeksforgeeks.org/problems/largest-odd-number-in-string/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-odd-number-in-string

/*
Input: s = "504"
Output: "5"
Explanation: The only subtring "5" is odd number.
 

Example 2:

Input: s = "2042"
Output: ""
Explanation: All the possible non-empty substring have even value
*/


class Solution {
  public:
    string maxOdd(string s) {
        // your code here                                   Tc=O(n),sc=O(1)
        
        
        for(int i=s.size()-1;i>=0;i--){
            if((s[i]-'0')%2==1)
            return s.substr(0,i+1);
        }
        
        return "";
    }
};