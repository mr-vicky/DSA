#include<iostream>
using namespace std;

// Naive solution
// Time: O(n^2)
// Space: O(1)
int maximum_subarray_sum1(int arr[], int n)
{
    int res=arr[0];

    for(int i=0; i<n; i++)
    {
        int curr=0;
        for(int j=i; j<n; j++)
        {
            curr=curr+arr[j];
            res=max(res, curr);
        }
    }
    return res;
}

// Efficient solution
// Time: O(n)
// Space: O(1)
int maximum_subarray_sum2(int arr[], int n)
{
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=0; i<n; i++)
    {
        maxEnding= max(maxEnding+arr[i], arr[i]);
        res= max(maxEnding, res);
    }
    return res;
}

int main()
{
    int n=7; 
    int arr[n]={2, 3, -8, 7, -1, 2, 3};

    cout<<maximum_subarray_sum1(arr, n)<<endl;
    cout<<maximum_subarray_sum2(arr, n)<<endl;

    return 0;
}
