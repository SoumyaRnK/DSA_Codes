#include<bits/stdc++.h>
using namespace std;
void addElement(priority_queue<int> & A, int x)
{
    A.push(x);
    //your code here
}

/* remove top element from 
the priority queue*/
void remove_Element(priority_queue<int> &A)
{
    if(A.empty()){
        return;
    }
    A.pop();
    //your code here
}

/*  returns the top element 
of the priority queue*/
int getElement_at_top(priority_queue<int> &A)
{
   A.pop();
    //your code here
}

/* returns the size of
the priority queue*/
int getSize(priority_queue<int> &A)
{
    return A.size();
    //your code here
}

/* prints the element in 
the priority queue*/
void print(priority_queue<int> &A)
{
    priority_queue<int>p;
    int n=A.size();
    p=A;
    for(int i=0;i<n;i++){
        cout<<p.top()<<" ";
        p.pop();
    }
    //your code here
}
int main(){
    priority_queue<int>p,q;
    cout<<getElement_at_top(p)<<endl;
    
    addElement(p,10);
    addElement(p,12);
     cout<<getElement_at_top(p)<<endl;
    remove_Element(p);
     cout<<getElement_at_top(p)<<endl;

    addElement(p,15);
    addElement(p,1);
    

    
}