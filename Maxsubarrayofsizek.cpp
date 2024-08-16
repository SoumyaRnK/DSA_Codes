#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,-1,-2,3,-4,5,6,7};
    int k=3,n=10;
    vector<int>v;
    int m=INT16_MIN;
    for(int i=0;i<n-2;i++){
        for(int j=i;j<i+k;j++){
            m=max(arr[j],m);
        }
        v.push_back(m);
    }
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
}