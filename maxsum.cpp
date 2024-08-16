#include<bits/stdc++.h>
using namespace std;
vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
    vector<int>v;
    priority_queue<int>p1,p2;
     for(int i:A){
        p1.push(i);
    }
     for(int i:B){
        p2.push(i);
    }
    int a,b;
    for(int i=0;i<K/2;i++){
         v.push_back(p1.top() + p2.top());
         a=p1.top();
         b=p2.top();
         p1.pop();
         p2.pop();
         v.push_back(a+ p2.top());
         v.push_back(b+p1.top());
    }
    // code here
    return v;
}

int main(){
    int n,k=4;
    vector<int>A={1,4,2,3};
    vector<int>B={2,5,1,6};
    vector<int >v=maxCombinations(4,4,A,B);
    sort(v.rbegin(),v.rend());
    if(v.size() >= k){
        v.pop_back();
    }
    for(int i:v){
        cout<<i<<" ";
    }
}