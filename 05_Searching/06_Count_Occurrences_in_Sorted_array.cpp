#include<iostream>
using namespace std;

// Solution 1: Naive Code
// Time: 0(n)
// Aux Space: O(1)
int getOcc1(int arr[], int n, int x)
{
    int count=0;
    for(int i=0; i<n; i++)
        if(arr[i]==x)
            count++;
    return count;
}

// Solution 2: Efficient Code
// Time: O(log(n)+k) where k=no. of occurrences
// Worst time case: O(log(n)+n)=O(n) where k=n;
// Aux Space: O(1)
int getOcc2(int arr[], int n, int x)
{
    int count=0;
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid =(low+high)/2;
        
        if(arr[mid]>x)
            high=mid-1;
        else if(arr[mid]<x)
            low=mid+1;
        else 
        {
            if(mid==0 || arr[mid]!=arr[mid-1])
            {
                while(arr[mid]==x)
                {
                    count++;
                    mid++;
                }
                return count;
            }
            else 
                high=mid-1;
        }
    }
    return -1;
}

// Solution 3:
int firstOcc(int arr[], int n, int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid]<x)
            low=mid+1;
        else if(arr[mid]>x)
            high=mid-1;
        else
        {
            if(mid==0 || arr[mid]!=arr[mid-1])
                return mid;
            else
                high=mid-1;
        }
    }
    return -1;
}

int lastOcc(int arr[], int n, int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid]<x)
            low=mid+1;
        else if(arr[mid]>x)
            high=mid-1;
        else
        {
            if(mid==n-1 || arr[mid]!=arr[mid+1])
                return mid;
            else
                low=mid+1;
        }
    }
    return -1;
}

// Highly Efficient Code: 
// Time : O(log(n))
// Aux Space: O(1)
int getOcc3(int arr[], int n, int x)
{
    int first=firstOcc(arr, n, x);
    int last=lastOcc(arr, n, x);

    if(first==-1)
        return -1;
    else 
        return (last-first+1);
}

int main()
{
    int n=8;
    int arr[n]{10, 20, 20, 20, 20, 20, 20, 30};   
    int x=20;

    cout<<getOcc1(arr, n, x)<<endl; // Naive
    cout<<getOcc2(arr, n, x)<<endl; // Efficient
    cout<<getOcc3(arr, n, x)<<endl; // Higly Efficient
    return 0;
}
