#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    int row;
    int col;
    node(int d,int r,int c){
        data=d;
        row=r;
        col=c;
    }
};


class compare{
    public:
    bool operator()(node a,node b){
        return a.data > b.data;
    }
};

int main(){
    priority_queue<node,vector<node>,compare>p;
    int arr[3][3]={{1,2,5},{3,6,89},{10,9,90}};
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<3;i++){
        int ele=arr[i][0];
        mini=min(mini,ele);
        maxi=max(maxi,ele);
        p.push(node(ele,i,0));
    }
    int start=mini,end=maxi;
    while(!p.empty()){
        node temp=p.top();
        p.pop();
        mini=temp.data;
        if(maxi-mini  < end-start){
            start=mini;
            end=maxi;
        }

        if(temp.col+1 < 3){
            maxi=max(maxi,arr[temp.row][temp.col +1]);
            p.push(node(arr[temp.row][temp.col +1],temp.row,temp.col+1));
        }
        else{
            break;
        }
    }
    cout<<mini<<" "<<maxi<<endl;
    cout<<start<<" "<<end<<endl;
}