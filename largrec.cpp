#include<bits/stdc++.h>
using namespace std;

// int solve(int n,int arr[][4],int i,int j,int &maxi){

//     if(i>=n || j>=n){
//         return 0;
//     }

//     int ri=solve(n,arr,i,j+1,maxi);
//     int di=solve(n,arr,i+1,j+1,maxi);
//     int dow=solve(n,arr,i+1,j,maxi);

//     if(arr[i][j]==1){
//         int ans=1+min(ri,min(di,dow));
//         maxi=max(ans,maxi);
//         return ans;
//     }
//     else{
//         return 0;
//     }
// }

int solve1(int n,int arr[][4],int i,int j,int &maxi,vector<vector<int>>&dp){

    if(i>=n || j>=n){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    int ri=solve1(n,arr,i,j+1,maxi,dp);
    int di=solve1(n,arr,i+1,j+1,maxi,dp);
    int dow=solve1(n,arr,i+1,j,maxi,dp);

    if(arr[i][j]==1){
        int ans=1+min(ri,min(di,dow));
        maxi=max(ans,maxi);
        dp[i][j]= ans;
        return dp[i][j];
    }
    else{
        return dp[i][j]=0;
    }
}



int main(){
    int arr[][4]={{1,0,1,1},
                {1,1,1,1},
                {1,0,1,1},
                {1,1,1,1}};
    int n=4;
    int maxi=0;
    vector<vector<int>>dp(n,vector<int>(n,-1));
    solve1(n,arr,0,0,maxi,dp);
    cout<<maxi;
}