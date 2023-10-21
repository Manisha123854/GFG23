https://practice.geeksforgeeks.org/problems/missing-number4257/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=missing-number

// refer to soln

int missingNumber(int a[], int n)
{
   
   
   //BF
    
    /*sort(a,a+n);     ------------------------------------->This approach is not working
        for(int i=0;i<n-1;i++){
            if(a[i]!=i+1)
            return i;
            else
            conti
        }
        
        return -1;

*/

    /*for(int i=1;i<=n;i++){
           int f=0;
           
        for(int j=0;j<n-1;j++){           ----------------> TC=O(n*N) ,Sc=O(1)
            if(a[j]==i){
                f=1;
                break;
                 }
             } 
            if(f==0)
            return i;
        }
        
        return -1;*/
        
       
        //Better
        
       /* int h[n+1]={0};
        for(int i=0;i<n-1;i++)
        h[a[i]]++;                        ---------------------->Tc=O(n), Sc=O(n)
        
        for(int i=1;i<=n;i++)
        {
            if(h[i]==0)
            return i;
        }
        
        return -1;
        */
        
        
        //Best

        int  s=0;                             //------------> TC= O(n),sc=o(1)
        int sum= (n*(n+1))/2;
        for(int i=0;i<n-1;i++)
        s+=a[i];
        
        return sum-s;
        
        
        
       
    }
    