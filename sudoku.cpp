#include<bits/stdc++.h>
using namespace std;

bool issafe(int r,int c,vector<vector<int>>&board,int val){
    for(int i=0;i<9;i++){
        if(board[r][i]==val){
            return 0;
        }
        if(board[i][c]==val){
            return 0;
        }
        if(board[3*(r/3)+ i/3][3*(c/3) +i % 3]== val){
            return 0;
        }
    }
    return 1;
}

bool solve(vector<vector<int>>&board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]==0){
                for(int k=1;k<=9;k++){

                    if(issafe(i,j,board,k)){
                        board[i][j]=k;
                    }
                    if(solve(board)){
                        return 1;
                    }
                    board[i][j]=0;
                }
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    vector<vector<int>>board={{1,2,3,0,5,6,7,8,0},{1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9},
                        {1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9},
                        {1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9}};
    bool f=solve(board);
    cout<<f<<endl;
}