#include<iostream>
using namespace std;

// Naive Method: 
// Time: O(n^2)
// Space: O(1)
int maxCircularSum1(int arr[], int n)
{
    int res=arr[0];

    for(int i=0; i<n; i++)
    {
        int curr_sum=arr[i];
        int curr_max=arr[i];
        for(int j=i+1; j<n; j++)
        {   
            int index=(i+j)%4;
            curr_sum+=arr[index];
            curr_max = max(curr_max, curr_sum);
        }

        res=max(curr_max, res);
    }
    return res;
}

// Efficient Method: 
// Time: 0(n)
// Space: O(1)

int normalMaxSum(int arr[], int n)
{
    int res=arr[0], maxEnding=arr[0];
    for(int i=1; i<n; i++)
    {
        maxEnding=max(arr[i], maxEnding+arr[i]);
        res= max(res, maxEnding);
    }
    return res;
}

int maxCircularSum2(int arr[], int n)
{
    int max_normal = normalMaxSum(arr, n);
    if(max_normal<0)
        return max_normal;
    
    int arr_sum=0;
    for(int i=0; i<n; i++)
    {
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int max_circular=arr_sum + normalMaxSum(arr, n);

    return max(max_normal, max_circular);
}


int main()
{
    int n=4;
    int arr[n]={-3, -4, 6, -2};

    cout<<maxCircularSum1(arr, n)<<endl;
    cout<<maxCircularSum2(arr, n)<<endl;

    return 0;
}