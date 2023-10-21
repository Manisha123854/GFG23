
https://www.codingninjas.com/studio/problems/reverse-an-array_8365444?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1




void reverseUsingRecursion(int i,vector<int> &a){

int n=a.size();

if(i>=n/2)
return;
swap(a[i],a[n-1-i]);
reverseUsingRecursion(i+1,a);

}



vector<int> reverseArray(int n, vector<int> &a)
{

    /*for(int i=0;i<n/2;i++)
    swap(a[i],a[n-1-i]);

    return a;
    */

   
   reverseUsingRecursion(0,a);
   return a;

}
