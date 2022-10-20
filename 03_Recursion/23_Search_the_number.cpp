#include<iostream>
using namespace std;

// Solution: 1
bool recursiveSearch(int arr[], int n, int i, int k)
{
    if(i==n) return false;
    if(arr[i]==k) return true;

    return recursiveSearch(arr, n, i+1, k);
}

// Solution: 2
bool resursiveSearch2(int arr[], int s, int e, int k)
{
    if(e<s)
        return false;
    if(arr[s]==k)
        return true;
    if(arr[e]==k)
        return true;
    
    return resursiveSearch2(arr, s+1, e-1, k);
}

int main()
{
    int arr[]={1, 2, 7, 4, 3};
    cout<<recursiveSearch(arr, 5, 0, 3)<<endl;
    cout<<resursiveSearch2(arr, 0, 4, 3)<<endl;
    return 0;
}