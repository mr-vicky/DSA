#include<iostream>
using namespace std;

// Naive method:
// Time: O(n^2)
// Aux Space: O(1)
bool ePoint1(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int l_sum=0, r_sum=0;
        for(int j=0; j<i; j++)
            l_sum+=arr[j];

        for(int k=i+1; k<n; k++)
            r_sum+=arr[k];

        if(l_sum==r_sum)
            return true;
    }
    return false;
}

// Efficient method:
// Time: O(n)
// Aux Space: O(1)
bool ePoint2(int arr[], int n)
{
    int r_sum=0;
    for(int i=0; i<n; i++)
        r_sum+=arr[i];

    int l_sum=0;
    for(int i=0; i<n; i++)
    {
        r_sum-=arr[i];
        if(r_sum==l_sum)    
            return true;
        l_sum+=arr[i];
    }
    return false;
}

int main()
{
    int n=6;
    int arr[n]={3, 4, 8, -9, 9, 7};
    
    cout<<boolalpha<<ePoint1(arr, n)<<endl;
    cout<<boolalpha<<ePoint2(arr, n)<<endl;

    return 0;
}