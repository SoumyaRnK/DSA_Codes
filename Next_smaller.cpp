#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int findPeakElement(vector<int> &a)
{
    // Code here.
    int st = 0;
    int D = a.size() - 1;
    int end = D;
    int mid = st + (end - st) / 2;

    while (st < end)
    {
        if (a[mid] < a[mid + 1])
        {
            st = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = st + (end - st) / 2;
    }
    return st;
}
int main()
{
    vector<int> v={1 ,2 ,3 ,4 ,5 ,6 ,5, 4 ,3 ,2, 1};
    cout<<findPeakElement(v)<<endl;
    /*int arr[5]={3,2,1,4,7};
    int a,b,c;
    stack<int>s;
    s.push(-1);
    for(int i=4;i>=0;i--){
        if(arr[i]>s.top()){
            v.push_back(s.top());
            s.push(arr[i]);
        }
        else{
            while(s.top()>=arr[i]){
                s.pop();
            }
            v.push_back(s.top());
            s.push(arr[i]);
        }
    }
    reverse(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;*/
}