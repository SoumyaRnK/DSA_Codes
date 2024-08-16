#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&cost,int n,vector<int>&dp){
    if(n==0 || n==1){
        return dp[n];
    }

    if(dp[n]!=-1){
        return dp[n];
    }

    dp[n]=cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector<int>cost(n);
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
    //proc2


    // vector<int>dp(n+1,-1);
    // dp[0]=cost[0];
    // dp[1]=cost[1];
    // int ans=min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    // cout<<ans<<endl;

    // proc1


    // dp[0]=cost[0];
    // dp[1]=cost[1];
    // for(int i=2;i<=n;i++){

    //     dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
    // }
    // cout<<dp[n]<<endl;


    //proc3
    int a=cost[0];
    int b=cost[1];
    int c;
    for(int i=2;i<n;i++){

        c=cost[i]+min(a,b);
        a=b;
        b=c;
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
 
}