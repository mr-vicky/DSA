#include<iostream>
using namespace std;

// Solution 2: Naive Code 
// Time: O(position),  x=position
// Space: O(1)
int search1(int arr[], int x)
{
    int i=0;
    while(true)
    {
        if(arr[i]==x)  
            return i;
        if(arr[i]>x)
            return -1;
        i++;
    }
}


// Solution 2: Efficient code
int binarySearch(int arr[], int low, int high, int x)
{
    if(low>high)
        return -1;
    
    int mid = (low+high)/2;

    if(arr[mid]==x)
        return mid;
    else if(arr[mid]>x)
        return binarySearch(arr, low, mid-1, x);
    else 
        return binarySearch(arr, mid+1, high, x);
}

// Efficient Code: 
// Time: log(position),  x=position
// Space: O(1)
int search2(int arr[], int x)
{
    if(arr[0]==x) 
        return 0;

    int i=1;
    while(arr[i]<x)
         i=i*2;

    if(arr[i]==x)
        return i;

    return binarySearch(arr, i/2+1, i-1, x); 
}

int main()
{
    int arr[]{1, 2, 3, 5, 5}; // this solution works for infinite sized array
    int x=4;
    cout<<search1(arr, x)<<endl;
    cout<<search2(arr, x)<<endl;

    return 0;
}
