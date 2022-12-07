#include<iostream>
using namespace std;

// Recursive solution
// Time: log(n)
int bSearch2(int arr[], int x, int low, int high)
{
    int mid=(low+high)/2;
    
    if(low>high)
    {
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]<x)
            return bSearch2(arr, x, mid+1, high);
        else 
            return bSearch2(arr, x, low, mid-1);
    }
    return -1;
}

int main()
{
    int n=5;
    int x=30;
    int arr[n]={10, 20, 33, 40, 50};

    cout<<bSearch2(arr, x, 0, n-1)<<"\n"; 
    return 0;
}
