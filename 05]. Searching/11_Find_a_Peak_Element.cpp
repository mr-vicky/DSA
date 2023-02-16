#include <iostream>
using namespace std;

// Naive Method : Using Linear Approach
// TC: O(n)
// SC: O(1)
int getPeakElement1(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    if (arr[0] > arr[1])
        return arr[0];
    if (arr[n - 1] > arr[n - 2])
        return arr[n - 1];

    for (int i = 1; i < n - 1; i++)
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            return arr[i];
}

// Efficient Approach : Using Binary Search
// TC: O(log(n))
// SC: O(1)
int getPeakElement2(int arr[], int n)
{
    int low = 0, high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;

        if((mid == 0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
            return arr[mid];

        if(mid>0 && arr[mid-1]>=arr[mid])
            high=mid-1;
        else 
            low=mid+1;
    }
    return -1;
}

int main()
{
    int arr[5]{5, 10, 20, 15, 7};
    int n = 5;
    cout << getPeakElement1(arr, n)<<endl;  // Naive Method 
    cout << getPeakElement2(arr, n)<<endl;  // Efficient Method
    return 0;
}