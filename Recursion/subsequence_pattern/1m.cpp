

https://practice.geeksforgeeks.org/problems/generate-all-binary-strings/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=generate-all-binary-strings

class Solution{
    void solve(int n,string temp){
        
        if(temp.size()==n){
            cout<<temp<<" ";
            return;
        }
        
        
        solve(n,temp+"0");
        
        if(temp[temp.size()-1]!='1')
        solve(n,temp+"1");
        
    }
public:
    void generateBinaryStrings(int n){

            solve(n,"");
    }
};