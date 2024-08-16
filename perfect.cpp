#include<iostream>
#include<math.h>
using namespace std;
   char nthCharacter(string s, int r, int n) {
        int a=s.size();
        string t="";
        int z=pow(2,r);
        int l=a*z;
        int k=n/z;
        string w="";
        w.push_back(s[k]);
        int b=t.size();
        for(int i=0;i<r;i++){
            for(int j=0;j<b;j++){
                if(w[j]=='1'){
                    t.push_back('1');
                    t.push_back('0');
                }
                else{
                    t.push_back('0');
                    t.push_back('1');
                }
            }
            w=t;
            t="";
            a=w.size();
        }
        int c=n%z;
        return w[c];
        //code here
    }
int main(){
    string s="1010";
    int n=3;
    int r=1;
    char ch=nthCharacter(s,r,n);
    cout<<ch;
}