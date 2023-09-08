
https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

//own

//Best
void rotateArrayByOne ( int a[], int n) {          //------------> TC=O(n)  ,Sc=O(1)

 int x=a[0];

for(int i=1;i<n;i++){
a[i-1]=a[i];
}
a[n-1]=x;


}
