
// Note: Two pointer approach works only when the array is sorted 
#include<iostream>
using namespace std;

// Naive Method:
// TC: O(n^3)
// SC: O(1)
bool isTriplet1(int arr[], int x, int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n-2; j++)
            for(int k=j+1; k<n; k++)
                if(arr[i]+arr[j]+arr[k]==x)
                    return true;
    return false;
}


// Efficient Method: 
// TC: O(n^2)
// SC: o(1)
bool isPair(int arr[], int x, int j, int n)
{
    int k = n-1;
    while(j<k)
    {
        if(arr[j]+arr[k]==x)
            return true;
        else if(arr[j]+arr[k]<x)
            j++;
        else 
            k--;
    }
    return false;
}

bool isTriplet2(int arr[], int x, int n)
{
    for(int i=0; i<n-2; i++)
        if(isPair(arr, x-arr[i], i+1, n))
            return true;

    return false;
}

int main()
{
    int n = 7;
    int arr[n]={2,3,4,8,9,20,40};
    int x = 32;

    cout<<boolalpha<<isTriplet1(arr, x, n)<<endl; // Naive method
    cout<<boolalpha<<isTriplet2(arr, x, n)<<endl; // Efficient method
    return 0;
}
