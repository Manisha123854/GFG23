
https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=fractional-knapsack


/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    static bool compare(Item a,Item b)
    {
        double r1= (double)a.value/(double)a.weight;
        double r2=(double)b.value/(double)b.weight;
        
        return r1>r2;
        
    }
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item a[], int n)
    {
        
        
       sort(a,a+n,compare);
       
       int currweight=0;
       double finalvalue=0.0;
       
       for(int i=0;i<n;i++){
        
        if(currweight+a[i].weight<=W)
        {
            currweight+=a[i].weight;
            finalvalue+=a[i].value;
        }
        else
        {
            int rem=W-currweight;
            finalvalue+=((double)a[i].value/(double)a[i].weight)*(double)rem;
            break;
        }
       
        }
        
        return finalvalue;
        
    }      
};
