

https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=get-minimum-element-from-stack

 
/*

The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int>st;
    public:
    
       /*returns min element from stack*/
       int getMin(){
        if(st.empty()) 
         return -1;
         return minEle;
       }
       
       /*returns poped element from stack*/
       int pop(){
         
         if(st.empty()) 
         return -1;
         
         int ele= st.top();
         st.pop();
         
       
         if(ele<minEle){
        int x= minEle;
         minEle= 2*minEle-ele;
         return x;
         }
         
         return ele;
       
       }
       
       /*push element x into the stack*/
       void push(int x){
           int val=x;
           if(st.empty()){
               st.push(val);
              minEle=val;
           }
           else{
               if(val<minEle)
               {
                   st.push(2*val-minEle);
                   minEle=val;
               }
               else
               st.push(val);
           }
       }
};