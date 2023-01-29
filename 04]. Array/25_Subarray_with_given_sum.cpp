#include<iostream>
using namespace std;

// Naive method:
// Time: O(n^2)
// Aux space: O(1)
bool isSubarray(int arr[], int n, int sum)
{
    int curr=0;
    for(int i=0; i<n; i++)
    {
        curr=0;
        for(int j=i; j<n; j++)
        {
            curr+=arr[j];
            if(curr==sum)
                return true;
        }
    }
    return false;  
}

// Efficient method:
// Time: O(n)
// Aux space: O(1)
bool isSubarrayO(int arr[], int n, int sum)
{
    int curr=0;
    int s=0;
    for(int e=0; e<n; e++)
    {
        curr+=arr[e];
        while(sum<curr)
        {
            curr-=arr[s];
            s++;
        }
        if(curr==sum)
            return true;
    }
    return false;
}

int main()
{
    int n=5;
    int arr[n]={1, 4, 20, 3, 10};
    int sum = 33;

    cout<<boolalpha<<isSubarray(arr, n, sum)<<endl;
    cout<<boolalpha<<isSubarrayO(arr, n, sum)<<endl;
    return 0;
}
