#include<iostream>
using namespace std;

// Linear search or Sequential search method used to search the element in the given list

// Time: O(n)
// Space: O(1)
int linearSearch(int arr[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
}

int main()
{
    int n=6;
    int x=7;
    int arr[n]={2, 4, 5, 6, 8, 7};

    cout<<linearSearch(arr, n, x);
    return 0;
}
