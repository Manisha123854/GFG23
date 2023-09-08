

//own

void rotateArrayByOne ( int a[], int n) {
    // Write your code here.

int x=a[0];
for(int i=1;i<n;i++){
a[i-1]=a[i];
}

a[n-1]=x;


}
