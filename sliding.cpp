#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={100,2,3,4,5,6,7,1};
    int k=4,n=8;

    int m=0,lsum=0,rsum=0;

    for(int i=0;i<k;i++){
        lsum+=arr[i];
    }
    m=lsum;
    int l=n-1;
    for(int i=k-1;i>=0;i--){
        lsum-=arr[i];
        rsum+=arr[l];
        l--;
        m=max(m,lsum+rsum);
    }
   
    cout<<m<<endl;
}