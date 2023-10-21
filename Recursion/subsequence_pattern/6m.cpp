https://www.codingninjas.com/studio/problems/subset-sum_630213?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

bool findsubset(int ind,int sum, vector<int>&a, int n, int k) {

 if (sum > k)
    return false;
    
  if (sum == k)
    return true;

  if (ind >= n)
    return false;


 
  if (findsubset(ind + 1,sum+a[ind], a, n, k))
    return true;
  if (findsubset(ind + 1,sum, a, n, k))
    return true;

  
}
bool isSubsetPresent(int n, int k, vector<int> &a)
{
   return findsubset(0,0,a,n,k);


}




