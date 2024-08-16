#include<bits/stdc++.h>
using namespace std;
#define m 1000000007

int add(int a,int b){
    return (a%m +b%m)%m;
}

int mul(int a,int b){
    return (a%m * 1LL * b%m)%m;
}


// int solve(int n,int k,vector<int>&dp){
//     if(n==1){
//         return k;
//     }
//     if(n==2){
//         return add(k,mul(k,k-1));
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }

//     dp[n]=add(mul(solve(n-2,k,dp),k-1),mul(solve(n-1,k,dp),k-1));
//     return dp[n];
// }

int solve1(int n,int k){
    int a=k;
    int b=add(k,mul(k,k-1));
    if(n==1){
        return a;
    }
    if(n==2){
        return b;
    }
    int c;
    for(int i=3;i<=n;i++){
        c=add(mul(b,k-1),mul(a,k-1));
        a=b;
        b=c;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return c;
}
int main(){
    int n=74,k=23;
    cout<<solve1(n,k);

}