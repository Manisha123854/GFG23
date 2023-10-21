
https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=stock-span-problem




class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int a[], int n)
    {
       vector<int>v;
       
       for(int i=0;i<n;i++){
           
           int c=0;
           for(int j=i;j>=0;j--){
               if(a[j]<=a[i])
               c++;
               else
               break;
           }
           v.push_back(c);
       }
       return  v;
       
       
       /*
       
       vector<int>v;
       stack<int>st;
       
       for(int i=0;i<n;i++){
           
           while(!st.empty() && a[st.top()]<=a[i])
           st.pop();
           
           if(st.size()==0)
           v.push_back(-1);
           else
           v.push_back(st.top());
           
           st.push(i);
       }
       
       for(int i=0;i<n;i++)
       v[i]=i-v[i];
       
       return v;
       */
       
       
    }
};
