class Solution {
public:
    vector<int> rearrangeArray(vector<int>&a) {


        int n=a.size();

       /* vector<int>v;
        vector<int>pos;
     vector<int>neg;  

    for(int i=0;i<n;i++){
        if(a[i]<0)
        neg.push_back(a[i]);
        else
        pos.push_back(a[i]);
    }

    for(int i=0;i<n/2;i++){
        a[2*i]=pos[i];
        a[2*i+1]=neg[i];
    }
for(int i=0;i<n;i++)
v.push_back(a[i]);
return v;
*/

vector<int>v(n,0);
int posIndx=0;
int negIndx=1;

for(int i=0;i<n;i++){
    if(a[i]<0){
    v[negIndx]=a[i];
    negIndx+=2;
     }
    else{
        v[posIndx]=a[i];
        posIndx+=2;
    }
}


return v;
}
};