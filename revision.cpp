#include<bits/stdc++.h>
using namespace std;
void prin(vector<vector<int>>v,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
}


vector<vector<int>> inot(vector<vector<int>>&v,int n){
    vector<vector<int>>v1(n,vector<int>(n,0));
    int r,q=v[0][0];
    v1[0][0]=v[0][0];
    for(int i=1;i<n;i++){
        v1[0][i]=v[0][i]-q;
        q+=v1[0][i];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            r=0;
            for(int k=0;k<=i;k++){
                for(int l=0;l<=j;l++){
                    r+=v1[k][l];
                }
            }
            v1[i][j]=v[i][j]-r;
        }
    }

    return v1;
}

int main(){
    int n=3,r;
    vector<vector<int>>v={{1,2,3},{4,5,6},{7,8,9}};
    prin(v,n);
    vector<vector<int>>v1(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            r=0;
            for(int k=0;k<=i;k++){
                for(int l=0;l<=j;l++){
                    r+=v[k][l];
                }
            }
            v1[i][j]=r;
        }
    }
    cout<<endl;
    prin(v1,n);
    cout<<endl;
    vector<vector<int>>v2=inot(v1,n);
    prin(v2,n);
}