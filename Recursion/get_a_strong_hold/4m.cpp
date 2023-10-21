

https://practice.geeksforgeeks.org/problems/sort-a-stack/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=sort-a-stack


void  insertGreater(stack<int>&st,int x){
    
    
    if(st.size()==0 || x>st.top()){
        st.push(x);
        return;
    }
    else
    {
        int y=st.top();
        st.pop();
        insertGreater(st,x);
        st.push(y);
      
    } 
        
    
}

void recursionSort(stack<int>&st){
    
    if(st.size()==0)
    return;
    
   int x=st.top();
   st.pop();
   recursionSort(st);
   
   insertGreater(st,x);
    
    
}


void SortedStack :: sort()
{
  
 recursionSort(s);
}