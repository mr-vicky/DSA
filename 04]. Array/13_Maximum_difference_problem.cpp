#include<iostream>
using namespace std;

// Solution: 1
// Time: Θ(n^2)
// Space: O(1)
int maximumDifference1(int arr[], int n)
{
    int max=-100000;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
            if((arr[j]-arr[i])>max)
               max=(arr[j]-arr[i]);
    }
    return max;
}

// Solution: 2
// Time: Θ(n^2)
// space: O(1)
int maximumDifference2(int arr[], int n)
{
    int res=arr[1]-arr[0];
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            res=max(res, arr[j]-arr[i]);
        }
    }
    return res;
}

// Solution: 3
// Time: O(n)
// space: O(1)
int maximumDifference3(int arr[], int n)
{
    int res=arr[1]-arr[0];
    int min_val=arr[0];

    for(int j=1; j<n; j++)
    {
        res=max(res, arr[j]-min_val);
        min_val=min(arr[j], min_val);
    }
    return res;
}

int main()
{
    int arr[7]={2, 3, 10, 6, 4, 8, 1};
    int n=7;

    cout<<maximumDifference1(arr, n)<<endl;
    cout<<maximumDifference2(arr, n)<<endl;
    cout<<maximumDifference3(arr, n)<<endl;

    return 0;
}
