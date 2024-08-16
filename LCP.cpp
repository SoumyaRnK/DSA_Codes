#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string>v={"soa","soumyaranjan","so","soumy"};
    // for(string i:v){
    //     cout<<i<<" ";
    // }
    string ans="";
    int f;
    for(int i=0;i<6;i++){
        char c=v[0][i];

        for(int j=1;j<4;j++){
            if(v[j][i]!=c){
                f=1;
                break;
            }
        }
        if(f!=1){
            ans.push_back(c);
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
}