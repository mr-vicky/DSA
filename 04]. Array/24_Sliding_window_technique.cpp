// Find the maximum sum of k consecutive elements
#include<iostream>
using namespace std;

// Naive Method
// Time: O(n*k)
// Aux. space: O(1)
int maxSum1(int arr[], int n, int k)
{
    int curr_sum=0, max_sum=0;
    for(int i=0; i+k-1<n; i++)
    {
        curr_sum=0;
        for(int j=0; j<k; j++)
        {
            curr_sum+=arr[i+j];
            max_sum= max(curr_sum, max_sum);
        }
    }
    return max_sum;

}

// Sliding Window Technique
// Time: O(n)
// Aux space: O(1)
int MaxSum2(int arr[], int n, int k)
{
    int curr_sum=0;

    for(int i=0; i<k; i++)
    {
        curr_sum+=arr[i];
    }

    int res=curr_sum;
    for(int i=k; i<n; i++)
    {
        curr_sum=curr_sum+arr[i]-arr[i-k]; 
        res= max(res, curr_sum);
    }
    return res;
}

int main()
{
    int n=6;
    int arr[n]={1, 8, 30, -5, 20, 7};
    int k=3;

    cout<<maxSum1(arr, n, k)<<endl;
    cout<<MaxSum2(arr, n, k)<<endl;

    return 0;
}
