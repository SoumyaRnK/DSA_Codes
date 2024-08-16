#include <bits/stdc++.h>
using namespace std;

int findMaxSum(int *arr, int n) {
	    vector<int>dp(n,0);
	    dp[0]=arr[0];
	    dp[1]=arr[1];
	    for(int i=2;i<n;i++){
	        int incl=dp[i-2]+arr[i];
	        int exl=dp[i-1];
	        
	        dp[i]=max(incl,exl);
	    }
	    return dp[n-1];
	    // code here
	}
int findMaSum(int *arr, int n) {
	
	    int a=arr[0];
	    int b=arr[1];
        int c;
	    for(int i=2;i<n;i++){
	        int incl=a+arr[i];
	        int exl=b;
	        
	        c=max(incl,exl);
            a=b;
            b=c;
	    }
	    return c;
	    // code here
	}
int main(){

    int arr[]={3,2,7,10};
    cout<<findMaSum(arr,4);
    cout<<findMaxSum(arr,4);
    

}