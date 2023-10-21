


https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print_1_to_n_without_loop

class Solution{
    public:
    //Complete this function
    void printNos(int n)
    {
        if(n<1)
        return;
        printNos(n-1);
        cout<<n<<" ";
        
    }
};
