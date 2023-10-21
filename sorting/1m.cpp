


//selection_sort


void selectionSort(int a[], int n){

    for(int i=0;i<n-1;i++){
        
        int mini=i;
        for(int j=i;j<n;j++){

            if(a[j]<a[mini]){
                mini=j;
            }
        }

        swap(a[i],a[mini]);
    }
}