/*
Merge Sort : 
- Its an Divide and Conquer algorithm (Divide, Conquer and Merge)
- Stable Algorithm
- TC: O(n*log(n))
- SC: O(n)
- Well suited for Linked lists, works in O(1) Aux. space
- Used in External Sorting
*/ 

#include<iostream>
using namespace std;

// Merge Function:
// TC: O(n)
// SC: O(n)
void Merge(int arr[], int l, int m, int h)
{
    // Setting the two auxiliary arrays
    int n1=m-l+1;
    int n2=h-m;
    int left[n1];
    int right[n2];

    for(int i=0; i<n1; i++)
        left[i]=arr[l+i];
    for(int i=0; i<n2; i++)
        right[i]=arr[m+1+i];

    // Standard Merge Logic:
    int i=0, j=0, k=l;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else 
            arr[k++]=right[j++];
    }

    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];
}

// Merge Sort:
// TC: O(n*log(n))
// SC: O(n)
void MergeSort(int arr[], int l, int r)
{
    if(r>l)
    {
        int m = l+(r-l)/2;
        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);
        Merge(arr, l, m, r);
    }
}

int main()
{
    int n = 5;
    int arr[n]={5,10,30,15,7};
    int l=0;
    int r=4;

    cout<<"Array before Using Merge Sort: \n";
    for(auto x: arr)    
        cout<<x<<" ";

    MergeSort(arr, l, r); 

    cout<<"\nArray after Using Merge sort: \n";
    for(auto x: arr)    
        cout<<x<<" ";

    return 0;
}