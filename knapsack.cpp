#include<bits/stdc++.h>
using namespace std;

int frac(int wet[],int val[],int n,int w){
    if(n==0){
        if(wet[0] <= w){
            return wet[0];
        }
        else{
            return 0;
        }
    }
    int incl=0,excl;
    if(wet[n] <= w){
        incl=val[n]+frac(wet,val,n-1,w-wet[n]);
    }
    excl=frac(wet,val,n-1,w);
    int ans=max(excl,incl);
    //cout<<ans<<" ";
    return ans;
}

int main(){
    int n=4;
    int wet[]={1,2,4,5};
    int val[]={5,4,8,6};
    int w=5;
    cout<<frac(wet,val,n-1,w);
}