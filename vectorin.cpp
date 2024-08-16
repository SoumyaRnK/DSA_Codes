#include<iostream>
#include<vector>
using namespace std;
void printi(vector<vector<int>>& mat,vector<int>& v){
    if(mat.size()==1){
        for(int i:mat[0]){
            v.push_back(i);
        }
        return ;
    }
    int row=mat.size();
    int mid=row/2;
    vector<vector<int>>v2(mat.begin(),mat.begin()+mid);
    vector<vector<int>>v1(mat.begin()+mid,mat.end());
    printi(v2,v);
    printi(v1,v);
}
int main(){
     vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
     vector<int>v;
     printi(mat,v);
     for(int i:v){
        cout<<i<<" ";
     }
}