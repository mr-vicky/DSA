#include<iostream>
using namespace std;

// Method 1
bool isSorted(int arr[], int n)
{
    int temp=0;
    for(int i=1; i<n; i++)
        if(arr[i]>arr[temp])
            temp=i;
        else if(arr[i]<arr[temp])
            return false;

    return true;
}

// Method 2
bool isSorted2(int arr[], int n) 
{
    for(int i=1; i<n; i++)
        if(arr[i]<arr[i-1])
            return false;

    return true;
}


int main()
{
    int arr[5]={1, 2, 3, 4, 5};
    int n=5;
    cout<<boolalpha<<isSorted(arr, n)<<endl;
    cout<<boolalpha<<isSorted2(arr, n)<<endl;

    return 0;
}
