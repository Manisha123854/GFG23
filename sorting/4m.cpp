
https://practice.geeksforgeeks.org/problems/merge-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-sort

//merger_sort

class Solution
{
    public:
    void merge(int a[], int low, int mid, int high)
    {
        vector<int>temp;
        
        int left=low;
        int right=mid+1;
        
        while(left<=mid && right<=high){
            
            if(a[left]<=a[right]){
                temp.push_back(a[left]);
                left++;
            }
            else
            {
                temp.push_back(a[right]);
                right++;
            }
        }
        
        while(left<=mid){
            temp.push_back(a[left]);
            left++;
            
        }
         while(right<=high){
            temp.push_back(a[right]);
            right++;
        }
        
        for(int i=low;i<=high;i++){
            a[i]=temp[i-low];
        }
        
    }
    public:
    void mergeSort(int a[], int low, int high)
    {
      if(low>=high)
      return;
      
      int mid=(low+high)/2;
      
      mergeSort(a,low,mid);
      mergeSort(a,mid+1,high);
      merge(a,low,mid,high);
      
    }
};
