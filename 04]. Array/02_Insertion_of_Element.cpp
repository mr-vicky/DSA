#include<iostream>
using namespace std;

int insert(int arr[], int n, int pos, int cap, int x)
{
    if(n==cap)
        return n;
    int ind=pos-1;

    for(int i=n-1; i>=ind; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[ind]=x;
    return n+1; 
}

int main()
{
    int arr[5]={2, 4, 8, 10};
    int n=4;
    int pos=3;
    int cap=5;
    int x=6;

    cout<<"Before Insertion: "<<"\n";
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    n=insert(arr, n, pos, cap, x);
    
    cout<<"\n"<<"After Insertion: "<<"\n";
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}