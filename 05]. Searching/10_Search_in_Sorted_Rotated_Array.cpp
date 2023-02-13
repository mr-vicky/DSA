#include<iostream>
using namespace std;

// Naive Code 
// TC: O(n)
// SC: O(1)
int linear_search(int arr[], int n, int x)
{
    for(int i=0; i<n; i++)
        if(arr[i]==x)
            return i;
    return -1;
}

// Efficient Code
// TC: O(log(n))
// SC: O(1)
int search(int arr[], int n, int x)
{
    int low = 0, high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid]==x) 
            return mid;
        if(arr[low]<arr[mid])
        {
            if(x>=arr[low] && x<arr[mid])
                high = mid-1;
            else 
                low = mid+1;
        }
        else 
        {
                if(x>arr[mid] && x<=arr[high])
                    low = mid +1;
                else 
                    high = mid-1;
        }
    }
    return -1;
}

int main()
{
    int n = 6;
    int arr[n]={10, 20, 40, 60, 5, 8};
    int x = 5;

    cout<<linear_search(arr, n, x)<<endl; // Naive Code
    cout<<search(arr, n, x)<<endl;  // Efficient Code

    return 0;
}