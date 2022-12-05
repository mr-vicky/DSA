#include<iostream>
using namespace std;

// Binary search algorithm is used to search the element in the given SORTED array with more efficiency

// Time: O(log n)
// Space: O(1)
int BinarySearch(int arr[], int n, int x)
{
    int low=0; 
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==x)
            return mid;
        else if(arr[mid]<x)
            low=mid+1;
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n=6;
    int x=5;
    int arr[n]={2, 4, 5, 6, 8, 7};

    cout<<BinarySearch(arr, n, x);
    return 0;
}
