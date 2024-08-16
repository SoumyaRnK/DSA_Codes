#include<iostream>
using namespace std;
int main(){
    /*int f=9;
     int* p=&f;
    int *q=p;
     cout<<*p<<" "<<*q<<endl;
     int arr[13]={1,2,3,3,3,5,5,6,7,8,9,80,90};
     int g=ternary(arr,13,3);
     cout<<g<<endl;
     char ch[]="abcde";
     char *p=&ch[0];
     p++;
     cout<<*p<<endl;
    /*int *a=new int;
    cin>>*a;
    cout<<*a;
    
   int *arr=new int[5];
   for(int i=0;i<5;i++){
    cin>>arr[i];
   }
   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
   }cout<<endl;
   delete []arr;
   */
   int m,n;
   cout<<"Enter m & n "<<endl;
   cin>>m>>n;
   int **arr=new int*[m];
   for(int i=0;i<m;i++){
        arr[i]=new int[n];
   }
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
   }
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
   }
}