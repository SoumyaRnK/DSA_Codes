#include<iostream>
using namespace std;
class stack{
    //properties
    public:
    int arr[50];
    int top=-1;

    //behaviour
    public:
    void push(int x){
        arr[++top]=x;
    }
    void pop(){
        if(top==-1)
            return ;
        else
        arr[top--]=0;
    }
    void Top(){
        if(top==-1){
            cout<<"-1";
            return;
            }
        cout<<arr[top]<<" ";
    }
};
int main(){
    stack s;
    s.push(3);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(14);
    s.push(4);
    s.push(4);
    s.push(15);
    s.pop();
    s.pop();
    s.pop();
    s.Top();
}