


https://leetcode.com/problems/valid-parenthesis-string/description/


class Solution {
public:
    bool checkValidString(string s) {
        /*
        //tc=O(n),sc=O(n)
        stack<int>parenthesistack;
        stack<int>starstack;

        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            parenthesistack.push(i);
            else if(s[i]==')'){
                if(!parenthesistack.empty())
                parenthesistack.pop();
                else if(!starstack.empty())
                starstack.pop();
                else
                return false;
            }
            else
            starstack.push(i);
        }
        while(!parenthesistack.empty()){
            if(starstack.empty())
            return false;
            if(starstack.top()<parenthesistack.top())
            return false;
            parenthesistack.pop();
            starstack.pop();
        }

        return true;
        */


//tc=O(n),sc=O(1)
    int leftmin=0;
    int leftmax=0;
    for(int i=0;i<s.size();i++){
    if(s[i]=='('){
        leftmin=leftmin+1;
        leftmax=leftmax+1;
    }
    else if(s[i]==')'){
        leftmin=leftmin-1;
        leftmax=leftmax-1;

    }
    else{
        leftmin=leftmin-1;
        leftmax=leftmax+1;
    }
    if(leftmin<0)
    leftmin=0;
    if(leftmax<0)
    return false;
}

return leftmin==0;
    }
};