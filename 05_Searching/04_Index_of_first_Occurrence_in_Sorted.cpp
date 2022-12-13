#include<iostream>
using namespace std;

// Naive method: Linear search
// Time: O(n)
// Aux Space: O(1)
int firstOcc(int arr[], int n, int x)
{
    for(int i=0; i<n; i++)
        if(arr[i]==x)
            return i;
    return -1;
}

// Efficient method: Recursive Solution
// Time: O(log(n))
// Aux Space: O(log(n))
int firstOccR(int arr[], int low, int high, int x)
{   
    
    if(low>high)
        return -1;

    int mid=(low+high)/2;

    if(arr[mid]<x)
        return firstOccR(arr, mid+1, high, x);
    else if(arr[mid]>x)
        return firstOccR(arr, low, mid-1, x);
    else 
    {
        if(mid==0 || arr[mid]!=arr[mid-1])
            return mid;
        else
            return firstOccR(arr, low, mid-1, x);
    }
}


// Efficient method (recommended): Interative Solution
// Time: O(log(n))
// Aux Space: O(1)
int firstOccI(int arr[], int n, int x)
{
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid = (high+low)/2;

        if(arr[mid]<x)
            low=mid+1;
        else if(arr[mid]>x)
            high=mid-1;
        else
        {
            if(mid==0 || (arr[mid]!=arr[mid-1]))
                return mid;
            else 
                high=mid-1;
        }
    }
}

int main()
{
    int n=7;
    int arr[n]{15, 15, 15, 15, 15, 15, 15};   
    int x=15;
    cout<<firstOcc(arr, n, x)<<endl;
    cout<<firstOccR(arr, 0, n-1, x)<<endl;
    cout<<firstOccI(arr, n, x)<<endl;

    return 0;
}
