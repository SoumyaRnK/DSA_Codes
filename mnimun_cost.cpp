#include<bits/stdc++.h>
using namespace std;

// int solve(int n,int m,int arr[],int co[],int z){
//     if(z>=n){
//         return 0;
//     }
//     int i;
//     int a=co[0]+solve(n,m,arr,co,z+1);
    
//     for(i=z;i<n && arr[i]<arr[z]+7 ;i++);
//     int b=co[1]+solve(n,m,arr,co,i);

//     for(i=z;i<n && arr[i]<arr[z]+30;i++);
//     int c=co[2]+solve(n,m,arr,co,i);

//     return min(a,min(b,c));
// }


int solve1(int n,int m,int arr[],int co[],int z,vector<int>&dp){
    if(z>=n){
        return 0;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    int i;
    int a=co[0]+solve1(n,m,arr,co,z+1,dp);
    
    for(i=z;i<n && arr[i]<arr[z]+7 ;i++);
    int b=co[1]+solve1(n,m,arr,co,i,dp);

    for(i=z;i<n && arr[i]<arr[z]+30;i++);
    int c=co[2]+solve1(n,m,arr,co,i,dp);

    dp[n]=min(a,min(b,c));
    return dp[n];
}


int main(){
    int n=7,m=3;
    int arr[]={1,3,4,5,7,8,10};
    int co[]={2,8,20};
    vector<int>dp(n+1,-1);
    cout<<solve1(n,m,arr,co,0,dp);
}