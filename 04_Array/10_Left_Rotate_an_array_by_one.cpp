#include<iostream>
using namespace std;

void LeftRotateByOne(int arr[],int n)
{
    
    int temp=arr[0];
    for(int i=0; i<n-1; i++)
        arr[i]=arr[i+1];
    
    arr[n-1]=temp;
    
}

int main()
{
    int arr[5]={9, 8, 7, 6, 5};
    int n=5;

    for(int x : arr )
        cout<<x<<" ";
    cout<<endl;

    LeftRotateByOne(arr, n);

    for(int x: arr)
        cout<<x<<" ";
    return 0;
}