#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[],int s,int e){
    int element=arr[s];
    int count=0,pivot;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=element){
            count++;
        }
    }
    pivot=s+count;
    swap(arr[pivot],arr[s]);

    int i=s,j=e;
    while(i<pivot && j>pivot){
        while(arr[i]<=element){
            i++;
        }
        while(arr[j]>element){
            j--;
        }
        if(i<pivot && j>pivot){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivot;
}



void quicksort(int arr[],int s,int e){
    if(s>=e)
    return ;

    int p=partition(arr,s,e);

    quicksort(arr,s,p-1);

    quicksort(arr,p+1,e);


}


int main()
{
    int arr[] = {1, 2, 3, -90, -98, 23, 45, -23, -45, 23};
    int s = 0;
    int e = 9;
     for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }cout<<endl;
    quicksort(arr, s, e);
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
}