
https://practice.geeksforgeeks.org/problems/bubble-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bubble-sort

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int a[], int n)
    {
        
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
            }
        }
    }
};