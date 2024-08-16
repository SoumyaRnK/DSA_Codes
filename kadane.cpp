#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int k=3,n=9;
    vector<int>v;
    int sum=arr[0];
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi<<endl;
}