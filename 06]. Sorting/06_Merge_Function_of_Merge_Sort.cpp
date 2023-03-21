/*
Merge Function of Merge Sort: 
- This function is used to merge the two sorted subarrays to make the whole array sorted 
- This is a standerd function which used in the implementation of the merge sort
- TC: O(n)
- SC: O(n)
- array should contain atleast two elements.
*/ 

#include<iostream>
using namespace std;

void MergeFunction(int arr[], int low, int mid, int high)
{
    // Setting Up the auxiliary arrays-> 
    int n1 = mid-low+1;
    int n2 = high-mid;
    int left[n1], right[n2];

    for(int i=0; i<n1; i++)
    {
        left[i]=arr[low+i];
    }

    for(int i=0; i<n2; i++)
    {
        right[i]=arr[mid+i+1];
    }

    // Standerd Merge Logic ->
    int i=0;
    int j=0;
    int k=low;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}

int main()
{
    int n = 5;
    int arr[n]={10, 20, 40, 20, 30}; // input array has two sorted subarrays   
    int low=0, mid=2, high=4;

    cout<<"Array before Using Merge function: \n";
    for(auto x: arr)    
        cout<<x<<" ";

    MergeFunction(arr, low, mid, high);

    cout<<"\nArray after using Merge function: \n";
    for(auto x: arr)    
        cout<<x<<" ";

    return 0;
}
