

https://www.codingninjas.com/studio/problems/lower-bound_8165382?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1


int lowerBound(vector<int> a, int n, int x) {
	/*

	for(int i=0;i<n;i++)
	{
		if(a[i]>=x)
		return i;
	}

  return n;
*/
	

	int low=0;
	int high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;

		if(a[mid]>=x){
			ans=mid;
			high=mid-1;
		}
		else
		low=mid+1;
	}

	return ans;



}
