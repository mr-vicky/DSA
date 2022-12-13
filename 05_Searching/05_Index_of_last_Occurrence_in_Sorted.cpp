#include<iostream>
using namespace std;

// Naive Code: Linear Search
// Time : O(n)
// Aux Space: O(1)
int lastOcc(int arr[], int n, int x)
{
    for(int i=n-1; i>=0; i--)
        if(arr[i]==x)
            return i;
    return -1;
}

// Efficient Code: Recursive solution
// Time : O(log(n))
// Aux Space: O(log(n))
int lastOccR(int arr[],int low, int high, int n, int x)
{
    if(low>high)
        return -1;

    int mid = (high+low)/2;

    if(arr[mid]<x)
        return lastOccR(arr, mid+1, high, n, x);
    else if(arr[mid]>x)
        return lastOccR(arr, low, mid-1, n, x);
    else 
    {
        if(mid==n-1 || arr[mid+1]!=arr[mid])
            return mid;
        else 
            return lastOccR(arr, mid+1, high, n, x);
    }
}


// Efficient Code(Recommended): Interative solution
// Time : O(log(n))
// Aux Space: O(1)
int lastOccI(int arr[], int n, int x)
{
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]<x)
            low=mid+1;
        else if(arr[mid]>x)
            high=mid-1;
        else 
        {
            if(mid==n-1 || arr[mid+1]!=arr[mid])
                return mid;
            else 
                low=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n=7;
    int arr[n]{5, 10, 10, 10, 10, 20, 20};
    int x=20;

    cout<<lastOcc(arr, n, x)<<endl; // Naive solution
    cout<<lastOccR(arr, 0, n-1, n, x)<<endl; // Recursive
    cout<<lastOccI(arr, n, x)<<endl; // Iterative 
    return 0;
}
