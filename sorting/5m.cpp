
https://practice.geeksforgeeks.org/problems/quick-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=quick-sort


class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int a[], int low, int high)
    {
        if(low<high){
            
            int pindex=partition(a,low,high);
            quickSort(a,low,pindex-1);
            quickSort(a,pindex+1,high);
            
        }
    }
    
    public:
    int partition (int a[], int low, int high)
    {
       int pivot=a[low];
       int i=low;
       int j=high;
       
       while(i<j){
           
       
       while(a[i]<=pivot && i<=high){
           i++;
           
       }
       
       while(a[j]>pivot && j>=low)
       {
           j--;
       }
       if(i<j)
       swap(a[i],a[j]);
       }
       
       swap(a[low],a[j]);
       
       return j;
    }
};
