
https://practice.geeksforgeeks.org/problems/element-appearing-once2552/0?company[]=Qualcomm&company[]=Qualcomm&difficulty[]=1&page=1&query=company[]Qualcommdifficulty[]1page1company[]Qualcomm&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=element-appearing-once

// refer to soln for best approach

class Solution{
public:	
	int search(int a[], int n){
	    
	    //code
	    
	   /* 
	   map<int,int>mp;------------------------------------TLE(Time Limit exceed)
	    for(int i=0;i<n;i++){
	       mp[a[i]]++;
	    }
	    
	   for(auto i:mp){                                -----------------------> Tc= O(N*logM) + O(M), where M = size of the map, sc=O(m)
	       if(i.second ==1)
	       return i.first;
	   }
	    
	    return -1;
	    
	    */
	    
	    /*
	    
	    int maxi=a[0];      --------------------------------TLE
	    for(int i=0;i<n;i++)
	    {
	        
	        maxi=max(maxi,a[i]);
	    }
	    int h[maxi+1]={0};                      -----------------------> Tc=O(n)+O(n)+O(n)=O(3*n) ,Sc=(maxelement+1)
	    
	    for(int i=0;i<n;i++)
	    h[a[i]]++;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(h[a[i]]==1)
	        return a[i];
	    }
	    
	    return -1;  
	    */
	    
	    int s=0;                      // -------------->Tc=O(n) , Sc=O(1)
	    
	    for(int i=0;i<n;i++){
	        s=s^a[i];
	    }
	    
	    
	    return s;
	}
};