#include <bits/stdc++.h>
using namespace std;
int findmaxsum(int *arr,int l,int h){

    vector<int>dp(h-l+1,0);
    dp[0]=arr[l];
    dp[1]=max(arr[l],arr[l+1]);

    for(int i=l+2;i<=h;i++){
        int inc=arr[i]+dp[i-2];
        int exl=dp[i-1];

        dp[i]=max(inc,exl);
    }
    return dp[h];
}

int main(){
    int arr[]={7,3,7,7};
    int first=findmaxsum(arr,1,3);
    int sec=findmaxsum(arr,0,2);
    cout<<max(first,sec);
}