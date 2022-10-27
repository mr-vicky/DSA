#include<iostream>
using namespace std;

int search(int arr[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==k) 
            return i; // returning index
    }
    return -1;
}

int main()
{
    int arr[]={2, 4, 6, 8, 10};
    int n=5;
    int k=8;

    cout<<search(arr, n, k);
    return 0;
}